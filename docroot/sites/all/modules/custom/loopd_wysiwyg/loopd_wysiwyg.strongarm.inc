<?php
/**
 * @file
 * loopd_wysiwyg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopd_wysiwyg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_css_mode';
  $strongarm->value = '3';
  $export['geshifilter_css_mode'] = $strongarm;

  return $export;
}
