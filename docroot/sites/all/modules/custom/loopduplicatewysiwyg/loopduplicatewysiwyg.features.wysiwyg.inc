<?php
/**
 * @file
 * loopduplicatewysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function loopduplicatewysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html_no_linebreaks
  $profiles['full_html_no_linebreaks'] = array(
    'format' => 'full_html_no_linebreaks',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 0,
      'user_choose' => 1,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'TextColor' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'HorizontalRule' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'SpecialChar' => 1,
          'Format' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Table' => 1,
          'Find' => 1,
          'Replace' => 1,
          'Maximize' => 1,
          'SpellChecker' => 1,
          'Scayt' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 1,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'none',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
