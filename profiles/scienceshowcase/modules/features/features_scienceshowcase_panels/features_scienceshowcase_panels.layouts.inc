<?php
/**
 * @file
 * features_scienceshowcase_panels.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function features_scienceshowcase_panels_default_panels_layout() {
  $export = array();

  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'people';
  $layout->admin_title = 'People';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
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
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left_',
          1 => 'top_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_left',
          1 => 'bottom_right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'bottom_left' => array(
        'type' => 'region',
        'title' => 'Bottom Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'bottom_right' => array(
        'type' => 'region',
        'title' => 'Bottom Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'top_left_' => array(
        'type' => 'region',
        'title' => 'Top Left',
        'width' => '220.5',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
      ),
      'top_right' => array(
        'type' => 'region',
        'title' => 'Top Right',
        'width' => '456.5',
        'width_type' => 'px',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['people'] = $layout;

  return $export;
}
