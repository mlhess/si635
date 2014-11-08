<?php
/**
 * @file
 * week10demo_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function week10demo_feature_node_info() {
  $items = array(
    'park' => array(
      'name' => t('Park'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Park Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
