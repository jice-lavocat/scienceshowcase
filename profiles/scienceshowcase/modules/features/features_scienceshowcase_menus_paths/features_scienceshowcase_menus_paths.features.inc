<?php
/**
 * @file
 * features_scienceshowcase_menus_paths.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_scienceshowcase_menus_paths_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
