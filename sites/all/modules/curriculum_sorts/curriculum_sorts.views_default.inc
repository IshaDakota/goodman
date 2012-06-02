<?php
/**
 * @file
 * curriculum_sorts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function curriculum_sorts_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'aggregation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sorted Lists';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_subjects',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Age of Campers */
  $handler->display->display_options['fields']['field_age_campers']['id'] = 'field_age_campers';
  $handler->display->display_options['fields']['field_age_campers']['table'] = 'field_data_field_age_campers';
  $handler->display->display_options['fields']['field_age_campers']['field'] = 'field_age_campers';
  $handler->display->display_options['fields']['field_age_campers']['label'] = '';
  $handler->display->display_options['fields']['field_age_campers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_age_campers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_age_campers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_age_campers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'curriculum_content' => 'curriculum_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Age Sort */
  $handler = $view->new_display('page', 'Age Sort', 'age_sort');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_age_campers',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Age of Campers */
  $handler->display->display_options['fields']['field_age_campers']['id'] = 'field_age_campers';
  $handler->display->display_options['fields']['field_age_campers']['table'] = 'field_data_field_age_campers';
  $handler->display->display_options['fields']['field_age_campers']['field'] = 'field_age_campers';
  $handler->display->display_options['fields']['field_age_campers']['label'] = '';
  $handler->display->display_options['fields']['field_age_campers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_age_campers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_age_campers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_age_campers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_age_campers']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_age_campers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_age_campers']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Age of Campers (field_age_campers) */
  $handler->display->display_options['sorts']['field_age_campers_tid']['id'] = 'field_age_campers_tid';
  $handler->display->display_options['sorts']['field_age_campers_tid']['table'] = 'field_data_field_age_campers';
  $handler->display->display_options['sorts']['field_age_campers_tid']['field'] = 'field_age_campers_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'sort/age';

  /* Display: Theme Sort */
  $handler = $view->new_display('page', 'Theme Sort', 'theme_sort');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_curriculum_themes',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Curricular Subjects (field_subjects) */
  $handler->display->display_options['relationships']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['relationships']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['relationships']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['relationships']['field_subjects_tid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Curriculum Themes */
  $handler->display->display_options['fields']['field_curriculum_themes']['id'] = 'field_curriculum_themes';
  $handler->display->display_options['fields']['field_curriculum_themes']['table'] = 'field_data_field_curriculum_themes';
  $handler->display->display_options['fields']['field_curriculum_themes']['field'] = 'field_curriculum_themes';
  $handler->display->display_options['fields']['field_curriculum_themes']['label'] = '';
  $handler->display->display_options['fields']['field_curriculum_themes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curriculum_themes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_curriculum_themes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_curriculum_themes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_curriculum_themes']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_curriculum_themes']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_curriculum_themes']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'sort/theme';

  /* Display: Subject Sort */
  $handler = $view->new_display('page', 'Subject Sort', 'subject_sort');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Curricular Subjects (field_subjects) */
  $handler->display->display_options['relationships']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['relationships']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['relationships']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['relationships']['field_subjects_tid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_subjects_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_subjects_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'sort/subject';

  /* Display: Setting Sort */
  $handler = $view->new_display('page', 'Setting Sort', 'setting_sort');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Physical Space (field_space) */
  $handler->display->display_options['relationships']['field_space_tid']['id'] = 'field_space_tid';
  $handler->display->display_options['relationships']['field_space_tid']['table'] = 'field_data_field_space';
  $handler->display->display_options['relationships']['field_space_tid']['field'] = 'field_space_tid';
  $handler->display->display_options['relationships']['field_space_tid']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_space_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 0;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_space_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'sort/setting';
  $export['aggregation'] = $view;

  $view = new view;
  $view->name = 'sorted_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sorted Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'curriculum_content' => 'curriculum_content',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'curriculum_content' => 'curriculum_content',
  );
  /* Filter criterion: Content: Curricular Subjects (field_subjects) */
  $handler->display->display_options['filters']['field_subjects_tid']['id'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['field'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator_id'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['label'] = 'Filter by Subject';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['operator'] = 'field_subjects_tid_op';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['identifier'] = 'field_subjects_tid';
  $handler->display->display_options['filters']['field_subjects_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_subjects_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_subjects_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_subjects_tid']['vocabulary'] = 'subjects';
  $handler->display->display_options['filters']['field_subjects_tid']['error_message'] = 1;
  /* Filter criterion: Content: Curriculum Themes (field_curriculum_themes) */
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['id'] = 'field_curriculum_themes_tid';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['table'] = 'field_data_field_curriculum_themes';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['field'] = 'field_curriculum_themes_tid';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['expose']['operator_id'] = 'field_curriculum_themes_tid_op';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['expose']['label'] = 'Filter by Theme';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['expose']['operator'] = 'field_curriculum_themes_tid_op';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['expose']['identifier'] = 'field_curriculum_themes_tid';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['vocabulary'] = 'themes';
  $handler->display->display_options['filters']['field_curriculum_themes_tid']['error_message'] = 1;
  /* Filter criterion: Content: Age of Campers (field_age_campers) */
  $handler->display->display_options['filters']['field_age_campers_tid']['id'] = 'field_age_campers_tid';
  $handler->display->display_options['filters']['field_age_campers_tid']['table'] = 'field_data_field_age_campers';
  $handler->display->display_options['filters']['field_age_campers_tid']['field'] = 'field_age_campers_tid';
  $handler->display->display_options['filters']['field_age_campers_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_campers_tid']['expose']['operator_id'] = 'field_age_campers_tid_op';
  $handler->display->display_options['filters']['field_age_campers_tid']['expose']['label'] = 'Filter by Age';
  $handler->display->display_options['filters']['field_age_campers_tid']['expose']['operator'] = 'field_age_campers_tid_op';
  $handler->display->display_options['filters']['field_age_campers_tid']['expose']['identifier'] = 'field_age_campers_tid';
  $handler->display->display_options['filters']['field_age_campers_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_age_campers_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_age_campers_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_age_campers_tid']['vocabulary'] = 'age_of_campers';
  $handler->display->display_options['filters']['field_age_campers_tid']['error_message'] = 1;
  /* Filter criterion: Content: Physical Space (field_space) */
  $handler->display->display_options['filters']['field_space_tid']['id'] = 'field_space_tid';
  $handler->display->display_options['filters']['field_space_tid']['table'] = 'field_data_field_space';
  $handler->display->display_options['filters']['field_space_tid']['field'] = 'field_space_tid';
  $handler->display->display_options['filters']['field_space_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_space_tid']['expose']['operator_id'] = 'field_space_tid_op';
  $handler->display->display_options['filters']['field_space_tid']['expose']['label'] = 'Fliter by Setting';
  $handler->display->display_options['filters']['field_space_tid']['expose']['operator'] = 'field_space_tid_op';
  $handler->display->display_options['filters']['field_space_tid']['expose']['identifier'] = 'field_space_tid';
  $handler->display->display_options['filters']['field_space_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_space_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_space_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_space_tid']['vocabulary'] = 'space';
  $handler->display->display_options['filters']['field_space_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'sort/advanced-filters';
  $export['sorted_content'] = $view;

  return $export;
}
