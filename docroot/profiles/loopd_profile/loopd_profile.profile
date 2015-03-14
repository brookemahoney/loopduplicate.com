<?php
/**
 * @file loopd_profile.profile
 */

/**
 * Implements hook_form_FORM_ID_alter()
 *
 * Alters the installation form.
 */
function loopd_profile_form_install_configure_form_alter(&$form, $form_state) {

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
 * Implements hook_install_tasks_alter()
 */
function loopd_profile_install_tasks_alter(&$tasks, $install_state) {
  // Uses Panopoly's method of dependency handling.
  $tasks['install_load_profile']['function'] = 'loopd_profile_install_load_profile';
}

/**
 * Improved dependency checking.
 *
 * Code originally in Panopoly.
 * @see http://cgit.drupalcode.org/panopoly_core/tree/panopoly_core.profile.inc.
 */
function loopd_profile_install_load_profile(&$install_state) {

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

/**
 * Implements hook_install_tasks().
 *
 * Note, these tasks run after the "Configure site" step (where the admin
 * password is set).
 */
function loopd_profile_install_tasks($install_state) {

  // Adds a CSS file for the installation process.
  drupal_add_css(drupal_get_path('profile', 'loopd_profile') . '/loopd_profile.css');


  // Adds install tasks.
  // @see https://api.drupal.org/api/drupal/modules%21system%21system.api.php/function/hook_install_tasks/7
  //
  // Sets system variables.
  $tasks = array(
    'loopd_profile_install_set_variables' => array(
      'display_name' => 'Configuration variables',
      'display' => FALSE,
      'type' => 'normal',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    ),
  );

  // Sets the theme to LoopDuplicate.
  $tasks['loopd_profile_install_set_theme'] = array(
    'display_name' => 'Install Theme',
    'display' => FALSE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  // Reverts some features.
  $tasks['loopd_profile_install_features'] = array(
    'display_name' => 'Configure Features',
    'display' => FALSE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
  );

  return $tasks;
}

/**
 * Sets Drupal variables.
 */
function loopd_profile_install_set_variables() {
  // Prevents views warning message about advanced help module installation.
  variable_set('views_ui_show_advanced_help_warning', 0);
  // Transliterates URLs prior to creating path aliases.
  variable_set('pathauto_transliterate', 1);
  // Disables the secondary menu.
  variable_set('menu_secondary_links_source', '');
  // Disables "Keep menu at top of page" for admin menu.
  variable_set('admin_menu_position_fixed', 0);
  // Turns caching on for anonymous users.
  variable_set('cache', 1);
  // Sets an anonymous maintenance mode message so that if the site's name is
  // ever changed, the message won't contain the original name.
  $maintenance_message = t('We are currently under maintenance and should be'
    . ' back shortly. Thank you for your patience.');
  variable_set('maintenance_mode_message', $maintenance_message);
  // Sets maximum upload size.
  variable_set('file_entity_max_filesize', '50 MB');
  // Sets Pathauto update behavior; Creates a new alias and leave the existing
  // alias functioning.
  variable_set('pathauto_update_action', 1);
  // Use all words in title when creating a path alias.
  // Default: a, an, as, at, before, but, by, for, from, is, in, into, like, of,
  // off, on, onto, per, since, than, the, this, that, to, up, via, with
  variable_set('pathauto_ignore_words', '');
  // Sets default jQuery version to 1.10.
  variable_set('jquery_update_jquery_version', '1.10');
  // Sets jQuery to 1.8 in admin pages. Otherwise, some JS doesn't work on the
  // add new view page, admin/structure/views/add. For example, when clicking on
  // the description checkbox, the description text field should be shown but it
  // isn't if jquery is set to 1.9 or 1.10.
  variable_set('jquery_update_jquery_admin_version', '1.8');
  // Sets the active search modules.
  variable_set('search_active_modules', array(
    'node' => 'node',
    'file_entity' => '0',
    'user' => '0',
  ));
  // Sets the site homepage to /search.
  variable_set('site_frontpage', 'search');
  // Override the default field wrapper markup with Fences’ lean markup
  // (single div wrapper).
  variable_set('fences_default_markup', 1);
  // Turns on CSS and JS aggregation by default.
  variable_set('preprocess_css', 1);
  variable_set('preprocess_js', 1);
}

/**
 * Enables the LoopDuplicate theme.
 */
function loopd_profile_install_set_theme() {
  // Enables custom theme.
  theme_enable(array('loopd_radix'));
  // Sets default theme.
  variable_set('theme_default', 'loopd_radix');
  // Sets default admin theme.
  variable_set('admin_theme', 'seven');
  // Uses the admin theme when editing or creating content.
  variable_set('node_admin_theme', 1);

  // Rebuilds theme caches.
  system_rebuild_theme_data();
  drupal_theme_rebuild();

  // Removes page content type.
  $type = 'page';
  node_type_delete($type);
  variable_del('node_preview_' . $type);
  node_types_rebuild();
  menu_rebuild();
}

/**
 * Configures Features.
 */
function loopd_profile_install_features() {
  features_revert();
  // Necessary for loopd_nodeaccess.
  node_access_rebuild();
}
