<?php
/**
 * @file
 * hr_indicator_definitions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_indicator_definitions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_indicator_definitions_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hr_indicator_definitions_node_info() {
  $items = array(
    'indicator_definition' => array(
      'name' => t('Indicator Definition'),
      'base' => 'node_content',
      'description' => t('Indicator definition and reference to Global Indicators'),
      'has_title' => '1',
      'title_label' => t('Indicator'),
      'help' => '',
    ),
  );
  return $items;
}
