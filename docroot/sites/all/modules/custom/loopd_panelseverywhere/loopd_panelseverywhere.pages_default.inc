<?php
/**
 * @file
 * loopd_panelseverywhere.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function loopd_panelseverywhere_default_page_manager_handlers() {
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
  $display->layout = 'loopd_nowrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '582b41d7-04bc-469a-a86f-ed879da88135';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ca961cf4-0fa3-4fa7-b1a6-07fd2a18c151';
    $pane->panel = 'main';
    $pane->type = 'pane_header';
    $pane->subtype = 'pane_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'header',
          'additional_pane_classes' => 'panel-pane',
          'additional_pane_attributes' => '',
          'enable_inner_div' => 0,
          'title_wrapper' => 'h2',
          'title_hide' => 0,
          'content_wrapper' => 'none',
        ),
      ),
      'style' => 'clean_element',
    );
    $pane->css = array(
      'css_id' => 'page-header',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ca961cf4-0fa3-4fa7-b1a6-07fd2a18c151';
    $display->content['new-ca961cf4-0fa3-4fa7-b1a6-07fd2a18c151'] = $pane;
    $display->panels['main'][0] = 'new-ca961cf4-0fa3-4fa7-b1a6-07fd2a18c151';
    $pane = new stdClass();
    $pane->pid = 'new-1c1cc293-d64b-418f-a0c1-d5352c8e1624';
    $pane->panel = 'main';
    $pane->type = 'pane_navigation';
    $pane->subtype = 'pane_navigation';
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
    $pane->uuid = '1c1cc293-d64b-418f-a0c1-d5352c8e1624';
    $display->content['new-1c1cc293-d64b-418f-a0c1-d5352c8e1624'] = $pane;
    $display->panels['main'][1] = 'new-1c1cc293-d64b-418f-a0c1-d5352c8e1624';
    $pane = new stdClass();
    $pane->pid = 'new-1908e585-a336-4a4b-83ca-c5b5a1d293a1';
    $pane->panel = 'main';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '1908e585-a336-4a4b-83ca-c5b5a1d293a1';
    $display->content['new-1908e585-a336-4a4b-83ca-c5b5a1d293a1'] = $pane;
    $display->panels['main'][2] = 'new-1908e585-a336-4a4b-83ca-c5b5a1d293a1';
    $pane = new stdClass();
    $pane->pid = 'new-f0fd241d-ebbb-4c65-910b-268004245cfa';
    $pane->panel = 'main';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f0fd241d-ebbb-4c65-910b-268004245cfa';
    $display->content['new-f0fd241d-ebbb-4c65-910b-268004245cfa'] = $pane;
    $display->panels['main'][3] = 'new-f0fd241d-ebbb-4c65-910b-268004245cfa';
    $pane = new stdClass();
    $pane->pid = 'new-aea6e841-8ba2-4a3b-b97e-b4eae83d382a';
    $pane->panel = 'main';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'aea6e841-8ba2-4a3b-b97e-b4eae83d382a';
    $display->content['new-aea6e841-8ba2-4a3b-b97e-b4eae83d382a'] = $pane;
    $display->panels['main'][4] = 'new-aea6e841-8ba2-4a3b-b97e-b4eae83d382a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
