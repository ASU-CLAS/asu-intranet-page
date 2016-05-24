<?php
/**
 * @file
 * asu_intranet_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asu_intranet_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function asu_intranet_page_node_info() {
  $items = array(
    'asu_intranet_page' => array(
      'name' => t('ASU Intranet Page'),
      'base' => 'node_content',
      'description' => t('Use <em>intranet pages</em> to create a page that can only be viewed by users with the <em>asu intranet viewer</em> role.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
