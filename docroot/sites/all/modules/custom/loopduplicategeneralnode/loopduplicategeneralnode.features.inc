<?php
/**
 * @file
 * loopduplicategeneralnode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopduplicategeneralnode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function loopduplicategeneralnode_node_info() {
  $items = array(
    'generalnode' => array(
      'name' => t('General Node'),
      'base' => 'node_content',
      'description' => t('This content type can be used for most content. It will have a page of it own. It, like most other content types, has various "view modes" which can be set up to display the information in different ways, such as a teaser or a search result.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
