<?php
/**
 * @file
 * loopd_article.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function loopd_article_default_cer() {
  $items = array();
  $items['node:article:field_internal_references*node:article:field_internal_references'] = entity_import('cer', '{
    "identifier" : "node:article:field_internal_references*node:article:field_internal_references",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:article:field_internal_references" } ] },
    "cer_right" : { "und" : [ { "path" : "node:article:field_internal_references" } ] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function loopd_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('This content type can be used for most content. It will have a page of it own. Like other content types, it has various "view modes" which can be set up to display the information in different ways, such as in a teaser or in a search result.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
