<?php
/**
 * @file
 * loopd_geshifilter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_geshifilter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
