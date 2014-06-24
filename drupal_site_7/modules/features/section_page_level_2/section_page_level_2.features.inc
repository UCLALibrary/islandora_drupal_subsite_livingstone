<?php
/**
 * @file
 * section_page_level_2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function section_page_level_2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function section_page_level_2_node_info() {
  $items = array(
    'section_page' => array(
      'name' => t('Section Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
