<?php
/**
 * @file
 * features_scienceshowcase_menus_paths.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_scienceshowcase_menus_paths_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:collaborations
  $menu_links['main-menu:collaborations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'collaborations',
    'router_path' => 'collaborations',
    'link_title' => 'Collaborations',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: main-menu:contact
  $menu_links['main-menu:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => 'Contacter Scientifi Showcase',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: main-menu:groupe
  $menu_links['main-menu:groupe'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groupe',
    'router_path' => 'groupe',
    'link_title' => 'Groupe',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:open-positions
  $menu_links['main-menu:open-positions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'open-positions',
    'router_path' => 'open-positions',
    'link_title' => 'Jobs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:publications
  $menu_links['main-menu:publications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications',
    'router_path' => 'publications',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: main-menu:research-topic
  $menu_links['main-menu:research-topic'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'research-topic',
    'router_path' => 'research-topic',
    'link_title' => 'Thématiques',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accueil');
  t('Collaborations');
  t('Contact');
  t('Groupe');
  t('Jobs');
  t('Publications');
  t('Thématiques');


  return $menu_links;
}
