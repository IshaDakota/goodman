<?php
/**
 * @file
 * goodman_showcase.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function goodman_showcase_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function goodman_showcase_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function goodman_showcase_node_info() {
  $items = array(
    'program_showcase' => array(
      'name' => t('Program Showcase'),
      'base' => 'node_content',
      'description' => t('Programs from camps participating in the Goodman Initiative to be featured on the Initiative Database Website'),
      'has_title' => '1',
      'title_label' => t('Program Title'),
      'help' => '',
    ),
  );
  return $items;
}
