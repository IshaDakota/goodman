<?php
/**
 * @file
 * curriculum_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function curriculum_content_node_info() {
  $items = array(
    'curriculum_content' => array(
      'name' => t('Curriculum Content'),
      'base' => 'node_content',
      'description' => t('Curriculum Content for the Goodman Initiative'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
