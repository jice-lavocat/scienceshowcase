<?php
/**
 * @file
 * features_scienceshowcase_views.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function features_scienceshowcase_views_taxonomy_default_vocabularies() {
  return array(
    'journals' => array(
      'name' => 'Journals',
      'machine_name' => 'journals',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
