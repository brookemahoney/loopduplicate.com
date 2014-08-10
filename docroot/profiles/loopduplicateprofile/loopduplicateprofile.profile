<?php
/**
 * @file loopduplicateprofile.profile
 */

/**
 * Implements hook_install_tasks().
 *
 * Note, these tasks run after the "Configure site" step (where the admin
 * password is set).
 */
function loopduplicateprofile_install_tasks($install_state) {

  // Adds a CSS file for the installation process.
  drupal_add_css(drupal_get_path('profile', 'loopduplicateprofile') . '/loopduplicateprofile.css');


  // Adds install tasks.
  // @see https://api.drupal.org/api/drupal/modules%21system%21system.api.php/function/hook_install_tasks/7
  //
  // Sets system variables.
  $tasks = array(
    'loopduplicateprofile_install_set_variables' => array(
      'display_name' => 'Configuration variables',
      'display' => FALSE,
      'type' => 'normal',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    ),
  );

  // Sets the theme to LoopDuplicate.
  $tasks['loopduplicateprofile_install_set_theme'] = array(
    'display_name' => 'Install Theme',
    'display' => FALSE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  // Configures Panels Everywhere.
  $tasks['loopduplicateprofile_panelseverywhere'] = array(
    'display_name' => 'Configure Panels Everywhere',
    'display' => FALSE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  return $tasks;
}

/**
 * Sets Drupal variables.
 */
function loopduplicateprofile_install_set_variables() {
  // Prevents message from being shown when the advanced help isn't installed.
  variable_set('views_ui_show_advanced_help_warning', 0);
  // Transliterates URLs prior to creating path aliases
  variable_set('pathauto_transliterate', 1);
}

/**
 * Enables the LoopDuplicate theme.
 */
function loopduplicateprofile_install_set_theme() {
  // Enables custom theme.
  theme_enable(array('loopduplicatetheme'));
  // Sets custom theme as default.
  variable_set('theme_default', 'loopduplicatetheme');
  // Sets custom theme as admin theme.
  variable_set('admin_theme', 'loopduplicatetheme');
  system_rebuild_theme_data();
  drupal_theme_rebuild();
  
  // Removes default content types.
  $types = array(
    'article',
    'page',
  );
  foreach ($types as $type) {
    node_type_delete($type);
    variable_del('node_preview_' . $type);
  }
  node_types_rebuild();
  menu_rebuild();
}

/**
 * Implements hook_install_tasks_alter()
 */
function loopduplicateprofile_install_tasks_alter(&$tasks, $install_state) {
  // Uses Panopoly's method of dependency handling.
  $tasks['install_load_profile']['function'] = 'loopduplicateprofile_install_load_profile';
}

/**
 * Implements hook_form_FORM_ID_alter()
 */
function loopduplicateprofile_form_install_configure_form_alter(&$form, $form_state) {

  // Hide status and warning messages.
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set defaults for site configuration form
  $form['site_information']['site_name']['#default_value'] = 'LoopDuplicate';
  $form['admin_account']['account']['name']['#default_value'] = 'loopduplicate';
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Los_Angeles';
  $form['site_information']['site_mail']['#default_value'] = 'noreply@' . $_SERVER['HTTP_HOST'];
  $form['admin_account']['account']['mail']['#default_value'] = 'noreply@' . $_SERVER['HTTP_HOST'];
}

/**
 * Configures Panels Everywhere
 */
function loopduplicateprofile_panelseverywhere() {
  features_revert_module('loopduplicatepanelseverywhere');
}

/**
 * Improved dependency checking.
 * 
 * Code originally in Panopoly.
 * @see http://cgit.drupalcode.org/panopoly_core/tree/panopoly_core.profile.inc.
 */
function loopduplicateprofile_install_load_profile(&$install_state) {

  // Loading the install profile normally
  install_load_profile($install_state);

  // Include any dependencies that we might have missed...
  $dependencies = $install_state['profile_info']['dependencies'];
  foreach ($dependencies as $module) {
    $module_info = drupal_parse_info_file(drupal_get_path('module', $module) . '/' . $module . '.info');
    if (!empty($module_info['dependencies'])) {
      foreach ($module_info['dependencies'] as $dependency) {
        $parts = explode(' (', $dependency, 2);
        $dependencies[] = array_shift($parts);
      }
    }
  }
  $install_state['profile_info']['dependencies'] = array_unique($dependencies);
}