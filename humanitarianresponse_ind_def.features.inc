<?php
/**
 * @file
 * humanitarianresponse_ind_def.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_ind_def_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_ind_def_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_ind_def_node_info() {
  $items = array(
    'indicator_definition' => array(
      'name' => t('Indicator Definition'),
      'base' => 'node_content',
      'description' => t('Indicator definition and reference to Global Indicators'),
      'has_title' => '1',
      'title_label' => t('Indicator Title'),
      'help' => '',
    ),
  );
  return $items;
}
