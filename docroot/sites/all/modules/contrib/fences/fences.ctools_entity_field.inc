<?php
/**
 * @file
 * Extends the ctools entity field content type with fences wrapper settings.
 *
 * @see fences_ctools_plugin_post_alter()
 */

// Load original content type file.
module_load_include('inc', 'ctools', 'plugins/content_types/entity_context/entity_field');

/**
 * Wrapper around the original entity field content type callback.
 *
 * @see ctools_entity_field_content_type_content_type()
 */
function fences_ctools_entity_field_content_type_content_type($subtype) {
  if ($type = ctools_entity_field_content_type_content_type($subtype)) {
    // Inject our own settings form to provide the fences options.
    $type['edit form']['fences_ctools_entity_field_content_type_formatter_options'] = $type['edit form']['ctools_entity_field_content_type_formatter_options'];
    unset($type['edit form']['ctools_entity_field_content_type_formatter_options']);
    return $type;
  }
}

/**
 * Wrapper around the original entity field settings form callback.
 *
 * @see ctools_entity_field_content_type_formatter_options()
 */
function fences_ctools_entity_field_content_type_formatter_options($form, &$form_state) {
  $conf = $form_state['conf'];
  $form = ctools_entity_field_content_type_formatter_options($form, $form_state);
  $form['fences_wrapper'] = array(
    '#type' => 'select',
    '#title' => t('Wrapper markup'),
    '#default_value' => isset($conf['fences_wrapper']) ? $conf['fences_wrapper'] : 'div',
    '#options' => fences_get_fences_options('field'),
    '#description' => t('Choose the HTML to use to wrap the field.'),
  );
  form_load_include($form_state, 'inc', 'fences', 'fences.ctools_entity_field');
  return $form;
}

/**
 * Wrapper around the original entity field settings form submit callback.
 */
function fences_ctools_entity_field_content_type_formatter_options_submit($form, &$form_state) {
  $form_state['conf']['fences_wrapper'] = $form_state['values']['fences_wrapper'];
  ctools_entity_field_content_type_formatter_options_submit($form, $form_state);
}

/**
 * Wrapper around the original entity field render callback.
 *
 * @see fences_preprocess_field()
 */
function fences_ctools_entity_field_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }
  $output = ctools_entity_field_content_type_render($subtype, $conf, $panel_args, $context);
  // If a fences formatter is defined - add it to the content element.
  if (isset($conf['fences_wrapper'])) {
    $output->content['#fences_wrapper'] = $conf['fences_wrapper'];
  }
  return $output;
}
