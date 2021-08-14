<?php

/**
 * @file
 * Contains SearchApiAutocompleteLiveResultsSuggester.
 */

/**
 * Provides a suggester plugin that retrieves Live Results.
 *
 * The server needs to support the "search_api_autocomplete" feature for this to
 * work.
 */
class SearchApiAutocompleteLiveResultsSuggester extends SearchApiAutocompleteSuggesterPluginBase {

  /**
   * {@inheritdoc}
   */
  public function defaultConfiguration() {
    return array(
      'display' => 'title',
      'fields' => array(),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function buildConfigurationForm(array $form, array &$form_state) {
    // Add a list of fields to include for autocomplete searches.
    $index = $this->getSearch()->index();
    $fields = $index->getFields();
    $fulltext_fields = $index->getFulltextFields();
    $options = array();

    foreach ($fulltext_fields as $field) {
      $options[$field] = check_plain($fields[$field]['name']);
    }

    $form['display'] = array(
      '#type' => 'radios',
      '#title' => t('Display method'),
      '#description' => t('The way the results should be displayed.'),
      '#options' => array(
        'view_mode' => t("Use view mode: 'Live result search' to display results"),
        'title' => t("Only show title (linked to node)"),
      ),
      '#default_value' => $this->configuration['display'],
      '#access' => $index->getEntityType(),
    );

    $form['fields'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Override used fields'),
      '#description' => t('Select the fields which should be searched for matches when looking for autocompletion suggestions. Leave blank to use the same fields as the underlying search.'),
      '#options' => $options,
      '#default_value' => drupal_map_assoc($this->configuration['fields']),
      '#attributes' => array('class' => array('search-api-checkboxes-list')),
    );
    $form['#attached']['css'][] = drupal_get_path('module', 'search_api') . '/search_api.admin.css';

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function submitConfigurationForm(array $form, array &$form_state) {
    $values = $form_state['values'];
    $values['fields'] = array_keys(array_filter($values['fields']));
    $this->setConfiguration($values);
  }

  /**
   * {@inheritdoc}
   */
  public function getAutocompleteSuggestions(SearchApiQueryInterface $query, $incomplete_key, $user_input) {
    try {
      if ($this->configuration['fields']) {
        $query->fields($this->configuration['fields']);
      }
      $query->keys($user_input);
      $results = $query->execute();
    }
    catch (SearchApiException $e) {
      return array();
    }

    $ret = array();
    $ids = array();
    foreach ((array) $results['results'] as $result) {
      $ids[] = $result['id'];
    }
    $render = NULL;
    if (!empty($ids)) {
      // Load all searched suggested entities.
      $index = $this->getSearch()->index();
      try {
        $datasource = $index->datasource();
      }
      catch (SearchApiException $e) {
        return $ret;
      }
      $items = $index->loadItems($ids);

      $entity_view = NULL;
      $entity_type = $index->getEntityType();
      if ($entity_type && $this->configuration['display'] == 'view_mode') {
        $entity_view = entity_view($entity_type, $items, 'live_results_search');
      }

      foreach ($items as $id => $item) {
        $url = NULL;
        try {
          if ($entity_view) {
            $render = drupal_render($entity_view[$entity_type][$id]);
          }
          else {
            $render = $datasource->getItemLabel($item);
          }
          $url = $datasource->getItemUrl($item);
        }
        catch (Exception $e) {
        }
        if (!$url) {
          continue;
        }

        $ret[] = array(
          'url' => url($url['path'], $url['options']),
          'render' => $render,
        );
      }
    }

    return $ret;
  }

}
