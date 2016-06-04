<?php
/**
 * @file
 * onepage_starter_kit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function onepage_starter_kit_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
