<?php

/**
 * Preprocesses nodes.
 */
function loopd_radix_preprocess_node(&$variables) {
  $variables['submitted'] = date('M jS, Y', $variables['created']);
}
