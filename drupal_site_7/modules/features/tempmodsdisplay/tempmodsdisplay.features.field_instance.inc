<?php
/**
 * @file
 * tempmodsdisplay.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tempmodsdisplay_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-modsxmldisplay-field_modscollection_file'
  $field_instances['node-modsxmldisplay-field_modscollection_file'] = array(
    'bundle' => 'modsxmldisplay',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'xsl_formatter',
        'settings' => array(
          'debug' => 0,
          'xsl_params' => '',
          'xsl_path' => 'sites/192.168.100.105.drupal_site_7/modules/contrib/xsl_formatter/xsl/MODS3-4_HTML_XSLT1-0.xsl',
        ),
        'type' => 'xsl_formatter',
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
    'field_name' => 'field_modscollection_file',
    'label' => 'modsCollection_file',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt xml',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_image_scroll' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('modsCollection_file');

  return $field_instances;
}
