<?php
/**
 * @file
 * loopd_panelseverywhere.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopd_panelseverywhere_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = 1;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled_admin';
  $strongarm->value = 1;
  $export['panels_everywhere_site_template_enabled_admin'] = $strongarm;

  return $export;
}
