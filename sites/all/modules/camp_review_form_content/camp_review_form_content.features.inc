<?php
/**
 * @file
 * camp_review_form_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function camp_review_form_content_node_info() {
  $items = array(
    'camp_review_form' => array(
      'name' => t('Camp Review Form'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Review Title'),
      'help' => '',
    ),
  );
  return $items;
}
