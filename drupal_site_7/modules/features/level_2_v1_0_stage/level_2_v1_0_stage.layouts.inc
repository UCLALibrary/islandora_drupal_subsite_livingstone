<?php
/**
 * @file
 * level_2_v1_0_stage.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function level_2_v1_0_stage_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'section_page_layout';
  $layout->admin_title = 'section page layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
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
  $export['section_page_layout'] = $layout;

  return $export;
}
