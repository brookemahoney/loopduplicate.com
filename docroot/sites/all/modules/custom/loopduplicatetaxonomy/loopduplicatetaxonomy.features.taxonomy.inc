<?php
/**
 * @file
 * loopduplicatetaxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function loopduplicatetaxonomy_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
