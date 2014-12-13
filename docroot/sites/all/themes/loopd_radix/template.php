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
  $radix_path = drupal_get_path('theme', 'radix');

  // Removes a Radix JS file. This theme uses a modified version which can be
  // found in the assets/javascripts/source/contrib folder.
  unset($javascript[$radix_path . '/assets/javascripts/radix-script.js']);
}
