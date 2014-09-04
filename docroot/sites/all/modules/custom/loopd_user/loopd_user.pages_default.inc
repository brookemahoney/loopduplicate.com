<?php
/**
 * @file
 * loopd_user.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function loopd_user_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit_panel_context';
  $handler->task = 'user_edit';
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
  $display->uuid = 'f26300fc-765c-4885-b58a-bbb87bc4cd7b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34fb034b-2cd9-465c-8da1-781e508647e3';
    $pane->panel = 'contentmain';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
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
    $pane->uuid = '34fb034b-2cd9-465c-8da1-781e508647e3';
    $display->content['new-34fb034b-2cd9-465c-8da1-781e508647e3'] = $pane;
    $display->panels['contentmain'][0] = 'new-34fb034b-2cd9-465c-8da1-781e508647e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34fb034b-2cd9-465c-8da1-781e508647e3';
  $handler->conf['display'] = $display;
  $export['user_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
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
  $display->uuid = 'b98e29e5-c2d2-4690-8a38-275b1c468842';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0f356d69-3c3c-444d-a3cb-b678ecbac9ea';
    $pane->panel = 'contentmain';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '0f356d69-3c3c-444d-a3cb-b678ecbac9ea';
    $display->content['new-0f356d69-3c3c-444d-a3cb-b678ecbac9ea'] = $pane;
    $display->panels['contentmain'][0] = 'new-0f356d69-3c3c-444d-a3cb-b678ecbac9ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0f356d69-3c3c-444d-a3cb-b678ecbac9ea';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}
