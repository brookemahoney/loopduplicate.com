<?php
/**
 * @file
 * loopd_backup.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function loopd_backup_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'default';
  $item->name = 'Default Settings';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'notify_success_enable' => 0,
    'notify_success_email' => 'noreply@loopduplicate.com',
    'notify_failure_enable' => 0,
    'notify_failure_email' => 'noreply@loopduplicate.com',
    'utils_site_offline' => 0,
    'utils_site_offline_message' => 'LoopDuplicate is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_entity_fieldable_panels_pane' => 'cache_entity_fieldable_panels_pane',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_image' => 'cache_image',
          'cache_libraries' => 'cache_libraries',
          'cache_menu' => 'cache_menu',
          'cache_page' => 'cache_page',
          'cache_panels' => 'cache_panels',
          'cache_path' => 'cache_path',
          'cache_token' => 'cache_token',
          'cache_update' => 'cache_update',
          'cache_views' => 'cache_views',
          'cache_views_data' => 'cache_views_data',
          'ctools_css_cache' => 'ctools_css_cache',
          'ctools_object_cache' => 'ctools_object_cache',
          'sessions' => 'sessions',
        ),
        'utils_lock_tables' => 0,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
sites/devlocal.loopduplicate.com/settings.php
/Applications/MAMP/tmp/php',
      ),
    ),
  );
  $export['default'] = $item;

  return $export;
}
