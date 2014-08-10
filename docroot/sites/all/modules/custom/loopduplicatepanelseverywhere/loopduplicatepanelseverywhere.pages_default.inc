<?php
/**
 * @file
 * loopduplicateprofilepanelseverywhere.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function loopduplicateprofilepanelseverywhere_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template_panel_context';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default Variant',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'site-template-default',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'loopduplicatexsiteonecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => array(
        'region_collapsible' => 0,
        'region_title' => '',
        'region_collapsed' => 0,
        'bgcolor' => 'none',
        'padding' => 'none',
        'margin_bottom' => 'none',
      ),
    ),
    'middle' => array(
      'style' => 'default',
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '582b41d7-04bc-469a-a86f-ed879da88135';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-55e6b3f1-5218-422b-b5c1-2eaa7710f55f';
    $pane->panel = 'middle';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '55e6b3f1-5218-422b-b5c1-2eaa7710f55f';
    $display->content['new-55e6b3f1-5218-422b-b5c1-2eaa7710f55f'] = $pane;
    $display->panels['middle'][0] = 'new-55e6b3f1-5218-422b-b5c1-2eaa7710f55f';
    $pane = new stdClass();
    $pane->pid = 'new-34c6bdec-e86a-4b2b-a52c-2af47528d66d';
    $pane->panel = 'middle';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '34c6bdec-e86a-4b2b-a52c-2af47528d66d';
    $display->content['new-34c6bdec-e86a-4b2b-a52c-2af47528d66d'] = $pane;
    $display->panels['middle'][1] = 'new-34c6bdec-e86a-4b2b-a52c-2af47528d66d';
    $pane = new stdClass();
    $pane->pid = 'new-e937c4a0-0dd5-4452-b6b1-387958d5066b';
    $pane->panel = 'middle';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'main-content',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e937c4a0-0dd5-4452-b6b1-387958d5066b';
    $display->content['new-e937c4a0-0dd5-4452-b6b1-387958d5066b'] = $pane;
    $display->panels['middle'][2] = 'new-e937c4a0-0dd5-4452-b6b1-387958d5066b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
