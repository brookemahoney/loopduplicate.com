<?php

/**
 * Preprocesses nodes.
 */
function loopd_radix_preprocess_node(&$variables) {
  $variables['submitted'] = date('M jS, Y', $variables['created']);

  // Preprocesses the teaser view mode.
  if($variables['view_mode'] == 'teaser') {
    // Adds a class to the title.
    $variables['title_attributes_array']['class'][] = 'teaser__title';
  }
}
