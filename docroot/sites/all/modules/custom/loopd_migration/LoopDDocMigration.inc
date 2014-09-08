<?php

class LoopDDocMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Migrates Docs.');
    $query = Database::getConnection('docs', 'docs')
        ->select('node', 'n')
        ->fields('n', array('nid', 'title', 'status', 'created', 'changed', 'language'));

    $query->leftJoin('field_data_body', 'body', 'n.nid = body.entity_id');
    $query->fields('body', array('body_value', 'body_format'));
    $query->leftJoin('field_data_field_doc_more', 'more', 'n.nid = more.entity_id');
    $query->addExpression("GROUP_CONCAT(DISTINCT more.field_doc_more_value SEPARATOR '||||')", 'more');
    $source_fields = array(
      'body_fields' => t('Body fields'),
      'more' => t('More field'),
    );
    $query->addExpression("GROUP_CONCAT(DISTINCT more.field_doc_more_format SEPARATOR '||||')", 'more_formats');
    $source_fields += array(
      'more_formats' => t('More Field Format'),
    );
    $query->leftJoin('field_data_field_project_categories', 'cats', 'n.nid = cats.entity_id');
    $query->addExpression("GROUP_CONCAT(DISTINCT cats.field_project_categories_tid SEPARATOR '||||')", 'categories');
    $source_fields += array(
      'categories' => t('Module categories'),
    );
    $query->leftJoin('field_data_field_project_tags', 'project_tags', 'n.nid = project_tags.entity_id');
    $query->addExpression("GROUP_CONCAT(DISTINCT project_tags.field_project_tags_tid SEPARATOR '||||')", 'project_tags');
    $source_fields += array(
      'project_tags' => t('Tags'),
    );
    $query->leftJoin('field_data_field_doc_tags', 'doc_tags', 'n.nid = doc_tags.entity_id');
    $query->addExpression("GROUP_CONCAT(DISTINCT doc_tags.field_doc_tags_tid SEPARATOR '||||')", 'doc_tags');
    $source_fields += array(
      'doc_tags' => t('Doc Tags'),
      'tags' => t('Tags Combined'),
    );


    $query->leftJoin('field_data_field_project_uri', 'uri', 'n.nid = uri.entity_id');
    $query->fields('uri', array('field_project_uri_url'));

    // Multi-value Fields    
    // Grouping is needed for multi-value fields because we are using
    // GROUP_CONCAT. We concatenate the values with a unique separator that is
    // not present in the source table.
    // @see https://drupal.org/node/1012810#node-1012810
    $query->groupBy('n.nid');

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationNode('article');
    $this->map = new MigrateSQLMap($this->machineName, array(
      'nid' => array(
        'type' => 'int',
        'unsigned' => FALSE,
        'not null' => TRUE,
        'description' => 'ID',
        'alias' => 'n',
      ),
        ), MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'changed');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('field_body', 'body_fields');
    $this->addFieldMapping('field_body:format')
        ->defaultValue('full_html_no_linebreaks');
    $this->addFieldMapping('field_body:language')
        ->defaultValue('und');
    $this->addFieldMapping('field_external_references', 'field_project_uri_url');
    $this->addFieldMapping('field_tags', 'tags');
    $this->addFieldMapping('field_tags:source_type')
        ->description('Term reference: source type')
        ->defaultValue('tid');
    $this->addFieldMapping('field_tags:ignore_case')
        ->description('Term reference: ignore case');
    $this->addFieldMapping('field_teaser', 'body_value')
        ->callbacks(array($this, 'teaserCallback'));
  }

  /**
   * Overrides method in Migration.
   */
  public function prepareRow($row) {
    // Always include this fragment at the beginning of every prepareRow()
    // implementation, so parent classes can ignore rows.
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    $this->prepareRowBodyFields($row);
    $this->prepareRowTags($row);
    return TRUE;
  }

  /**
   * Prepares body.
   */
  public function prepareRowBodyFields($row) {
    $filter = new stdClass();
    $filter->settings = array(
      'filter_url_length' => 80,
    );
    $body_value = !empty($row->body_value) ? $row->body_value : '';
    if ($row->body_format === 'filtered_html' || $row->body_format === 'plain_text') {
      $body_value = _filter_url(_filter_autop($body_value), $filter);
    }
    $body = array($body_value);
    $more_fields = !empty($row->more) ? explode('||||', $row->more) : array();
    $more_formats = !empty($row->more_formats) ? explode('||||', $row->more_formats) : array();
    $more = array();
    foreach ($more_fields as $key => $more_field) {
      if ($more_formats[$key] === 'filtered_html' || $more_formats[$key] === 'plain_text') {
        $more[] = _filter_url(_filter_autop($more_field), $filter);
      }
    }

    $row->body_fields = array_merge($body, $more);
  }

  /**
   * Prepares categories.
   */
  public function prepareRowTags($row) {
    $tags = array();
    $row_cats = !empty($row->categories) ? explode('||||', $row->categories) : array();
    foreach ($row_cats as $row_cat) {
      switch ($row_cat) {
        // Essential.
        case '52':
          $tags[] = 8;
          break;
        // Common.
        case '53':
          $tags[] = 6;
          break;
        // Specialty.
        case '54':
          $tags[] = 12;
          break;
        // Development.
        case '55':
          $tags[] = 2;
          break;
      }
    }
    $doc_tags = !empty($row->doc_tags) ? explode('||||', $row->doc_tags) : array();
    $project_tags = !empty($row->project_tags) ? explode('||||', $row->project_tags) : array();
    $row_tags = array_merge($doc_tags, $project_tags);
    foreach ($row_tags as $tag) {
      switch ($tag) {
        // Authoring
        case 63:
          $tags[] = 13;
          break;
        // content structure
        case 81:
          $tags[] = 3;
          break;
        // ctools
        case 4:
          $tags[] = 11;
          break;
        // fields
        case 57:
          $tags[] = 15;
          break;
        // forms
        case 24:
          $tags[] = 10;
          break;
        // maps
        case 64:
          $tags[] = 4;
          break;
        // migration
        case 68:
          $tags[] = 14;
          break;
        // multilingual
        case 106:
          $tags[] = 9;
          break;
        // search
        case 94:
          $tags[] = 16;
          break;
        // security
        case 91:
          $tags[] = 5;
          break;
        // spam
        case 25:
          $tags[] = 17;
          break;
        // theming
        case 30:
          $tags[] = 1;
          break;
        // workflow
        case 92:
          $tags[] = 7;
          break;
      }
    }
    $row->tags = $tags;
  }

  public function teaserCallback($value) {
    $teaser = truncate_utf8($value, 450, TRUE);
    return $teaser;
  }

}
