<?php

/**
 * @file
 * The Select (or other) field widget.
 */

/**
 * Implements hook_field_widget_info().
 */
function select_or_other_field_widget_info() {
  $field_types = array(
    'text',
    'number_integer',
    'number_decimal',
    'number_float',
  );
  $settings = array(
    'available_options' => '',
    'other' => t('Other'),
    'other_title' => '',
    'other_unknown_new_option' => FALSE,
    'other_unknown_defaults' => 'other',
    'other_size' => 60,
  );

  $defaults = select_or_other_field_widget_defaults($field_types, $settings);

  return array(
    'select_or_other' => array('label' => t('Select (or other) list')) + $defaults,
    'select_or_other_buttons' => array('label' => t('Select (or other) check boxes/radio buttons')) + $defaults,
  );
}

/**
 * Implements hook_field_widget_settings_form().
 */
function select_or_other_field_widget_settings_form($field, $instance) {
  $form = array();

  $settings = &$instance['widget']['settings'];
  $provided_available_options = _select_or_other_invoke_available_options($instance);

  $form['available_options'] = array(
    '#type' => 'textarea',
    '#title' => t('Available options'),
    '#description' => t('A list of values that are, by default, available for selection. Enter one value per line, in the format key|label. The key is the value that will be stored in the database, and the label is what will be displayed to the user.'),
    '#default_value' => isset($settings['available_options']) ? $settings['available_options'] : '',
    '#element_validate' => array('select_or_other_widget_settings_form_validate'),
  );

  if ($provided_available_options) {
    $form['provided_available_options'] = array(
      '#type' => 'textarea',
      '#disabled' => TRUE,
      '#title' => t('Module provided Available options'),
      '#description' => t('A list of values that are, by default, available for selection. These are provided by a module and not editable. Displayed in format key|label. The key is the value that will be stored in the database, and the label is what will be displayed to the user.'),
      '#value' => implode("\r\n", $provided_available_options),
    );
  }

  $form = $form + select_or_other_field_widget_other_options($settings);

  $form['other_size'] = array(
    '#type' => 'textfield',
    '#title' => t('<em>Other</em> field size'),
    '#default_value' => $settings['other_size'],
    '#required' => TRUE,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  $form['other_unknown_new_option'] = array(
    '#type' => 'checkbox',
    '#title' => t("Add 'Other' value to the list of choices for this field."),
    '#default_value' => $settings['other_unknown_new_option'],
  );

  $form['other_unknown_defaults'] = array(
    '#type' => 'radios',
    '#title' => t("Behaviour of 'Other' value when editing existing content."),
    '#description' => t("What should happen if the 'Other' option was used to enter a new value in this field and the user later visits the edit form?"),
    '#options' => array(
      'other' => t('Add the values to the other field'),
      'append' => t('Add the values to the list of choices for the specific entity (i.e. node)'),
    ),
    '#default_value' => isset($settings['other_unknown_defaults']) ? $settings['other_unknown_defaults'] : 'other',
    '#required' => TRUE,
  );

  $form['sort_options'] = array(
    '#type' => 'checkbox',
    '#title' => t('Sort options'),
    '#description' => t("Sorts the options in the list alphabetically by value."),
    '#default_value' => isset($settings['sort_options']) ? $settings['sort_options'] : 0,
  );

  return $form;
}

/**
 * Validation callback for select_or_other_widget_settings fields.
 */
function select_or_other_widget_settings_form_validate($element, &$form_state) {
  // Remove empty lines to prevent notices.
  if ($element['#name'] === 'instance[widget][settings][available_options]') {
    $values = explode("\n", $element['#value']);
    foreach ($values as $key => $value) {
      if (empty($value)) {
        unset($values[$key]);
      }
    }
    form_set_value($element, implode("\n", $values), $form_state);
  }
}

/**
 * Implements hook_field_widget_form().
 */
function select_or_other_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
  $default_value = array();
  foreach ($items as $delta => $item) {
    if (isset($item['value'])) {
      $default_value[$delta] = $item['value'];
    }
  }

  // Construct the element.
  $element = $element + array(
      '#type' => 'select_or_other',
      '#other' => isset($instance['widget']['settings']['other']) ? $instance['widget']['settings']['other'] : t('Other'),
      '#other_title' => !empty($instance['widget']['settings']['other_title']) ? $instance['widget']['settings']['other_title'] : NULL,
      '#other_size' => $instance['widget']['settings']['other_size'],
      '#default_value' => $field['cardinality'] != 1 ? $default_value : reset($default_value),
      '#options' => select_or_other_field_widget_form_prepare_options($field, $instance),
      '#description' => isset($instance['description']) ? $instance['description'] : '',
      '#multiple' => $field['cardinality'] == 1 ? FALSE : $field['cardinality'],
      '#required' => $instance['required'],
      //'#other_delimiter' => $field['widget']['settings']['other_delimiter'] == 'FALSE' ? FALSE : $field['widget']['settings']['other_delimiter'],
      '#other_delimiter' => FALSE,
      '#other_unknown_defaults' => isset($instance['widget']['settings']['other_unknown_defaults']) ? $instance['widget']['settings']['other_unknown_defaults'] : 'other',
      '#element_validate' => array('select_or_other_field_widget_validate'),
      '#field_widget' => $instance['widget']['type'],
    );

  // Set the empty option on single option fields where applicable.
  if ($field['cardinality'] == 1) {
    if (strpos($instance['widget']['type'], 'buttons') === FALSE) {
      // We are dealing with a select element.
      if (empty($element['#default_value']) && $element['#required']) {
          $element['#empty_option'] = t('- Select -');
      }
      elseif (!$element['#required']) {
        $element['#empty_option'] = t('- None -');
      }
    }
    else {
      // This is a radios element.
      if (!empty($element['#default_value']) && !$element['#required']) {
        $element['#options'] = array('' => t('- None -')) + $element['#options'];
      }
    }
  }

  if (!empty($field['settings']['max_length'])) {
    $element['#maxlength'] = $field['settings']['max_length'];
  }

  // Set select type's.
  switch ($instance['widget']['type']) {
    case 'select_or_other':
      $element['#select_type'] = 'select';
      break;

    case 'select_or_other_buttons':
      $element['#select_type'] = $field['cardinality'] == 1 ? 'radios' : 'checkboxes';
      break;
  }

  return $element;
}

/**
 * Prepare options for the widget list.
 */
function select_or_other_field_widget_form_prepare_options($field, $instance) {
  $options = array();

  $list = _select_or_other_field_widget_get_available_options($instance, $field);

  foreach ($list as $key => $opt) {
    if (is_array($opt)) {
      $optgroup_options = array();
      foreach ($opt as $optgroup_key => $optgroup_opt) {
        select_or_other_field_widget_form_prepare_option($optgroup_options, $optgroup_key, $optgroup_opt);
        $options[$key] = $optgroup_options;
      }
    }
    else {
      select_or_other_field_widget_form_prepare_option($options, $key, $opt);
    }
  }

  // @todo: This isset() can probably be taken out in drupal 8.
  if (isset($settings['sort_options']) && $settings['sort_options']) {
    natcasesort($options);
  }

  return $options;
}

/**
 * Prepare a single option.
 */
function select_or_other_field_widget_form_prepare_option(&$options, $key, $opt) {
  $opt = trim($opt);
  if (empty($opt)) {
    return;
  }
  // Sanitize the user input with a permissive filter
  // and convert special characters.
  $opt = html_entity_decode(filter_xss($opt));
  // If option has a key specified
  if (strpos($opt, '|') !== FALSE) {
    list($key, $value) = explode('|', $opt);
    $options[$key] = (isset($value) && $value !== '') ? html_entity_decode($value) : $key;
  }
  // If option has no key specified
  else {
    $options[$opt] = html_entity_decode($opt);
  }
}

/**
 * Element validate callback for a Select (or other) field widget.
 */
function select_or_other_field_widget_validate($element, &$form_state) {
  $field_name = $element['#field_name'];
  $field_info = field_info_field($field_name);

  $value = select_or_other_fetch_value($element);

  if ($value !== "") {
    // Filter out 'none' value (if present, will always be in key 0)
    if (isset($items[0]['value']) && $items[0]['value'] === '') {
      unset($items[0]);
    }

    $delta = 0;
    $values = array();
    foreach ((array) $value as $v) {
      if ($field_info['type'] == 'number_integer' && !preg_match('/^-?\d+$/', $v)) {
        form_error($element, t('!name field must be a valid integer.', array('!name' => t($element['select']['#title']))));
        break;
      }
      if (($field_info['type'] == 'number_float' || $field_info['type'] == 'number_decimal') && !is_numeric($v)) {
        form_error($element, t('!name field must be a valid integer or decimal.', array('!name' => t($element['select']['#title']))));
        break;
      }
      elseif ($field_info['type'] == 'text' && drupal_strlen($v) > $field_info['settings']['max_length']) {
        form_error($element, t('!name field must be a string at most @max characters long.', array(
          '!name' => t($element['select']['#title']),
          '@max' => $field_info['settings']['max_length']
        )));
        break;
      }

      $values[$delta++]['value'] = $v;
    }
    $value = $values;

    form_set_value($element, $value, $form_state);
    $form_state['clicked_button']['#post'][$element['#name']] = $value; // Is this something we should do?
  }
  else {
    form_set_value($element, array(array('value' => '')), $form_state);
  }

  // Add values to available options is configured to do so.
  $instance = field_widget_instance($element, $form_state);
  if (isset($instance['widget']['settings']['other_unknown_new_option']) && $instance['widget']['settings']['other_unknown_new_option']) {
    $other_value = _fetch_other_value($element);
    $append = array();

    if (!empty($other_value)) {
      foreach ($other_value as $key => $value) {
        if (!isset($element['#options'][$key])) {
          $append[] = $value;
        }
      }

    }

    if (!empty($append)) {
      // Get the latest instance.
      $instance = field_read_instance($instance['entity_type'], $instance['field_name'], $instance['bundle']);
      // Make the change.
      $instance['widget']['settings']['available_options'] .= "\n" . implode("\n", $append);
      // Save the instance.
      field_update_instance($instance);
    }
  }
}

/**
 * Implements hook_field_widget_error().
 */
function select_or_other_field_widget_error($element, $error, $form, &$form_state) {
  form_error($element, $error['message']);
}

/**
 * Helper function to get a list of options from the settings.
 * @param $instance
 *  Instance settings array.
 * @param $field
 *  Field info array.
 * @return array
 *  Available options.
 */
function _select_or_other_field_widget_get_available_options($instance, $field) {
  // TODO refactor to be able to remove this function.
  $options = array();
  if ($field['type'] !== 'taxonomy_term_reference') {
    $options = _select_or_other_invoke_available_options($instance);
    $options = array_merge($options, explode("\n", $instance['widget']['settings']['available_options']));
  }
  return $options;
}

/**
 * Helper function which invokes hook_select_or_other_available_options.
 *
 * @param $instance
 *  Field instance array.
 * @return array
 *  Available options.
 */
function _select_or_other_invoke_available_options($instance) {
  $entity_type = $instance['entity_type'];
  $bundle = $instance['bundle'];
  $field_name = $instance['field_name'];

  $available_options = module_invoke_all('select_or_other_available_options', $entity_type, $bundle, $field_name);
  foreach ($available_options as $key => $value) {
    if (!strpos($value, '|')) {
      $available_options[$key] = "{$value}|{$value}";
    }
  }
  return $available_options;
}

function select_or_other_fetch_value($element) {
  $value = $element['select']['#value'];

  if (is_array($value) && isset($value['select_or_other'])) {
    // This is a multiselect which uses associated arrays.
    unset($value['select_or_other']);
    $value += _fetch_other_value($element);
  }
  elseif ($value === 'select_or_other') {
    // This is a single select which uses strings.
    $other_value = _fetch_other_value($element, FALSE);
    if (!$other_value) {
      form_error($element['other'], t('!name: !title is required', array(
        '!name' => t($element['select']['#title']),
        '!title' => $element['#other']
      )));
    }
    else {
    }
    $value = $other_value;
  }

  return $value;
}

/**
 * Helper function to retrieve the other value from an element.
 */
function _fetch_other_value($element, $return_array = TRUE) {
  $other_value = array();

  if ($element['other']['#value']) {
    // If the value in the other element was already a valid option, we want to
    // store that value instead of the one in the other field.
    foreach ($element['#options'] as $key => $option) {
      if ($element['other']['#value'] === $option) {
        $other_value[$key] = $option;
        break;
      }
    }

    if (!$other_value) {
      $other_value[$element['other']['#value']] = $element['other']['#value'];
    }
  }

  if ($return_array) {
    return $other_value;
  }
  else {
    $keys = array_keys($other_value);
    return array_pop($keys);
  }
}

/**
 * Helper function to get the default settings for select or other widgets.
 *
 * @param array $field_types
 *   Field types this widget is available for.
 * @param $settings
 *   Default widget settings.
 *
 * @return array
 *   Associated array to be used in hook_field_widget_info().
 */
function select_or_other_field_widget_defaults($field_types, $settings) {
  return array(
    'field types' => $field_types,
    'behaviors' => array(
      'multiple values' => FIELD_BEHAVIOR_CUSTOM,
      'default value' => FIELD_BEHAVIOR_DEFAULT,
    ),
    'settings' => $settings,
    'weight' => 2,
  );
}

/**
 * Creates part of the field_widget_settings_form.
 *
 * @param array $settings
 *   Default values to be used in the form.
 */
function select_or_other_field_widget_other_options($settings) {
  $form['other'] = array(
    '#type' => 'textfield',
    '#title' => t('<em>Other</em> option'),
    '#description' => t('Label for the option that the user will choose when they want to supply an <em>other</em> value.'),
    '#default_value' => isset($settings['other']) ? $settings['other'] : t('Other'),
    '#required' => TRUE,
  );

  $form['other_title'] = array(
    '#type' => 'textfield',
    '#title' => t('<em>Other</em> field title'),
    '#description' => t('Label for the field in which the user will supply an <em>other</em> value.'),
    '#default_value' => isset($settings['other_title']) ? $settings['other_title'] : '',
  );

  $form['other_size'] = array(
    '#type' => 'textfield',
    '#title' => t('<em>Other</em> field size'),
    '#default_value' => $settings['other_size'],
    '#required' => TRUE,
    '#element_validate' => array('element_validate_integer_positive'),
  );

  return $form;
}
