<?php
/**
 * @file
 * level_2_v1_0_stage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function level_2_v1_0_stage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_banner_scroll';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'image banner scroll';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'about_this_site' => 'about_this_site',
    'in_his_words' => 'in_his_words',
    'our_technology' => 'our_technology',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Level 2 Image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_image']['alter']['text'] = '<div class="slidercontent">
<div class="slidertitle">[title]</div><div class="sliderimg">[field_section_page_image]</div>
</div>';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => '65x65_square',
    'image_link' => 'content',
  );
  /* Field: Content: Sections */
  $handler->display->display_options['fields']['field_section_page_sections']['id'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['field'] = 'field_section_page_sections';
  $handler->display->display_options['fields']['field_section_page_sections']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_sections']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_page_sections']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_sections']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Contextual filter: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'section_page' => 'section_page',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'tango';
  $handler->display->display_options['style_options']['visible'] = '';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Sections (field_section_page_sections) */
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['id'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['table'] = 'field_data_field_section_page_sections';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['field'] = 'field_section_page_sections_tid';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_section_page_sections_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'section_page' => 'section_page',
  );
  /* Filter criterion: Content: Level 2 Intro node (field_level_2_intro_node) */
  $handler->display->display_options['filters']['field_level_2_intro_node_value']['id'] = 'field_level_2_intro_node_value';
  $handler->display->display_options['filters']['field_level_2_intro_node_value']['table'] = 'field_data_field_level_2_intro_node';
  $handler->display->display_options['filters']['field_level_2_intro_node_value']['field'] = 'field_level_2_intro_node_value';
  $handler->display->display_options['filters']['field_level_2_intro_node_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_level_2_intro_node_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['pane_category']['name'] = 'section pages';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_section_page_sections_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Sections (field_section_page_sections)',
    ),
  );
  $export['image_banner_scroll'] = $view;

  return $export;
}
