<?php
/**
 * @file
 * level_2_v1_0_dev.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function level_2_v1_0_dev_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Section pages node view display',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'section pages',
        'keyword' => 'section_pages',
        'name' => 'entity_from_field:field_section_page_sections-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'section_page' => 'section_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cdbc8bcc-ea5f-478a-ab33-05f2c64bb8c9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-631eadf6-a5b2-430e-b209-1aad9c3a00fc';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'image_banner_scroll-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_section_page_sections-node-taxonomy_term_1',
      ),
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
    $pane->uuid = '631eadf6-a5b2-430e-b209-1aad9c3a00fc';
    $display->content['new-631eadf6-a5b2-430e-b209-1aad9c3a00fc'] = $pane;
    $display->panels['middle'][0] = 'new-631eadf6-a5b2-430e-b209-1aad9c3a00fc';
    $pane = new stdClass();
    $pane->pid = 'new-0151f728-65e3-45f8-963f-c773c1fe9d7c';
    $pane->panel = 'middle';
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
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0151f728-65e3-45f8-963f-c773c1fe9d7c';
    $display->content['new-0151f728-65e3-45f8-963f-c773c1fe9d7c'] = $pane;
    $display->panels['middle'][1] = 'new-0151f728-65e3-45f8-963f-c773c1fe9d7c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-0151f728-65e3-45f8-963f-c773c1fe9d7c';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function level_2_v1_0_dev_default_page_manager_pages() {
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
        'class' => 'left_column_width',
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
        'class' => 'right_column_width',
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
        'width' => '48.407994899640926',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => 'right_center_column_width',
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
        'class' => 'left_column_width',
      ),
      9 => array(
        'type' => 'column',
        'width' => '27.08503059338457',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'right_right_column_width',
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
    $pane->pid = 'new-973c75cc-64f6-47a2-a05d-f4ec57db9d41';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '363',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '973c75cc-64f6-47a2-a05d-f4ec57db9d41';
    $display->content['new-973c75cc-64f6-47a2-a05d-f4ec57db9d41'] = $pane;
    $display->panels['center_region'][0] = 'new-973c75cc-64f6-47a2-a05d-f4ec57db9d41';
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
    $pane->pid = 'new-d5b59945-c96a-4098-ba8e-474008c4afe9';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '401',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpage',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'd5b59945-c96a-4098-ba8e-474008c4afe9';
    $display->content['new-d5b59945-c96a-4098-ba8e-474008c4afe9'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-d5b59945-c96a-4098-ba8e-474008c4afe9';
    $pane = new stdClass();
    $pane->pid = 'new-e875b944-3885-416d-81b2-df130399fd46';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-behind-the-scenes-section-page-i';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section_block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e875b944-3885-416d-81b2-df130399fd46';
    $display->content['new-e875b944-3885-416d-81b2-df130399fd46'] = $pane;
    $display->panels['left_top_region'][0] = 'new-e875b944-3885-416d-81b2-df130399fd46';
    $pane = new stdClass();
    $pane->pid = 'new-15679aaf-f318-4dbe-9895-abd684517b8c';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-header-info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15679aaf-f318-4dbe-9895-abd684517b8c';
    $display->content['new-15679aaf-f318-4dbe-9895-abd684517b8c'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-15679aaf-f318-4dbe-9895-abd684517b8c';
    $pane = new stdClass();
    $pane->pid = 'new-5fef2e41-add3-42ef-9b77-3286fb8199da';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '398',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpageright',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '5fef2e41-add3-42ef-9b77-3286fb8199da';
    $display->content['new-5fef2e41-add3-42ef-9b77-3286fb8199da'] = $pane;
    $display->panels['right_region'][0] = 'new-5fef2e41-add3-42ef-9b77-3286fb8199da';
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
        'class' => 'left_column_width',
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
        'class' => 'right_column_width',
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
        'width' => '48.488188384001866',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => 'right_center_column_width',
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
        'class' => 'left_column_width',
      ),
      9 => array(
        'type' => 'column',
        'width' => '27.00483710902363',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'right_right_column_width',
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
    $pane->pid = 'new-dcea2764-acd0-4d28-a7db-c643eda0d0bf';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '397',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'dcea2764-acd0-4d28-a7db-c643eda0d0bf';
    $display->content['new-dcea2764-acd0-4d28-a7db-c643eda0d0bf'] = $pane;
    $display->panels['center_region'][0] = 'new-dcea2764-acd0-4d28-a7db-c643eda0d0bf';
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
    $pane->pid = 'new-e3b2eb9d-4def-402d-ad25-f61f46fa6ed9';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '406',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpage',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'e3b2eb9d-4def-402d-ad25-f61f46fa6ed9';
    $display->content['new-e3b2eb9d-4def-402d-ad25-f61f46fa6ed9'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-e3b2eb9d-4def-402d-ad25-f61f46fa6ed9';
    $pane = new stdClass();
    $pane->pid = 'new-6488fea2-ab88-49ab-aa51-c01b531700b1';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-in-his-own-words-info';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section_block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6488fea2-ab88-49ab-aa51-c01b531700b1';
    $display->content['new-6488fea2-ab88-49ab-aa51-c01b531700b1'] = $pane;
    $display->panels['left_top_region'][0] = 'new-6488fea2-ab88-49ab-aa51-c01b531700b1';
    $pane = new stdClass();
    $pane->pid = 'new-07438add-5508-4b33-8db6-e5941ce14aac';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-header-info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '07438add-5508-4b33-8db6-e5941ce14aac';
    $display->content['new-07438add-5508-4b33-8db6-e5941ce14aac'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-07438add-5508-4b33-8db6-e5941ce14aac';
    $pane = new stdClass();
    $pane->pid = 'new-d794e051-dcaa-49b3-9cc3-d225c01a8107';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '384',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpageright',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'd794e051-dcaa-49b3-9cc3-d225c01a8107';
    $display->content['new-d794e051-dcaa-49b3-9cc3-d225c01a8107'] = $pane;
    $display->panels['right_region'][0] = 'new-d794e051-dcaa-49b3-9cc3-d225c01a8107';
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
        'class' => 'left_column_width',
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
        'class' => 'right_column_width',
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
        'width' => '48.488188384001866',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => 'right_center_column_width',
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
        'class' => 'left_column_width',
      ),
      9 => array(
        'type' => 'column',
        'width' => '27.00483710902363',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'right_right_column_width',
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
    $pane->pid = 'new-2f0e3392-6781-4c06-9db3-4ce3ccb9ac1a';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '372',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '2f0e3392-6781-4c06-9db3-4ce3ccb9ac1a';
    $display->content['new-2f0e3392-6781-4c06-9db3-4ce3ccb9ac1a'] = $pane;
    $display->panels['center_region'][0] = 'new-2f0e3392-6781-4c06-9db3-4ce3ccb9ac1a';
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
    $pane->pid = 'new-64c3add3-7363-460a-aa57-36a99a415137';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '400',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpage',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '64c3add3-7363-460a-aa57-36a99a415137';
    $display->content['new-64c3add3-7363-460a-aa57-36a99a415137'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-64c3add3-7363-460a-aa57-36a99a415137';
    $pane = new stdClass();
    $pane->pid = 'new-1156c77f-8184-4601-b37e-321bf67a728e';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-life-and-times-section-page-info';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section_block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1156c77f-8184-4601-b37e-321bf67a728e';
    $display->content['new-1156c77f-8184-4601-b37e-321bf67a728e'] = $pane;
    $display->panels['left_top_region'][0] = 'new-1156c77f-8184-4601-b37e-321bf67a728e';
    $pane = new stdClass();
    $pane->pid = 'new-c56f91c1-63d5-4b29-9b00-469de16b1762';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-header-info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c56f91c1-63d5-4b29-9b00-469de16b1762';
    $display->content['new-c56f91c1-63d5-4b29-9b00-469de16b1762'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-c56f91c1-63d5-4b29-9b00-469de16b1762';
    $pane = new stdClass();
    $pane->pid = 'new-96ba5704-1a0a-41fd-9ed4-314e1aad4e74';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '374',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpageright',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '96ba5704-1a0a-41fd-9ed4-314e1aad4e74';
    $display->content['new-96ba5704-1a0a-41fd-9ed4-314e1aad4e74'] = $pane;
    $display->panels['right_region'][0] = 'new-96ba5704-1a0a-41fd-9ed4-314e1aad4e74';
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
        'width' => '30.5895656207688',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => 'left_column_width',
      ),
      3 => array(
        'type' => 'column',
        'width' => '69.4104343792312',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
          1 => 4,
        ),
        'class' => 'right_column_width',
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
        'width' => '45.445882814079106',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => 'right_center_column_width',
      ),
      8 => array(
        'type' => 'column',
        'width' => '30.515353075910102',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 13,
          1 => 10,
        ),
        'class' => 'left_column_width',
      ),
      9 => array(
        'type' => 'column',
        'width' => '24.038764110010806',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'right_right_column_width',
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
    $pane->pid = 'new-7ab04ed8-17ec-4c74-9215-7b96321744e1';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '389',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '7ab04ed8-17ec-4c74-9215-7b96321744e1';
    $display->content['new-7ab04ed8-17ec-4c74-9215-7b96321744e1'] = $pane;
    $display->panels['center_region'][0] = 'new-7ab04ed8-17ec-4c74-9215-7b96321744e1';
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
    $pane->pid = 'new-9c21a65b-a56f-4e1c-b4ae-7450b7a39fb7';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '385',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpage',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '9c21a65b-a56f-4e1c-b4ae-7450b7a39fb7';
    $display->content['new-9c21a65b-a56f-4e1c-b4ae-7450b7a39fb7'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-9c21a65b-a56f-4e1c-b4ae-7450b7a39fb7';
    $pane = new stdClass();
    $pane->pid = 'new-ab84da0e-18d1-42db-a1ec-7523aca46b55';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-online-title';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section_block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ab84da0e-18d1-42db-a1ec-7523aca46b55';
    $display->content['new-ab84da0e-18d1-42db-a1ec-7523aca46b55'] = $pane;
    $display->panels['left_top_region'][0] = 'new-ab84da0e-18d1-42db-a1ec-7523aca46b55';
    $pane = new stdClass();
    $pane->pid = 'new-da4d30be-bf0a-4cdd-b4d8-025a37cad73f';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-header-info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'da4d30be-bf0a-4cdd-b4d8-025a37cad73f';
    $display->content['new-da4d30be-bf0a-4cdd-b4d8-025a37cad73f'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-da4d30be-bf0a-4cdd-b4d8-025a37cad73f';
    $pane = new stdClass();
    $pane->pid = 'new-98e48779-3d55-49e3-89c4-8d360ddbf074';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '386',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpageright',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '98e48779-3d55-49e3-89c4-8d360ddbf074';
    $display->content['new-98e48779-3d55-49e3-89c4-8d360ddbf074'] = $pane;
    $display->panels['right_region'][0] = 'new-98e48779-3d55-49e3-89c4-8d360ddbf074';
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
        'class' => 'left_column_width',
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
        'class' => 'right_column_width',
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
        'width' => '48.7287688370847',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => 'right_center_column_width',
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
        'class' => 'left_column_width',
      ),
      9 => array(
        'type' => 'column',
        'width' => '26.764256655940798',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'right_right_column_width',
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
    $pane->pid = 'new-b6ad5ca9-2fdd-4008-92f3-960eb1667a83';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '394',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'b6ad5ca9-2fdd-4008-92f3-960eb1667a83';
    $display->content['new-b6ad5ca9-2fdd-4008-92f3-960eb1667a83'] = $pane;
    $display->panels['center_region'][0] = 'new-b6ad5ca9-2fdd-4008-92f3-960eb1667a83';
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
    $pane->pid = 'new-848bcb71-a2dc-4008-9ff2-9b2d7c8549ef';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '403',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpage',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '848bcb71-a2dc-4008-9ff2-9b2d7c8549ef';
    $display->content['new-848bcb71-a2dc-4008-9ff2-9b2d7c8549ef'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-848bcb71-a2dc-4008-9ff2-9b2d7c8549ef';
    $pane = new stdClass();
    $pane->pid = 'new-c91c54b4-0cd2-43a4-999b-df694f750e4b';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-our-technology-section-page-info';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section_block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c91c54b4-0cd2-43a4-999b-df694f750e4b';
    $display->content['new-c91c54b4-0cd2-43a4-999b-df694f750e4b'] = $pane;
    $display->panels['left_top_region'][0] = 'new-c91c54b4-0cd2-43a4-999b-df694f750e4b';
    $pane = new stdClass();
    $pane->pid = 'new-3e9638c9-1db7-4a13-ad8d-37d402ed4ee0';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-header-info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e9638c9-1db7-4a13-ad8d-37d402ed4ee0';
    $display->content['new-3e9638c9-1db7-4a13-ad8d-37d402ed4ee0'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-3e9638c9-1db7-4a13-ad8d-37d402ed4ee0';
    $pane = new stdClass();
    $pane->pid = 'new-9e7af591-48c5-4974-8a3d-ed5480135879';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '375',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpageright',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '9e7af591-48c5-4974-8a3d-ed5480135879';
    $display->content['new-9e7af591-48c5-4974-8a3d-ed5480135879'] = $pane;
    $display->panels['right_region'][0] = 'new-9e7af591-48c5-4974-8a3d-ed5480135879';
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
        'class' => 'left_column_width',
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
        'class' => 'right_column_width',
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
        'width' => '48.40807488262027',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
        ),
        'class' => 'right_center_column_width',
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
        'class' => 'left_column_width',
      ),
      9 => array(
        'type' => 'column',
        'width' => '27.084950610405226',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
        ),
        'class' => 'right_right_column_width',
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
    $pane->pid = 'new-5f68b236-51f5-4dd1-81d0-26605478cb04';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '396',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '5f68b236-51f5-4dd1-81d0-26605478cb04';
    $display->content['new-5f68b236-51f5-4dd1-81d0-26605478cb04'] = $pane;
    $display->panels['center_region'][0] = 'new-5f68b236-51f5-4dd1-81d0-26605478cb04';
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
    $pane->pid = 'new-c8a80bfc-469d-416a-8ea9-cfa3d566175f';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '378',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpage',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'c8a80bfc-469d-416a-8ea9-cfa3d566175f';
    $display->content['new-c8a80bfc-469d-416a-8ea9-cfa3d566175f'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-c8a80bfc-469d-416a-8ea9-cfa3d566175f';
    $pane = new stdClass();
    $pane->pid = 'new-1745b065-5e0b-4577-9413-9641fb91cd7c';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-resources-page-info';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'section_block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1745b065-5e0b-4577-9413-9641fb91cd7c';
    $display->content['new-1745b065-5e0b-4577-9413-9641fb91cd7c'] = $pane;
    $display->panels['left_top_region'][0] = 'new-1745b065-5e0b-4577-9413-9641fb91cd7c';
    $pane = new stdClass();
    $pane->pid = 'new-17d30d6a-8677-45da-9cb9-73a0c7e72a50';
    $pane->panel = 'livingstone_title';
    $pane->type = 'block';
    $pane->subtype = 'bean-livingstone-header-info';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17d30d6a-8677-45da-9cb9-73a0c7e72a50';
    $display->content['new-17d30d6a-8677-45da-9cb9-73a0c7e72a50'] = $pane;
    $display->panels['livingstone_title'][0] = 'new-17d30d6a-8677-45da-9cb9-73a0c7e72a50';
    $pane = new stdClass();
    $pane->pid = 'new-aad1741b-1995-4abc-b57f-e086f5742694';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '371',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpageright',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = 'aad1741b-1995-4abc-b57f-e086f5742694';
    $display->content['new-aad1741b-1995-4abc-b57f-e086f5742694'] = $pane;
    $display->panels['right_region'][0] = 'new-aad1741b-1995-4abc-b57f-e086f5742694';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  return $pages;

}
