<?php

/**
 * Preprocesses nodes.
 */
function loopd_radix_preprocess_node(&$variables) {
  $variables['submitted'] = date('M jS, Y', $variables['created']);
  $variables['updated'] = date('M jS, Y', $variables['changed']);

  // Saves the raw submitted date value so that it can be accessed in
  // sites/all/themes/loopd_radix/templates/node--article--teaser.tpl.php. The
  // submitted date variables is altered before it gets to the node template; not
  // sure where.
  $variables['submitted_raw'] = $variables['submitted'];

  // Preprocesses the teaser view mode.
  if($variables['view_mode'] == 'teaser') {
    // Adds a class to the title.
    $variables['title_attributes_array']['class'][] = 'teaser__title';
  }
}
