<?php
/**
 * @file
 * level_2_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function level_2_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'behind_the_scenes';
  $page->task = 'page';
  $page->admin_title = 'Behind The Scenes';
  $page->admin_description = '';
  $page->path = 'behind the scenes';
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
  $handler->name = 'page_behind_the_scenes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'behind_the_scenes';
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
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.06412083214591',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '74.9358791678541',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'internal_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'external_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'livingstone_title',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'livingstone_title' => array(
        'type' => 'region',
        'title' => 'Livingstone title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header_title_region',
      ),
      'external_menu_region' => array(
        'type' => 'region',
        'title' => 'external menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'external_menu',
      ),
      'internal_menu_region' => array(
        'type' => 'region',
        'title' => 'internal menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'internal_menu_region_class',
      ),
      7 => array(
        'type' => 'column',
        'width' => '50.4930254930255',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '24.506974506974508',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '9',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'left_top_region' => array(
        'type' => 'region',
        'title' => 'left top region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'border_section_basic border_section_left_top behind_the_scenes_color_class',
      ),
      'left_bottom_region' => array(
        'type' => 'region',
        'title' => 'left bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'border_section_basic border_section_left_bottom behind_the_scenes_color_class',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'border_section_basic border_section behind_the_scenes_color_class',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'border_section_basic border_section behind_the_scenes_color_class',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
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
    'livingstone_title' => array(
      'style' => '-1',
    ),
    'external_menu_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c26bd2c8-e683-412a-b526-59e5520914d5';
    $display->content['new-c26bd2c8-e683-412a-b526-59e5520914d5'] = $pane;
    $display->panels['external_menu_region'][0] = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane = new stdClass();
    $pane->pid = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-external-links';
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
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec274ade-16a8-40d8-a206-418258aa6f7f';
    $display->content['new-ec274ade-16a8-40d8-a206-418258aa6f7f'] = $pane;
    $display->panels['external_menu_region'][1] = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane = new stdClass();
    $pane->pid = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane->panel = 'internal_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $display->content['new-32a2c0ea-4de6-404d-b377-8a01c66eeece'] = $pane;
    $display->panels['internal_menu_region'][0] = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane = new stdClass();
    $pane->pid = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $display->content['new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['behind_the_scenes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'in_his_own_words';
  $page->task = 'page';
  $page->admin_title = 'In His Own Words';
  $page->admin_description = '';
  $page->path = 'in his own words';
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
  $handler->name = 'page_in_his_own_words_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'in_his_own_words';
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
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.06412083214591',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '74.9358791678541',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'internal_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'external_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'livingstone_title',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'livingstone_title' => array(
        'type' => 'region',
        'title' => 'Livingstone title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header_title_region',
      ),
      'external_menu_region' => array(
        'type' => 'region',
        'title' => 'external menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'external_menu',
      ),
      'internal_menu_region' => array(
        'type' => 'region',
        'title' => 'internal menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'internal_menu_region_class',
      ),
      7 => array(
        'type' => 'column',
        'width' => '50.4930254930255',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '24.506974506974508',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '9',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'left_top_region' => array(
        'type' => 'region',
        'title' => 'left top region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'border_section_basic border_section_left_top yellow_class',
      ),
      'left_bottom_region' => array(
        'type' => 'region',
        'title' => 'left bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'border_section_basic border_section_left_bottom yellow_class',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'border_section_basic border_section yellow_class',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'border_section_basic border_section yellow_class',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
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
    'livingstone_title' => array(
      'style' => '-1',
    ),
    'external_menu_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c26bd2c8-e683-412a-b526-59e5520914d5';
    $display->content['new-c26bd2c8-e683-412a-b526-59e5520914d5'] = $pane;
    $display->panels['external_menu_region'][0] = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane = new stdClass();
    $pane->pid = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-external-links';
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
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec274ade-16a8-40d8-a206-418258aa6f7f';
    $display->content['new-ec274ade-16a8-40d8-a206-418258aa6f7f'] = $pane;
    $display->panels['external_menu_region'][1] = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane = new stdClass();
    $pane->pid = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane->panel = 'internal_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $display->content['new-32a2c0ea-4de6-404d-b377-8a01c66eeece'] = $pane;
    $display->panels['internal_menu_region'][0] = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane = new stdClass();
    $pane->pid = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $display->content['new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['in_his_own_words'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'life_times';
  $page->task = 'page';
  $page->admin_title = 'Life & Times';
  $page->admin_description = '';
  $page->path = 'life and times';
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
  $handler->name = 'page_life_times_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'life_times';
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
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.06412083214591',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '74.9358791678541',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'internal_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'external_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'livingstone_title',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'livingstone_title' => array(
        'type' => 'region',
        'title' => 'Livingstone title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header_title_region',
      ),
      'external_menu_region' => array(
        'type' => 'region',
        'title' => 'external menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'external_menu',
      ),
      'internal_menu_region' => array(
        'type' => 'region',
        'title' => 'internal menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'internal_menu_region_class',
      ),
      7 => array(
        'type' => 'column',
        'width' => '50.4930254930255',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '24.506974506974508',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '9',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'left_top_region' => array(
        'type' => 'region',
        'title' => 'left top region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'border_section_basic border_section_left_top lifeandtimes_color_class',
      ),
      'left_bottom_region' => array(
        'type' => 'region',
        'title' => 'left bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'border_section_basic border_section_left_bottom lifeandtimes_color_class',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'border_section_basic border_section lifeandtimes_color_class',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'border_section_basic border_section lifeandtimes_color_class',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
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
    'livingstone_title' => array(
      'style' => '-1',
    ),
    'external_menu_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c26bd2c8-e683-412a-b526-59e5520914d5';
    $display->content['new-c26bd2c8-e683-412a-b526-59e5520914d5'] = $pane;
    $display->panels['external_menu_region'][0] = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane = new stdClass();
    $pane->pid = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-external-links';
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
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec274ade-16a8-40d8-a206-418258aa6f7f';
    $display->content['new-ec274ade-16a8-40d8-a206-418258aa6f7f'] = $pane;
    $display->panels['external_menu_region'][1] = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane = new stdClass();
    $pane->pid = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane->panel = 'internal_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $display->content['new-32a2c0ea-4de6-404d-b377-8a01c66eeece'] = $pane;
    $display->panels['internal_menu_region'][0] = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane = new stdClass();
    $pane->pid = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $display->content['new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['life_times'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'livingstone_online';
  $page->task = 'page';
  $page->admin_title = 'Livingstone Online';
  $page->admin_description = '';
  $page->path = 'livingstone online';
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
  $handler->name = 'page_livingstone_online_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'livingstone_online';
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
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.06412083214591',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '74.9358791678541',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'internal_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'external_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'livingstone_title',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'livingstone_title' => array(
        'type' => 'region',
        'title' => 'Livingstone title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header_title_region',
      ),
      'external_menu_region' => array(
        'type' => 'region',
        'title' => 'external menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'external_menu',
      ),
      'internal_menu_region' => array(
        'type' => 'region',
        'title' => 'internal menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'internal_menu_region_class',
      ),
      7 => array(
        'type' => 'column',
        'width' => '50.4930254930255',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '24.506974506974508',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '9',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'left_top_region' => array(
        'type' => 'region',
        'title' => 'left top region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'border_section_basic border_section_left_top livingstone_online',
      ),
      'left_bottom_region' => array(
        'type' => 'region',
        'title' => 'left bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'border_section_basic border_section_left_bottom livingstone_online',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'border_section_basic border_section livingstone_online',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'border_section_basic border_section livingstone_online',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
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
    'livingstone_title' => array(
      'style' => '-1',
    ),
    'external_menu_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c26bd2c8-e683-412a-b526-59e5520914d5';
    $display->content['new-c26bd2c8-e683-412a-b526-59e5520914d5'] = $pane;
    $display->panels['external_menu_region'][0] = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane = new stdClass();
    $pane->pid = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-external-links';
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
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec274ade-16a8-40d8-a206-418258aa6f7f';
    $display->content['new-ec274ade-16a8-40d8-a206-418258aa6f7f'] = $pane;
    $display->panels['external_menu_region'][1] = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane = new stdClass();
    $pane->pid = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane->panel = 'internal_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $display->content['new-32a2c0ea-4de6-404d-b377-8a01c66eeece'] = $pane;
    $display->panels['internal_menu_region'][0] = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane = new stdClass();
    $pane->pid = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $display->content['new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['livingstone_online'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'our_technology';
  $page->task = 'page';
  $page->admin_title = 'Our Technology';
  $page->admin_description = '';
  $page->path = 'our technology';
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
  $handler->name = 'page_our_technology_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'our_technology';
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
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.06412083214591',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '74.9358791678541',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'internal_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'external_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'livingstone_title',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'livingstone_title' => array(
        'type' => 'region',
        'title' => 'Livingstone title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header_title_region',
      ),
      'external_menu_region' => array(
        'type' => 'region',
        'title' => 'external menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'external_menu',
      ),
      'internal_menu_region' => array(
        'type' => 'region',
        'title' => 'internal menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'internal_menu_region_class',
      ),
      7 => array(
        'type' => 'column',
        'width' => '50.4930254930255',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '24.506974506974508',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '9',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'left_top_region' => array(
        'type' => 'region',
        'title' => 'left top region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'border_section_basic border_section_left_top our_technology_color_class',
      ),
      'left_bottom_region' => array(
        'type' => 'region',
        'title' => 'left bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'border_section_basic border_section_left_bottom our_technology_color_class',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'border_section_basic border_section our_technology_color_class',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'border_section_basic border_section our_technology_color_class',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
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
    'livingstone_title' => array(
      'style' => '-1',
    ),
    'external_menu_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c26bd2c8-e683-412a-b526-59e5520914d5';
    $display->content['new-c26bd2c8-e683-412a-b526-59e5520914d5'] = $pane;
    $display->panels['external_menu_region'][0] = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane = new stdClass();
    $pane->pid = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-external-links';
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
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec274ade-16a8-40d8-a206-418258aa6f7f';
    $display->content['new-ec274ade-16a8-40d8-a206-418258aa6f7f'] = $pane;
    $display->panels['external_menu_region'][1] = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane = new stdClass();
    $pane->pid = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane->panel = 'internal_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $display->content['new-32a2c0ea-4de6-404d-b377-8a01c66eeece'] = $pane;
    $display->panels['internal_menu_region'][0] = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane = new stdClass();
    $pane->pid = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $display->content['new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['our_technology'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resources';
  $page->task = 'page';
  $page->admin_title = 'Resources';
  $page->admin_description = '';
  $page->path = 'resources';
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
  $handler->name = 'page_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'resources';
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
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => '25.06412083214591',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '74.9358791678541',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'internal_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'external_menu_region',
        ),
        'parent' => '3',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'livingstone_title',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'livingstone_title' => array(
        'type' => 'region',
        'title' => 'Livingstone title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'header_title_region',
      ),
      'external_menu_region' => array(
        'type' => 'region',
        'title' => 'external menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'external_menu',
      ),
      'internal_menu_region' => array(
        'type' => 'region',
        'title' => 'internal menu region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'internal_menu_region_class',
      ),
      7 => array(
        'type' => 'column',
        'width' => '50.4930254930255',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
      ),
      8 => array(
        'type' => 'column',
        'width' => '24.506974506974508',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 25,
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_region',
        ),
        'parent' => '7',
        'class' => '',
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '9',
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_top_region',
        ),
        'parent' => '8',
        'class' => '',
      ),
      'left_top_region' => array(
        'type' => 'region',
        'title' => 'left top region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => 'border_section_basic border_section_left_top resources_color_class',
      ),
      'left_bottom_region' => array(
        'type' => 'region',
        'title' => 'left bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'border_section_basic border_section_left_bottom resources_color_class',
      ),
      'center_region' => array(
        'type' => 'region',
        'title' => 'center region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'border_section_basic border_section resources_color_class',
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'border_section_basic border_section resources_color_class',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
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
    'livingstone_title' => array(
      'style' => '-1',
    ),
    'external_menu_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '70c9e5e6-7588-48d3-8f31-c58bc7115c74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c26bd2c8-e683-412a-b526-59e5520914d5';
    $display->content['new-c26bd2c8-e683-412a-b526-59e5520914d5'] = $pane;
    $display->panels['external_menu_region'][0] = 'new-c26bd2c8-e683-412a-b526-59e5520914d5';
    $pane = new stdClass();
    $pane->pid = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane->panel = 'external_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-external-links';
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
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec274ade-16a8-40d8-a206-418258aa6f7f';
    $display->content['new-ec274ade-16a8-40d8-a206-418258aa6f7f'] = $pane;
    $display->panels['external_menu_region'][1] = 'new-ec274ade-16a8-40d8-a206-418258aa6f7f';
    $pane = new stdClass();
    $pane->pid = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane->panel = 'internal_menu_region';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $display->content['new-32a2c0ea-4de6-404d-b377-8a01c66eeece'] = $pane;
    $display->panels['internal_menu_region'][0] = 'new-32a2c0ea-4de6-404d-b377-8a01c66eeece';
    $pane = new stdClass();
    $pane->pid = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'block-11';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
    $display->content['new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-26bfaf9d-4d55-4a14-9a3b-6439efb75e29';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  return $pages;

}
