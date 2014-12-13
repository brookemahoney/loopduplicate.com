<?php

/**
 * Preprocesses main html wrapper.
 *
 * Adds favicon and other information to the <head>.
 */
function loopd_radix_preprocess_html(&$variables) {
  // Adds Apple touch icons.
  $theme_path = base_path() . drupal_get_path('theme', 'loopd_radix');
  $apple_touch_icon_sizes = array(
    '57x57',
    '114x114',
    '72x72',
    '60x60',
    '120x120',
    '76x76',
    '152x152',
    '180x180',
  );
  foreach ($apple_touch_icon_sizes as $apple_touch_icon_size) {
    $element = array(
      '#tag' => 'link',
      '#attributes' => array(
        'rel' => 'apple-touch-icon',
        'href' => $theme_path . '/apple-touch-icon-' . $apple_touch_icon_size . '.png',
      ),
    );
    drupal_add_html_head($element, 'loopd_radix_apple_touch_icon_' . $apple_touch_icon_size);
  }

  // Adds regular shortcut icon.
  $element = array(
    '#tag' => 'link',
    '#attributes' => array(
      'rel' => 'shortcut icon',
      'href' => $theme_path . '/favicon.ico',
    ),
  );
  drupal_add_html_head($element, 'loopd_radix_favicon');

  // Adds generic icons
  $generic_sizes = array(
    '192x192',
    '160x160',
    '96x96',
    '16x16',
    '32x32',
  );
  foreach ($generic_sizes as $generic_size) {
    $element = array(
      '#tag' => 'link',
      '#attributes' => array(
        'rel' => 'icon',
        'type' => "image/png",
        'href' => $theme_path . '/favicon-' . $generic_size . '.png',
        'sizes' => $generic_size,
      ),
    );
    drupal_add_html_head($element, 'generic_icon_' . $generic_size);
  }

  // Adds MS tile background color.
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'msapplication-TileColor',
      'content' => '#ff5400',
    ),
  );
  drupal_add_html_head($element, 'loopd_radix_msapplication_tilecolor');

  // Adds MS tile image.
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'msapplication-TileImage',
      'content' => $theme_path . '/mstile-144x144.png',
    ),
  );
  drupal_add_html_head($element, 'loopd_radix_msapplication_tileimage');

  // Adds MS application config.
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'msapplication-config',
      'content' => $theme_path . '/browserconfig.xml',
    ),
  );
  drupal_add_html_head($element, 'loopd_radix_msapplication_config');

  // Adds Android Lollipop (5.0+) theme color
  $element = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'theme-color',
      'content' => '#ff5400',
    ),
  );
  drupal_add_html_head($element, 'loopd_radix_android_meta_theme_color');

}
