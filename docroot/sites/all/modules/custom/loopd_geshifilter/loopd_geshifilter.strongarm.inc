<?php
/**
 * @file
 * loopd_geshifilter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopd_geshifilter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_bash';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_bash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_c';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_c'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_cpp';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_cpp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_css';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_drupal5';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_drupal5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_drupal6';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_drupal6'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_html5';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_html5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_java';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_java'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_javascript';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_mysql';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_mysql'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_php';
  $strongarm->value = 1;
  $export['geshifilter_language_enabled_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_python';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_python'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_rails';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_rails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_enabled_ruby';
  $strongarm->value = 0;
  $export['geshifilter_language_enabled_ruby'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_bash';
  $strongarm->value = '<bash>';
  $export['geshifilter_language_tags_bash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_css';
  $strongarm->value = '<css>';
  $export['geshifilter_language_tags_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_html5';
  $strongarm->value = '<html5>';
  $export['geshifilter_language_tags_html5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_javascript';
  $strongarm->value = '<javascript>';
  $export['geshifilter_language_tags_javascript'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_mysql';
  $strongarm->value = '<mysql>';
  $export['geshifilter_language_tags_mysql'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_language_tags_php';
  $strongarm->value = '<php>';
  $export['geshifilter_language_tags_php'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'geshifilter_tag_styles';
  $strongarm->value = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
  );
  $export['geshifilter_tag_styles'] = $strongarm;

  return $export;
}
