<?php
/**
 * @file
 * loopduplicateprofilepanelseverywhere.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopduplicateprofilepanelseverywhere_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  return $export;
}
