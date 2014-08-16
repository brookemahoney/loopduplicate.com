<?php

/**
 * Implements hook_drush_command().
 */
function loopduplicateutils_drush_command() {
  $items = array();

  $items['loopd-devmode-on'] = array(
    'description' => t('Turns on developer mode.'),
    'examples' => array(
      'drush loopddevon' => t('Turns on developer mode.'),
    ),
    'aliases' => array('loopddevon'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );
  
  $items['loopd-devmode-off'] = array(
    'description' => t('Turns off developer mode.'),
    'examples' => array(
      'drush loopddevoff' => t('Turns off developer mode.'),
    ),
    'aliases' => array('loopddevoff'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

/**
 * Drush command callback to enable dev mode.
 */
function drush_loopduplicateutils_loopd_devmode_on() {
  $module_utils = new LoopduplicateutilsModule();
  $module_list = $module_utils->getDevModules();
  $module_utils->enable($module_list);
  drupal_set_message('Dev Mode Enabled.');
}

/**
 * Drush command callback to disable dev mode.
 */
function drush_loopduplicateutils_loopd_devmode_off() {
  $module_utils = new LoopduplicateutilsModule();
  $module_list = $module_utils->getDevModules();
  $module_utils->uninstall($module_list);
  cache_clear_all();
  drupal_set_message('Dev Mode Disabled.');
}
