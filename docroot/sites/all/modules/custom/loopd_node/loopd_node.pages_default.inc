<?php
/**
 * @file
 * loopd_node.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function loopd_node_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '84da5531-1fc3-48ce-b445-602618af56e6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b241dad4-7b6f-4e22-8567-d8cbce353a55';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b241dad4-7b6f-4e22-8567-d8cbce353a55';
    $display->content['new-b241dad4-7b6f-4e22-8567-d8cbce353a55'] = $pane;
    $display->panels['contentmain'][0] = 'new-b241dad4-7b6f-4e22-8567-d8cbce353a55';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b241dad4-7b6f-4e22-8567-d8cbce353a55';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => array(
        'clean_markup' => array(
          'region_wrapper' => 'div',
          'additional_region_classes' => 'main-content',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c5ce8f1d-120e-4bd8-bf26-23ff38d09872';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b010ead7-eee8-4797-9814-749687e19913';
    $pane->panel = 'contentmain';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'none',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h1',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b010ead7-eee8-4797-9814-749687e19913';
    $display->content['new-b010ead7-eee8-4797-9814-749687e19913'] = $pane;
    $display->panels['contentmain'][0] = 'new-b010ead7-eee8-4797-9814-749687e19913';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b010ead7-eee8-4797-9814-749687e19913';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
