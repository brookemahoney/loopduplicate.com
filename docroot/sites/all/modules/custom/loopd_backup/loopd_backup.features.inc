<?php
/**
 * @file
 * loopd_backup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_backup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
}
