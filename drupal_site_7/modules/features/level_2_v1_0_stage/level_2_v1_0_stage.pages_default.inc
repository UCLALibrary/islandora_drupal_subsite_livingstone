<?php
/**
 * @file
 * level_2_v1_0_stage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function level_2_v1_0_stage_default_page_manager_handlers() {
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
function level_2_v1_0_stage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'behind_the_scenes';
  $page->task = 'page';
  $page->admin_title = 'Behind The Scenes';
  $page->admin_description = '';
  $page->path = 'behindthescenes-old';
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
    $pane->pid = 'new-52af84f2-889d-4808-aee2-7244b4bf9abf';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
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
    $pane->uuid = '52af84f2-889d-4808-aee2-7244b4bf9abf';
    $display->content['new-52af84f2-889d-4808-aee2-7244b4bf9abf'] = $pane;
    $display->panels['center_region'][0] = 'new-52af84f2-889d-4808-aee2-7244b4bf9abf';
    $pane = new stdClass();
    $pane->pid = 'new-20d8bea4-651f-452e-855e-544787d56271';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '464',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '20d8bea4-651f-452e-855e-544787d56271';
    $display->content['new-20d8bea4-651f-452e-855e-544787d56271'] = $pane;
    $display->panels['center_region'][1] = 'new-20d8bea4-651f-452e-855e-544787d56271';
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
    $pane->pid = 'new-e84af514-a970-4ba6-bf57-9e8eb255d415';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
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
    $pane->uuid = 'e84af514-a970-4ba6-bf57-9e8eb255d415';
    $display->content['new-e84af514-a970-4ba6-bf57-9e8eb255d415'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-e84af514-a970-4ba6-bf57-9e8eb255d415';
    $pane = new stdClass();
    $pane->pid = 'new-b253a0e1-2ba2-4090-ac6e-77e3ba123ff6';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '464',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b253a0e1-2ba2-4090-ac6e-77e3ba123ff6';
    $display->content['new-b253a0e1-2ba2-4090-ac6e-77e3ba123ff6'] = $pane;
    $display->panels['left_bottom_region'][1] = 'new-b253a0e1-2ba2-4090-ac6e-77e3ba123ff6';
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
    $pane->pid = 'new-566ce0d6-083f-4111-8154-06458eed6506';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
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
    $pane->uuid = '566ce0d6-083f-4111-8154-06458eed6506';
    $display->content['new-566ce0d6-083f-4111-8154-06458eed6506'] = $pane;
    $display->panels['right_region'][0] = 'new-566ce0d6-083f-4111-8154-06458eed6506';
    $pane = new stdClass();
    $pane->pid = 'new-e4850952-d2fc-4cd6-806f-59d232d93e00';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '464',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e4850952-d2fc-4cd6-806f-59d232d93e00';
    $display->content['new-e4850952-d2fc-4cd6-806f-59d232d93e00'] = $pane;
    $display->panels['right_region'][1] = 'new-e4850952-d2fc-4cd6-806f-59d232d93e00';
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
  $page->path = 'inhisownwords';
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
    $pane->pid = 'new-32318751-e260-4250-927c-78e299c43188';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '447',
      'links' => 0,
      'leave_node_title' => 1,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'teaser',
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
    $pane->uuid = '32318751-e260-4250-927c-78e299c43188';
    $display->content['new-32318751-e260-4250-927c-78e299c43188'] = $pane;
    $display->panels['center_region'][0] = 'new-32318751-e260-4250-927c-78e299c43188';
    $pane = new stdClass();
    $pane->pid = 'new-34083f06-a854-4f12-a867-7ab0d834a90b';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '458',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => 'sectionpagecenter',
      'build_mode' => 'teaser',
      'link_node_title' => 1,
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
    $pane->uuid = '34083f06-a854-4f12-a867-7ab0d834a90b';
    $display->content['new-34083f06-a854-4f12-a867-7ab0d834a90b'] = $pane;
    $display->panels['center_region'][1] = 'new-34083f06-a854-4f12-a867-7ab0d834a90b';
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
    $pane->pid = 'new-50748a86-8826-457e-adcb-5072eab44bac';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '447',
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
    $pane->uuid = '50748a86-8826-457e-adcb-5072eab44bac';
    $display->content['new-50748a86-8826-457e-adcb-5072eab44bac'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-50748a86-8826-457e-adcb-5072eab44bac';
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
    $pane->pid = 'new-5dbfbf6a-224b-4721-8169-dbc803f03eb1';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '447',
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
    $pane->uuid = '5dbfbf6a-224b-4721-8169-dbc803f03eb1';
    $display->content['new-5dbfbf6a-224b-4721-8169-dbc803f03eb1'] = $pane;
    $display->panels['right_region'][0] = 'new-5dbfbf6a-224b-4721-8169-dbc803f03eb1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['in_his_own_words'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_about_this_site';
  $page->task = 'page';
  $page->admin_title = 'About This Site';
  $page->admin_description = '';
  $page->path = 'livingstone-online';
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
  $handler->name = 'page_l2_about_this_site_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_about_this_site';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['l2_about_this_site'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_behind_the_scenes';
  $page->task = 'page';
  $page->admin_title = 'Behind the Scenes';
  $page->admin_description = '';
  $page->path = 'behind-the-scenes';
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
  $handler->name = 'page_l2_behind_the_scenes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_behind_the_scenes';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
    $pane->pid = 'new-e602a69c-42cd-4346-83e7-be5f0ed774c1';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'l';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ctools_context_1',
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
    $pane->uuid = 'e602a69c-42cd-4346-83e7-be5f0ed774c1';
    $display->content['new-e602a69c-42cd-4346-83e7-be5f0ed774c1'] = $pane;
    $display->panels['center'][1] = 'new-e602a69c-42cd-4346-83e7-be5f0ed774c1';
    $pane = new stdClass();
    $pane->pid = 'new-9cf80315-e6de-47d8-924e-29607bc4bf68';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'l';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'ctools_context_2',
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
    $pane->uuid = '9cf80315-e6de-47d8-924e-29607bc4bf68';
    $display->content['new-9cf80315-e6de-47d8-924e-29607bc4bf68'] = $pane;
    $display->panels['center'][2] = 'new-9cf80315-e6de-47d8-924e-29607bc4bf68';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['l2_behind_the_scenes'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_in_his_own_words';
  $page->task = 'page';
  $page->admin_title = 'In His Own Words';
  $page->admin_description = '';
  $page->path = 'in-his-own-words';
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
  $handler->name = 'page_l2_in_his_own_words_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_in_his_own_words';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['l2_in_his_own_words'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_life_and_times';
  $page->task = 'page';
  $page->admin_title = 'Life and Times';
  $page->admin_description = '';
  $page->path = 'life-and-times';
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
  $handler->name = 'page_l2_life_and_times_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_life_and_times';
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
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['l2_life_and_times'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_our_technology';
  $page->task = 'page';
  $page->admin_title = 'Our Technology';
  $page->admin_description = '';
  $page->path = 'our-technology';
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
  $handler->name = 'page_l2_our_technology_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_our_technology';
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
  $pages['l2_our_technology'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'l2_resources';
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
  $handler->name = 'page_l2_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'l2_resources';
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
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
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
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c8b8bf8e-c934-4973-8691-1055ec73e6f4';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['l2_resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'life_times';
  $page->task = 'page';
  $page->admin_title = 'Life & Times';
  $page->admin_description = '';
  $page->path = 'lifeandtimes';
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
    $pane->pid = 'new-c5cc55e7-f123-4c53-8fe1-f017eda43420';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
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
    $pane->uuid = 'c5cc55e7-f123-4c53-8fe1-f017eda43420';
    $display->content['new-c5cc55e7-f123-4c53-8fe1-f017eda43420'] = $pane;
    $display->panels['center_region'][0] = 'new-c5cc55e7-f123-4c53-8fe1-f017eda43420';
    $pane = new stdClass();
    $pane->pid = 'new-75b4127a-1fbe-47a0-8163-210a6ab1b290';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '472',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '75b4127a-1fbe-47a0-8163-210a6ab1b290';
    $display->content['new-75b4127a-1fbe-47a0-8163-210a6ab1b290'] = $pane;
    $display->panels['center_region'][1] = 'new-75b4127a-1fbe-47a0-8163-210a6ab1b290';
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
    $pane->pid = 'new-613b6669-6d44-4a0f-be72-72ce500ec0bf';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
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
    $pane->uuid = '613b6669-6d44-4a0f-be72-72ce500ec0bf';
    $display->content['new-613b6669-6d44-4a0f-be72-72ce500ec0bf'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-613b6669-6d44-4a0f-be72-72ce500ec0bf';
    $pane = new stdClass();
    $pane->pid = 'new-ac46afcf-56bc-414d-b1e0-ee96a4ea6373';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '472',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ac46afcf-56bc-414d-b1e0-ee96a4ea6373';
    $display->content['new-ac46afcf-56bc-414d-b1e0-ee96a4ea6373'] = $pane;
    $display->panels['left_bottom_region'][1] = 'new-ac46afcf-56bc-414d-b1e0-ee96a4ea6373';
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
    $pane->pid = 'new-4ab308c5-2778-40ca-b9fb-fa592d89fb19';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
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
    $pane->uuid = '4ab308c5-2778-40ca-b9fb-fa592d89fb19';
    $display->content['new-4ab308c5-2778-40ca-b9fb-fa592d89fb19'] = $pane;
    $display->panels['right_region'][0] = 'new-4ab308c5-2778-40ca-b9fb-fa592d89fb19';
    $pane = new stdClass();
    $pane->pid = 'new-d7e3010a-f535-4bc6-bd39-c6ee6d8c8cb9';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '472',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd7e3010a-f535-4bc6-bd39-c6ee6d8c8cb9';
    $display->content['new-d7e3010a-f535-4bc6-bd39-c6ee6d8c8cb9'] = $pane;
    $display->panels['right_region'][1] = 'new-d7e3010a-f535-4bc6-bd39-c6ee6d8c8cb9';
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
  $page->path = 'livingstoneonline-old';
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
    $pane->pid = 'new-c4d31ffc-80fb-4705-ba20-17d0df8e634d';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '460',
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
    $pane->uuid = 'c4d31ffc-80fb-4705-ba20-17d0df8e634d';
    $display->content['new-c4d31ffc-80fb-4705-ba20-17d0df8e634d'] = $pane;
    $display->panels['center_region'][0] = 'new-c4d31ffc-80fb-4705-ba20-17d0df8e634d';
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
    $pane->pid = 'new-b56422cc-c176-461a-9976-121167876b51';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '460',
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
    $pane->uuid = 'b56422cc-c176-461a-9976-121167876b51';
    $display->content['new-b56422cc-c176-461a-9976-121167876b51'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-b56422cc-c176-461a-9976-121167876b51';
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
    $pane->pid = 'new-fee551d8-2225-4a27-b358-1b082de6198d';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '460',
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
    $pane->uuid = 'fee551d8-2225-4a27-b358-1b082de6198d';
    $display->content['new-fee551d8-2225-4a27-b358-1b082de6198d'] = $pane;
    $display->panels['right_region'][0] = 'new-fee551d8-2225-4a27-b358-1b082de6198d';
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
  $page->path = 'ourtechnology';
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
          2 => 14,
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
      14 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 15,
        ),
        'parent' => 'main',
        'class' => 'image blocks',
      ),
      15 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'children' => array(
          0 => 16,
        ),
        'class' => '',
      ),
      16 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'blocks',
        ),
        'parent' => '15',
        'class' => '',
      ),
      'blocks' => array(
        'type' => 'region',
        'title' => 'blocks',
        'width' => 100,
        'width_type' => '%',
        'parent' => '16',
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
      'livingstone_title' => NULL,
      'external_menu_region' => NULL,
      'internal_menu_region' => NULL,
      'left_top_region' => NULL,
      'left_bottom_region' => NULL,
      'center_region' => NULL,
      'right_region' => NULL,
      'right_external_menu_region' => NULL,
      'blocks' => NULL,
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
    $pane->pid = 'new-1d6e237b-85ae-4f40-8311-52a90c6288ce';
    $pane->panel = 'blocks';
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
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = '1d6e237b-85ae-4f40-8311-52a90c6288ce';
    $display->content['new-1d6e237b-85ae-4f40-8311-52a90c6288ce'] = $pane;
    $display->panels['blocks'][0] = 'new-1d6e237b-85ae-4f40-8311-52a90c6288ce';
    $pane = new stdClass();
    $pane->pid = 'new-836c4889-b8c8-4ada-b360-d82baa13374b';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '466',
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
    $pane->uuid = '836c4889-b8c8-4ada-b360-d82baa13374b';
    $display->content['new-836c4889-b8c8-4ada-b360-d82baa13374b'] = $pane;
    $display->panels['center_region'][0] = 'new-836c4889-b8c8-4ada-b360-d82baa13374b';
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
    $pane->shown = FALSE;
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
    $pane->pid = 'new-4f0e6286-d8b6-4840-a255-1bbf3a5c051b';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '466',
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
    $pane->uuid = '4f0e6286-d8b6-4840-a255-1bbf3a5c051b';
    $display->content['new-4f0e6286-d8b6-4840-a255-1bbf3a5c051b'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-4f0e6286-d8b6-4840-a255-1bbf3a5c051b';
    $pane = new stdClass();
    $pane->pid = 'new-c91c54b4-0cd2-43a4-999b-df694f750e4b';
    $pane->panel = 'left_top_region';
    $pane->type = 'block';
    $pane->subtype = 'bean-our-technology-section-page-info';
    $pane->shown = FALSE;
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
    $pane->pid = 'new-84734075-b3f7-41d3-835d-407685cba892';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '466',
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
    $pane->uuid = '84734075-b3f7-41d3-835d-407685cba892';
    $display->content['new-84734075-b3f7-41d3-835d-407685cba892'] = $pane;
    $display->panels['right_region'][0] = 'new-84734075-b3f7-41d3-835d-407685cba892';
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
  $page->path = 'resources-old';
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
    $pane->pid = 'new-c230891e-abea-4c3c-99ec-68a0dfdb4cb4';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
      'links' => 1,
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
    $pane->uuid = 'c230891e-abea-4c3c-99ec-68a0dfdb4cb4';
    $display->content['new-c230891e-abea-4c3c-99ec-68a0dfdb4cb4'] = $pane;
    $display->panels['center_region'][0] = 'new-c230891e-abea-4c3c-99ec-68a0dfdb4cb4';
    $pane = new stdClass();
    $pane->pid = 'new-565da10f-951d-46bb-a5ff-f1159ae5caf7';
    $pane->panel = 'center_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '456',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '565da10f-951d-46bb-a5ff-f1159ae5caf7';
    $display->content['new-565da10f-951d-46bb-a5ff-f1159ae5caf7'] = $pane;
    $display->panels['center_region'][1] = 'new-565da10f-951d-46bb-a5ff-f1159ae5caf7';
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
    $pane->pid = 'new-0baca5bb-d8c1-4a87-9e0e-23b4bcfd3368';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
      'links' => 1,
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
    $pane->uuid = '0baca5bb-d8c1-4a87-9e0e-23b4bcfd3368';
    $display->content['new-0baca5bb-d8c1-4a87-9e0e-23b4bcfd3368'] = $pane;
    $display->panels['left_bottom_region'][0] = 'new-0baca5bb-d8c1-4a87-9e0e-23b4bcfd3368';
    $pane = new stdClass();
    $pane->pid = 'new-1ac0f70d-534e-41c7-8e34-8c4a3c8221ad';
    $pane->panel = 'left_bottom_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '456',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1ac0f70d-534e-41c7-8e34-8c4a3c8221ad';
    $display->content['new-1ac0f70d-534e-41c7-8e34-8c4a3c8221ad'] = $pane;
    $display->panels['left_bottom_region'][1] = 'new-1ac0f70d-534e-41c7-8e34-8c4a3c8221ad';
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
    $pane->pid = 'new-9303b226-d823-47a1-871c-ab0a9147dc11';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '244',
      'links' => 1,
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
    $pane->uuid = '9303b226-d823-47a1-871c-ab0a9147dc11';
    $display->content['new-9303b226-d823-47a1-871c-ab0a9147dc11'] = $pane;
    $display->panels['right_region'][0] = 'new-9303b226-d823-47a1-871c-ab0a9147dc11';
    $pane = new stdClass();
    $pane->pid = 'new-ed73d8ec-335d-48ad-b027-6dd3ae4d8354';
    $pane->panel = 'right_region';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '456',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed73d8ec-335d-48ad-b027-6dd3ae4d8354';
    $display->content['new-ed73d8ec-335d-48ad-b027-6dd3ae4d8354'] = $pane;
    $display->panels['right_region'][1] = 'new-ed73d8ec-335d-48ad-b027-6dd3ae4d8354';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resources'] = $page;

  return $pages;

}
