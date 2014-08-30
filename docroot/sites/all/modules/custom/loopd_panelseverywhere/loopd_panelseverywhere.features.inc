<?php
/**
 * @file
 * loopd_panelseverywhere.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_panelseverywhere_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
