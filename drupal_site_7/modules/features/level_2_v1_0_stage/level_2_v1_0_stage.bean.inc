<?php
/**
 * @file
 * level_2_v1_0_stage.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function level_2_v1_0_stage_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'section_header';
  $bean_type->label = 'Section Header';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['section_header'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'section_title';
  $bean_type->label = 'Section Title';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['section_title'] = $bean_type;

  return $export;
}
