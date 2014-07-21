<?php
/**
 * @file
 * level_2_v1_0.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function level_2_v1_0_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-section_header-field_section_sub_title'
  $field_instances['bean-section_header-field_section_sub_title'] = array(
    'bundle' => 'section_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'masonry' => FALSE,
          'masonry_animated' => 0,
          'masonry_animation_duration' => 500,
          'masonry_column_width' => '',
          'masonry_column_width_units' => 'px',
          'masonry_fit_width' => 0,
          'masonry_gutter_width' => 0,
          'masonry_images_first' => 1,
          'masonry_resizable' => 1,
          'masonry_rtl' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_section_sub_title',
    'label' => 'Sub Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bean-section_title-field_abstract'
  $field_instances['bean-section_title-field_abstract'] = array(
    'bundle' => 'section_title',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'masonry' => FALSE,
          'masonry_animated' => 0,
          'masonry_animation_duration' => 500,
          'masonry_column_width' => '',
          'masonry_column_width_units' => 'px',
          'masonry_fit_width' => 0,
          'masonry_gutter_width' => 0,
          'masonry_images_first' => 1,
          'masonry_resizable' => 1,
          'masonry_rtl' => 0,
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_abstract',
    'label' => 'Tag Line',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-section_page-body'
  $field_instances['node-section_page-body'] = array(
    'bundle' => 'section_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'masonry' => FALSE,
          'masonry_animated' => 0,
          'masonry_animation_duration' => 500,
          'masonry_column_width' => '',
          'masonry_column_width_units' => 'px',
          'masonry_fit_width' => 0,
          'masonry_gutter_width' => 0,
          'masonry_images_first' => 1,
          'masonry_resizable' => 1,
          'masonry_rtl' => 0,
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'masonry' => FALSE,
          'masonry_animated' => 0,
          'masonry_animation_duration' => 500,
          'masonry_column_width' => '',
          'masonry_column_width_units' => 'px',
          'masonry_fit_width' => 0,
          'masonry_gutter_width' => 0,
          'masonry_images_first' => 1,
          'masonry_resizable' => 1,
          'masonry_rtl' => 0,
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-section_page-field_section_page_image'
  $field_instances['node-section_page-field_section_page_image'] = array(
    'bundle' => 'section_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
          'masonry' => FALSE,
          'masonry_animated' => 0,
          'masonry_animation_duration' => 500,
          'masonry_column_width' => '',
          'masonry_column_width_units' => 'px',
          'masonry_fit_width' => 0,
          'masonry_gutter_width' => 0,
          'masonry_images_first' => 1,
          'masonry_resizable' => 1,
          'masonry_rtl' => 0,
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_page_image',
    'label' => 'section page image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-section_page-field_section_page_tag_line'
  $field_instances['node-section_page-field_section_page_tag_line'] = array(
    'bundle' => 'section_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'masonry' => FALSE,
          'masonry_animated' => 0,
          'masonry_animation_duration' => 500,
          'masonry_column_width' => '',
          'masonry_column_width_units' => 'px',
          'masonry_fit_width' => 0,
          'masonry_gutter_width' => 0,
          'masonry_images_first' => 1,
          'masonry_resizable' => 1,
          'masonry_rtl' => 0,
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_section_page_tag_line',
    'label' => 'Tag line',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Sub Title');
  t('Tag Line');
  t('Tag line');
  t('section page image');

  return $field_instances;
}
