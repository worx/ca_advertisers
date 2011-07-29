<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_advertisers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ca_advertisers_imagecache_default_presets() {
  $items = array(
    'ca_advertisers_a_scale_200w' => array(
      'presetname' => 'ca_advertisers_a_scale_200w',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function ca_advertisers_node_info() {
  $items = array(
    'ca_advertisers' => array(
      'name' => t('Context Admin Advertisers'),
      'module' => 'features',
      'description' => t('This content type is used to add an advertiser to the advertiser section.'),
      'has_title' => '1',
      'title_label' => t('Company Name'),
      'has_body' => '1',
      'body_label' => t('About Us'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'ca_advertisers_gallery' => array(
      'name' => t('Context Admin Advertisers Gallery'),
      'module' => 'features',
      'description' => t('This content type is used to add images to the advertiser\'s gallery section on their advertisers page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ca_advertisers_views_api() {
  return array(
    'api' => '2',
  );
}
