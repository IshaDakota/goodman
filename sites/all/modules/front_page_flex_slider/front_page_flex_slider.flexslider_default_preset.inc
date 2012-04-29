<?php
/**
 * @file
 * front_page_flex_slider.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function front_page_flex_slider_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'front_page_slider';
  $preset->title = 'Front Page Slider';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->options = array(
    'animation' => 'slide',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 3000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 1,
    'controlNav' => 0,
    'keyboardNav' => 1,
    'mousewheel' => 0,
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['front_page_slider'] = $preset;

  return $export;
}
