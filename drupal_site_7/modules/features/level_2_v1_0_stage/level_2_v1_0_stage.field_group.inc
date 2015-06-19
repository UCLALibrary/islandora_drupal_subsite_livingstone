<?php
/**
 * @file
 * level_2_v1_0_stage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function level_2_v1_0_stage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_level2outbound|node|section_page|form';
  $field_group->group_name = 'group_level2outbound';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Level 2 Outbound fields',
    'weight' => '4',
    'children' => array(
      0 => 'field_outbound_link',
      1 => 'field_pre_title',
      2 => 'field_turn_off_hover',
      3 => 'field_open_new_tab',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Level 2 Outbound fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-level2outbound field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_level2outbound|node|section_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_level2|node|section_page|form';
  $field_group->group_name = 'group_level2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Level 2 Fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_section_page_sections',
      1 => 'field_section_page_image',
      2 => 'field_level_2_intro_node',
      3 => 'field_level_2_photocredit',
      4 => 'field_level_2_teaser',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Level 2 Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-level2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_level2|node|section_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_level3|node|section_page|form';
  $field_group->group_name = 'group_level3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'section_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Level 3 Fields',
    'weight' => '2',
    'children' => array(
      0 => 'field_section_page_tag_line',
      1 => 'field_section_page_byline',
      2 => 'field_section_page_date',
      3 => 'field_social_media_links',
      4 => 'field_carousel_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Level 3 Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-level3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_level3|node|section_page|form'] = $field_group;

  return $export;
}
