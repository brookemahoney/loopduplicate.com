<?php

/**
 * Implements hook_field_formatter_info().
 */
function select_or_other_field_formatter_info() {
  return array(
    'select_or_other_formatter' => array(
      'label' => t('Select or other'),
      'field types' => array(
        'text',
        'number_integer',
        'number_decimal',
        'number_float'
      ),
    ),
  );
}

/**
 * Implements hook_field_formatter_view().
 */
function select_or_other_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  $field_options = array();

  if (isset($instance['widget']['settings']['available_options'])) {
    $field_options = explode("\n", $instance['widget']['settings']['available_options']);
    $pos = strpos($instance['widget']['settings']['available_options'], '|');

    if ($pos !== FALSE) {
      // There are keys.
      $temp_options = array();
      foreach ($field_options as $field_item) {
        $exploded = explode('|', $field_item);
        $temp_options[$exploded[0]] = isset($exploded[1]) ? $exploded[1] : $exploded[0];
      }
      $field_options = $temp_options;
    }
  }

  foreach ($items as $delta => $item) {
    if (array_key_exists($item['value'], $field_options)) {
      $element[$delta] = array('#markup' => filter_xss_admin($field_options[$item['value']]));
    }
    else {
      $element[$delta] = array('#markup' => check_plain($item['value']));
    }
  }

  return $element;
}
