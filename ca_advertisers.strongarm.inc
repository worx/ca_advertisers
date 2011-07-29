<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_advertisers_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_advertisers';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'menu' => '-4',
    'path' => '4',
  );

  $export['content_extra_weights_ca_advertisers'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_advertisers_gallery';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '0',
    'author' => '-1',
    'options' => '1',
    'menu' => '-2',
    'path' => '2',
  );

  $export['content_extra_weights_ca_advertisers_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_advertisers';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_advertisers'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_advertisers_gallery';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_advertisers_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_advertisers_gallery_pattern';
  $strongarm->value = '[field_ca_ag_parent_advertiser-path]/[title-raw]';

  $export['pathauto_node_ca_advertisers_gallery_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_advertisers_pattern';
  $strongarm->value = 'advertisers/[title-raw]';

  $export['pathauto_node_ca_advertisers_pattern'] = $strongarm;
  return $export;
}
