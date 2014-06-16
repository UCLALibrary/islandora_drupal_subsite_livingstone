<?php
/**
 * @file
 * section_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function section_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sections';
  $page->task = 'page';
  $page->admin_title = 'Sections';
  $page->admin_description = '';
  $page->path = 'section';
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
  $handler->name = 'page_sections_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'sections';
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
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
          2 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '32.99935642270255',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
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
        'type' => 'column',
        'width' => '33.20044933041521',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 4,
          1 => 5,
        ),
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '33.80019424688223',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_image',
        ),
        'parent' => '2',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_image',
        ),
        'parent' => '1',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_image',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'right_image' => array(
        'type' => 'region',
        'title' => 'Right Image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'left_top_image' => array(
        'type' => 'region',
        'title' => 'Left Top Image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'left_bottom_image' => array(
        'type' => 'region',
        'title' => 'Left Bottom Image',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_top_image' => NULL,
      'left_bottom_image' => NULL,
      'center' => NULL,
      'right_image' => NULL,
    ),
    'left_top_image' => array(
      'style' => '-1',
    ),
    'left_bottom_image' => array(
      'style' => '-1',
    ),
    'center' => array(
      'style' => '-1',
    ),
    'right_image' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a05c0899-2e91-4a89-a7ff-83d56c760086';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '224',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'border_section',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a05c0899-2e91-4a89-a7ff-83d56c760086';
    $display->content['new-a05c0899-2e91-4a89-a7ff-83d56c760086'] = $pane;
    $display->panels['center'][0] = 'new-a05c0899-2e91-4a89-a7ff-83d56c760086';
    $pane = new stdClass();
    $pane->pid = 'new-be9e9e47-1af9-4b1d-a3ea-8c49abcf330b';
    $pane->panel = 'left_bottom_image';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '225',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'border_section_left',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be9e9e47-1af9-4b1d-a3ea-8c49abcf330b';
    $display->content['new-be9e9e47-1af9-4b1d-a3ea-8c49abcf330b'] = $pane;
    $display->panels['left_bottom_image'][0] = 'new-be9e9e47-1af9-4b1d-a3ea-8c49abcf330b';
    $pane = new stdClass();
    $pane->pid = 'new-d57a5e7b-2fb8-476e-aba2-54b3020ad06c';
    $pane->panel = 'left_top_image';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '226',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'border_section_left',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd57a5e7b-2fb8-476e-aba2-54b3020ad06c';
    $display->content['new-d57a5e7b-2fb8-476e-aba2-54b3020ad06c'] = $pane;
    $display->panels['left_top_image'][0] = 'new-d57a5e7b-2fb8-476e-aba2-54b3020ad06c';
    $pane = new stdClass();
    $pane->pid = 'new-e29f2642-fc4a-4d27-bc42-53ec3ac28948';
    $pane->panel = 'right_image';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '223',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'border_section',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e29f2642-fc4a-4d27-bc42-53ec3ac28948';
    $display->content['new-e29f2642-fc4a-4d27-bc42-53ec3ac28948'] = $pane;
    $display->panels['right_image'][0] = 'new-e29f2642-fc4a-4d27-bc42-53ec3ac28948';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sections'] = $page;

  return $pages;

}
