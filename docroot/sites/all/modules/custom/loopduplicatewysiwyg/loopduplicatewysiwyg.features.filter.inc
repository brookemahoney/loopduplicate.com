<?php
/**
 * @file
 * loopduplicatewysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function loopduplicatewysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML No Linebreaks.
  $formats['full_html_no_linebreaks'] = array(
    'format' => 'full_html_no_linebreaks',
    'name' => 'Full HTML No Linebreaks',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'image_resize_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
