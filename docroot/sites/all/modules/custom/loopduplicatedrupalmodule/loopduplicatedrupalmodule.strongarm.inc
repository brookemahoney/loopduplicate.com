<?php
/**
 * @file
 * loopduplicatedrupalmodule.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopduplicatedrupalmodule_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_drupalmodule';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_drupalmodule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_drupalmodule';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_drupalmodule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_drupalmodule';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_drupalmodule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_drupalmodule';
  $strongarm->value = '1';
  $export['node_preview_drupalmodule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_drupalmodule';
  $strongarm->value = 1;
  $export['node_submitted_drupalmodule'] = $strongarm;

  return $export;
}
