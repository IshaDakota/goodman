<?php
/**
 * @file
 * goodman_how_to_guide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function goodman_how_to_guide_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function goodman_how_to_guide_node_info() {
  $items = array(
    'how_to_manual' => array(
      'name' => t('How To Manual'),
      'base' => 'node_content',
      'description' => t('Manuals that give advice and best practices for how to do common things related to Israel education at camp.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
