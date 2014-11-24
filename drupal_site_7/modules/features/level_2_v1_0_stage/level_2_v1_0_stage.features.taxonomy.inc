<?php
/**
 * @file
 * level_2_v1_0_stage.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function level_2_v1_0_stage_taxonomy_default_vocabularies() {
  return array(
    'site_section' => array(
      'name' => 'Site Section',
      'machine_name' => 'site_section',
      'description' => 'The main division of the website sections',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
