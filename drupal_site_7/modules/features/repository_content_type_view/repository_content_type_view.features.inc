<?php
/**
 * @file
 * repository_content_type_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function repository_content_type_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function repository_content_type_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function repository_content_type_view_node_info() {
  $items = array(
    'repository_info' => array(
      'name' => t('Repository info'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
