<?php
/**
 * @file
 * features_scienceshowcase_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_scienceshowcase_panels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
