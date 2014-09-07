<?php
/**
 * @file
 * loopd_nodeaccess.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_nodeaccess_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
