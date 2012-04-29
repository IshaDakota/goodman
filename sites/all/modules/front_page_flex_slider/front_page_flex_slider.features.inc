<?php
/**
 * @file
 * front_page_flex_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_flex_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_flex_slider_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function front_page_flex_slider_node_info() {
  $items = array(
    'flex_slider_image' => array(
      'name' => t('Flex Slider Image'),
      'base' => 'node_content',
      'description' => t('Images for home page flex slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
