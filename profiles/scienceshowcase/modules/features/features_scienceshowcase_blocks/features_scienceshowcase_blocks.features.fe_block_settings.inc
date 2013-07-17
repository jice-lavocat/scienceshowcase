<?php
/**
 * @file
 * features_scienceshowcase_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_scienceshowcase_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-extra_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'extra_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -14,
      ),
      'gordon_warm' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-institutions'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'institutions',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -12,
      ),
      'gordon_warm' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-other_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'other_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -13,
      ),
      'gordon_warm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-stats_clicky'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'stats_clicky',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => 0,
      ),
      'gordon_warm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'gordon' => array(
        'region' => 'search_box',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -8,
      ),
      'gordon_warm' => array(
        'region' => 'search_box',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => 0,
      ),
      'gordon_warm' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -15,
      ),
      'gordon_warm' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -15,
      ),
      'gordon_warm' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-open_positions-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'open_positions-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '*position*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -14,
      ),
      'gordon_warm' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'gordon_warm',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Offres d\'emploi',
    'visibility' => 0,
  );

  $export['views-people-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'people-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon',
        'weight' => 0,
      ),
      'gordon_warm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-publications-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'publications-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon',
        'weight' => 1,
      ),
      'gordon_warm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon_warm',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-research_topic-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'research_topic-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon',
        'weight' => 2,
      ),
      'gordon_warm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon_warm',
        'weight' => 2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-research_topic-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'research_topic-block_2',
    'i18n_block_language' => array(
      0 => 'en',
      1 => 'fr',
    ),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'gordon' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'gordon',
        'weight' => -14,
      ),
      'gordon_warm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'gordon_warm',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Nos thématiques de recherche',
    'visibility' => 1,
  );

  return $export;
}
