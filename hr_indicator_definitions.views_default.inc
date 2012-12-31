<?php
/**
 * @file
 * hr_indicator_definitions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_indicator_definitions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'indicator_definition';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicator Definition';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indicator Definition';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_ind_unit']['id'] = 'field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['table'] = 'field_data_field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['field'] = 'field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['element_label_colon'] = FALSE;
  /* Field: Content: Cluster Objective */
  $handler->display->display_options['fields']['field_cluster_obj']['id'] = 'field_cluster_obj';
  $handler->display->display_options['fields']['field_cluster_obj']['table'] = 'field_data_field_cluster_obj';
  $handler->display->display_options['fields']['field_cluster_obj']['field'] = 'field_cluster_obj';
  $handler->display->display_options['fields']['field_cluster_obj']['element_label_colon'] = FALSE;
  /* Field: Content: Activities */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['element_label_colon'] = FALSE;
  /* Field: Content: Global Indicator Reference */
  $handler->display->display_options['fields']['field_global_ind_id']['id'] = 'field_global_ind_id';
  $handler->display->display_options['fields']['field_global_ind_id']['table'] = 'field_data_field_global_ind_id';
  $handler->display->display_options['fields']['field_global_ind_id']['field'] = 'field_global_ind_id';
  $handler->display->display_options['fields']['field_global_ind_id']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Cluster (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_definition' => 'indicator_definition',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crf/indicator-definition';
  $translatables['indicator_definition'] = array(
    t('Master'),
    t('Indicator Definition'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Cluster'),
    t('Unit'),
    t('Cluster Objective'),
    t('Activities'),
    t('Global Indicator Reference'),
    t('Page'),
  );
  $export['indicator_definition'] = $view;

  $view = new view();
  $view->name = 'indicator_definitions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicator Definitions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Situational or Performance-related (field_ind_sit_perf) */
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['id'] = 'field_ind_sit_perf_value';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['table'] = 'field_data_field_ind_sit_perf';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['field'] = 'field_ind_sit_perf_value';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ind_sit_perf_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_definition' => 'indicator_definition',
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'entityreference_view_widget';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'entityreference_view_widget';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['indicator_definitions'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Entity Reference View Widget'),
  );
  $export['indicator_definitions'] = $view;

  return $export;
}
