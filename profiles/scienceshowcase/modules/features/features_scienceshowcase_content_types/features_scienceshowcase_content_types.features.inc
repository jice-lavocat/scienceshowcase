<?php
/**
 * @file
 * features_scienceshowcase_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_scienceshowcase_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function features_scienceshowcase_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: face.
  $styles['face'] = array(
    'name' => 'face',
    'effects' => array(
      4 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'upscale' => 1,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: thumb_research.
  $styles['thumb_research'] = array(
    'name' => 'thumb_research',
    'effects' => array(
      5 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbface.
  $styles['thumbface'] = array(
    'name' => 'thumbface',
    'effects' => array(
      2 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 85,
          'height' => 85,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function features_scienceshowcase_content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'collaboration' => array(
      'name' => t('Collaboration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'open_positions' => array(
      'name' => t('Open positions'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Open positions'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'permanent_researcher' => array(
      'name' => t('Researcher'),
      'base' => 'node_content',
      'description' => t('Some person of the group'),
      'has_title' => '1',
      'title_label' => t('researcher'),
      'help' => t('Create a new permanent researcher item'),
    ),
    'publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('A publication entry'),
      'has_title' => '1',
      'title_label' => t('Publication'),
      'help' => '',
    ),
    'research_interest' => array(
      'name' => t('Research Interest'),
      'base' => 'node_content',
      'description' => t('Research interest description'),
      'has_title' => '1',
      'title_label' => t('Research Interest'),
      'help' => '',
    ),
  );
  return $items;
}
