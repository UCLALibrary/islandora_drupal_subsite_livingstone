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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: section page image */
  $handler->display->display_options['fields']['field_section_page_image']['id'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['table'] = 'field_data_field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['field'] = 'field_section_page_image';
  $handler->display->display_options['fields']['field_section_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_section_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_section_page_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['style_options']['wrap'] = '0';
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
