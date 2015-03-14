<?php
/**
 * @file
 * Theme functions
 */

require_once dirname(__FILE__) . '/includes/comment.inc';
require_once dirname(__FILE__) . '/includes/field.inc';
require_once dirname(__FILE__) . '/includes/html.inc';
require_once dirname(__FILE__) . '/includes/menu.inc';
require_once dirname(__FILE__) . '/includes/node.inc';
require_once dirname(__FILE__) . '/includes/page.inc';
require_once dirname(__FILE__) . '/includes/search.inc';
require_once dirname(__FILE__) . '/includes/views.inc';

/**
 * Implements hook_css_alter().
 */
function loopd_radix_css_alter(&$css) {
  $radix_path = drupal_get_path('theme', 'radix');

  // Radix now includes compiled stylesheets for demo purposes.
  // We remove these from our subtheme since they are already included 
  // in compass_radix.
  unset($css[$radix_path . '/assets/stylesheets/radix-style.css']);
  unset($css[$radix_path . '/assets/stylesheets/radix-print.css']);
}

/**
 * Implements hook_js_alter().
 */
function loopd_radix_js_alter(&$javascript) {
  // Removes a Radix JS file. This theme uses a modified version which can be
  // found in the assets/javascripts/source/contrib folder.
  $radix_path = drupal_get_path('theme', 'radix');
  unset($javascript[$radix_path . '/assets/javascripts/radix-script.js']);

  // Removes Bootstrap CDN call from Radix.
  $js_names = array_keys($javascript);
  foreach ($js_names as $js_name) {
    if (LoopDUtils::endsWith($js_name, 'bootstrap.min.js')) {
      unset($javascript[$js_name]);
    }
  }
}
