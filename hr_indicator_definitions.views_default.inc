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

  $view = new view;
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
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
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Cluster(s) */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_clusters']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_clusters']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_clusters']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_clusters']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_clusters']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_clusters']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['field_api_classes'] = 0;
  /* Field: Content: Unit */
  $handler->display->display_options['fields']['field_ind_unit']['id'] = 'field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['table'] = 'field_data_field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['field'] = 'field_ind_unit';
  $handler->display->display_options['fields']['field_ind_unit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_unit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_unit']['field_api_classes'] = 0;
  /* Field: Content: Cluster Objective */
  $handler->display->display_options['fields']['field_cluster_obj']['id'] = 'field_cluster_obj';
  $handler->display->display_options['fields']['field_cluster_obj']['table'] = 'field_data_field_cluster_obj';
  $handler->display->display_options['fields']['field_cluster_obj']['field'] = 'field_cluster_obj';
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster_obj']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster_obj']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster_obj']['field_api_classes'] = 0;
  /* Field: Content: Activities */
  $handler->display->display_options['fields']['field_activities']['id'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['table'] = 'field_data_field_activities';
  $handler->display->display_options['fields']['field_activities']['field'] = 'field_activities';
  $handler->display->display_options['fields']['field_activities']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_activities']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_activities']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_activities']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_activities']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_activities']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_activities']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_activities']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_activities']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_activities']['field_api_classes'] = 0;
  /* Field: Content: Global Indicator Reference */
  $handler->display->display_options['fields']['field_global_ind_id']['id'] = 'field_global_ind_id';
  $handler->display->display_options['fields']['field_global_ind_id']['table'] = 'field_data_field_global_ind_id';
  $handler->display->display_options['fields']['field_global_ind_id']['field'] = 'field_global_ind_id';
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_global_ind_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_global_ind_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_global_ind_id']['field_api_classes'] = 0;
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
  /* Filter criterion: Content: Cluster(s) (field_clusters) */
  $handler->display->display_options['filters']['field_clusters_tid']['id'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['field'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator_id'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['operator'] = 'field_clusters_tid_op';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['identifier'] = 'field_clusters_tid';
  $handler->display->display_options['filters']['field_clusters_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_clusters_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_clusters_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_clusters_tid']['error_message'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_definition' => 'indicator_definition',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
    t('Cluster(s)'),
    t('Unit'),
    t('Cluster Objective'),
    t('Activities'),
    t('Global Indicator Reference'),
    t('Cluster'),
    t('Page'),
  );
  $export['indicator_definition'] = $view;

  return $export;
}
