<?php
/**
 * @file
 * loopduplicatepanelseverywhere.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function loopduplicatepanelseverywhere_default_page_manager_handlers() {
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
  $display->layout = 'loopduplicatenowrapper';
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
    $pane->pid = 'new-7fdf06b1-27d2-4081-9258-1303906b3c5a';
    $pane->panel = 'main';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7fdf06b1-27d2-4081-9258-1303906b3c5a';
    $display->content['new-7fdf06b1-27d2-4081-9258-1303906b3c5a'] = $pane;
    $display->panels['main'][0] = 'new-7fdf06b1-27d2-4081-9258-1303906b3c5a';
    $pane = new stdClass();
    $pane->pid = 'new-0a16b66a-0c6e-4561-9205-c9deca9dab52';
    $pane->panel = 'main';
    $pane->type = 'page_primary_links';
    $pane->subtype = 'page_primary_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0a16b66a-0c6e-4561-9205-c9deca9dab52';
    $display->content['new-0a16b66a-0c6e-4561-9205-c9deca9dab52'] = $pane;
    $display->panels['main'][1] = 'new-0a16b66a-0c6e-4561-9205-c9deca9dab52';
    $pane = new stdClass();
    $pane->pid = 'new-ac656b3d-da28-4767-a381-05f288c2299f';
    $pane->panel = 'main';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
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
    $pane->uuid = 'ac656b3d-da28-4767-a381-05f288c2299f';
    $display->content['new-ac656b3d-da28-4767-a381-05f288c2299f'] = $pane;
    $display->panels['main'][2] = 'new-ac656b3d-da28-4767-a381-05f288c2299f';
    $pane = new stdClass();
    $pane->pid = 'new-3f7a7b49-9efc-4257-a74f-9c7072601081';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3f7a7b49-9efc-4257-a74f-9c7072601081';
    $display->content['new-3f7a7b49-9efc-4257-a74f-9c7072601081'] = $pane;
    $display->panels['main'][3] = 'new-3f7a7b49-9efc-4257-a74f-9c7072601081';
    $pane = new stdClass();
    $pane->pid = 'new-996dd0af-72fb-4a66-a47d-6bfd0c095cc4';
    $pane->panel = 'main';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
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
    $pane->uuid = '996dd0af-72fb-4a66-a47d-6bfd0c095cc4';
    $display->content['new-996dd0af-72fb-4a66-a47d-6bfd0c095cc4'] = $pane;
    $display->panels['main'][4] = 'new-996dd0af-72fb-4a66-a47d-6bfd0c095cc4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template_panel_context'] = $handler;

  return $export;
}
