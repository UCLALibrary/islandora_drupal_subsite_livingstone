<?php
/**
 * @file
 * level_2_images_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function level_2_images_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function level_2_images_view_image_default_styles() {
  $styles = array();

  // Exported image style: 375x350.
  $styles['375x350'] = array(
    'label' => '375x350',
    'effects' => array(
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      10 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: 4-3_390-293.
  $styles['4-3_390-293'] = array(
    'label' => '4-3_390-293',
    'effects' => array(
      1 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 390,
          'height' => 293,
          'anchor' => 'center-center',
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 400x300.
  $styles['400x300'] = array(
    'label' => '400x300',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 400x600.
  $styles['400x600'] = array(
    'label' => '400x600',
    'effects' => array(
      6 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 400,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 65x65_square.
  $styles['65x65_square'] = array(
    'label' => '65x65 square',
    'effects' => array(
      5 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 65,
          'height' => 65,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
