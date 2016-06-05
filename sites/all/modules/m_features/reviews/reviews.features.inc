<?php
/**
 * @file
 * reviews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function reviews_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function reviews_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function reviews_image_default_styles() {
  $styles = array();

  // Exported image style: review.
  $styles['review'] = array(
    'label' => 'Для отзыва',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function reviews_node_info() {
  $items = array(
    'review' => array(
      'name' => t('Отзыв'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Название компании или имя'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
