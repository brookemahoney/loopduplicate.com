<?php
/**
 * @file
 * loopd_xmlsitemap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loopd_xmlsitemap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
