<?php
/**
 * @file
 * pages_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pages_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_spectral_imaging';
  $page->task = 'page';
  $page->admin_title = 'Spectral Imaging';
  $page->admin_description = '';
  $page->path = 'spectral-imaging';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_l2_spectral_imaging_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_spectral_imaging';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'level2page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: level two images',
        'keyword' => 'view',
        'name' => 'view:l-ctools_context_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'View: level two images: Context 2',
        'keyword' => 'view_2',
        'name' => 'view:l-ctools_context_2',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aea7fe5a-6618-4e6b-9a84-6411e7c053de';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'l';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%0',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = 'c8b8bf8e-c934-4973-8691-1055ec73e6f4';
    $display->content['new-c8b8bf8e-c934-4973-8691-1055ec73e6f4'] = $pane;
    $display->panels['center'][0] = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
    $pane = new stdClass();
    $pane->pid = 'new-9ce6f33d-1eae-4ec3-a1ed-3d53ff3719a5';
    $pane->panel = 'center';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => NULL,
      'use_fields' => NULL,
      'fields' => NULL,
      'context' => 'context_view:l-ctools_context_2_1',
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
    $pane->uuid = '9ce6f33d-1eae-4ec3-a1ed-3d53ff3719a5';
    $display->content['new-9ce6f33d-1eae-4ec3-a1ed-3d53ff3719a5'] = $pane;
    $display->panels['center'][1] = 'new-9ce6f33d-1eae-4ec3-a1ed-3d53ff3719a5';
    $pane = new stdClass();
    $pane->pid = 'new-6df8bea0-ebb1-495d-b916-e88a4150e01b';
    $pane->panel = 'center';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => NULL,
      'use_fields' => NULL,
      'fields' => NULL,
      'context' => 'context_view:l-ctools_context_1_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6df8bea0-ebb1-495d-b916-e88a4150e01b';
    $display->content['new-6df8bea0-ebb1-495d-b916-e88a4150e01b'] = $pane;
    $display->panels['center'][2] = 'new-6df8bea0-ebb1-495d-b916-e88a4150e01b';
    $pane = new stdClass();
    $pane->pid = 'new-c170c7e1-214f-4d80-9f51-ca4c8349b12b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-16';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'footerblock',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c170c7e1-214f-4d80-9f51-ca4c8349b12b';
    $display->content['new-c170c7e1-214f-4d80-9f51-ca4c8349b12b'] = $pane;
    $display->panels['center'][3] = 'new-c170c7e1-214f-4d80-9f51-ca4c8349b12b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['l2_spectral_imaging'] = $page;

  return $pages;

}
