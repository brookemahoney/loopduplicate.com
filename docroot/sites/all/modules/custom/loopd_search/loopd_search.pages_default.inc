<?php
/**
 * @file
 * loopd_search.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function loopd_search_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search';
  $page->task = 'page';
  $page->admin_title = 'Search';
  $page->admin_description = 'Main site search.';
  $page->path = 'search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 0,
  );
  $display = new panels_display();
  $display->layout = 'loopd_search';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'sidebar' => array(
        'clean_markup' => array(
          'region_wrapper' => 'none',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
      'contentmain' => array(
        'clean_markup' => array(
          'region_wrapper' => 'none',
          'additional_region_classes' => '',
          'additional_region_attributes' => '',
          'enable_inner_div' => 0,
          'pane_separators' => 0,
        ),
      ),
    ),
    'sidebar' => array(
      'style' => 'clean_element',
    ),
    'contentmain' => array(
      'style' => 'clean_element',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '252685c7-f902-47c4-91e5-67b69fb2f403';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c2d631b3-2452-436e-b7a0-9951f0a00146';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'views--exp-search_db-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
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
    $pane->uuid = 'c2d631b3-2452-436e-b7a0-9951f0a00146';
    $display->content['new-c2d631b3-2452-436e-b7a0-9951f0a00146'] = $pane;
    $display->panels['contentmain'][0] = 'new-c2d631b3-2452-436e-b7a0-9951f0a00146';
    $pane = new stdClass();
    $pane->pid = 'new-86dcb5f7-476c-4c77-abb0-3f15118c76ac';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'search_db-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
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
      'css_id' => '',
      'css_class' => 'search-results-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '86dcb5f7-476c-4c77-abb0-3f15118c76ac';
    $display->content['new-86dcb5f7-476c-4c77-abb0-3f15118c76ac'] = $pane;
    $display->panels['contentmain'][1] = 'new-86dcb5f7-476c-4c77-abb0-3f15118c76ac';
    $pane = new stdClass();
    $pane->pid = 'new-71927080-aaa8-4c04-81bd-95092bac8502';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane search-filter-pane',
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
      'css_id' => '',
      'css_class' => 'search-filter-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '71927080-aaa8-4c04-81bd-95092bac8502';
    $display->content['new-71927080-aaa8-4c04-81bd-95092bac8502'] = $pane;
    $display->panels['sidebar'][0] = 'new-71927080-aaa8-4c04-81bd-95092bac8502';
    $pane = new stdClass();
    $pane->pid = 'new-b418c223-5e3e-47be-a4c9-ffbe597231d2';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yyDPF8fbCXOAqy4RNH1sZO8rJfN2WM6L';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane search-filter-pane',
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
      'css_id' => '',
      'css_class' => 'search-filter-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b418c223-5e3e-47be-a4c9-ffbe597231d2';
    $display->content['new-b418c223-5e3e-47be-a4c9-ffbe597231d2'] = $pane;
    $display->panels['sidebar'][1] = 'new-b418c223-5e3e-47be-a4c9-ffbe597231d2';
    $pane = new stdClass();
    $pane->pid = 'new-4c3e9b41-b4cf-4089-8715-c4ee37f06f4c';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hFhFVHFsQGHHA5qB0RvFSHBDPgXEArs6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'clean_markup' => array(
          'pane_wrapper' => 'div',
          'additional_pane_classes' => 'panel-pane search-filter-pane',
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
      'css_id' => '',
      'css_class' => 'search-filter-pane',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4c3e9b41-b4cf-4089-8715-c4ee37f06f4c';
    $display->content['new-4c3e9b41-b4cf-4089-8715-c4ee37f06f4c'] = $pane;
    $display->panels['sidebar'][2] = 'new-4c3e9b41-b4cf-4089-8715-c4ee37f06f4c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search'] = $page;

  return $pages;

}
