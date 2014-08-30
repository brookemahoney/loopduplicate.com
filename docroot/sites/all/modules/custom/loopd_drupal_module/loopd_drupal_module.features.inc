<?php
/**
 * @file
 * loopd_drupal_module.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_drupal_module_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function loopd_drupal_module_node_info() {
  $items = array(
    'drupalmodule' => array(
      'name' => t('Drupal Module'),
      'base' => 'node_content',
      'description' => t('This content type is used to keep track of information related to Drupal modules. Each node should be dedicated to a single Drupal module.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
