<?php
/**
 * @file
 * Declares migrations.
 */

/**
 * Implements hook_migrate_api().
 */
function loopd_migration_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'nodes' => array(
        'title' => t('Nodes'),
      ),
    ),
    'migrations' => array(
      'LoopDDoc' => array(
        'class_name' => 'LoopDDocMigration',
        'group_name' => 'nodes',
      ),
    ),
  );
  return $api;
}
