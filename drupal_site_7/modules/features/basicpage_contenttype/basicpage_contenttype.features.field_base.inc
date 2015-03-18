<?php
/**
 * @file
 * basicpage_contenttype.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function basicpage_contenttype_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_section_place'
  $field_bases['field_section_place'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section_place',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'site_section',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
