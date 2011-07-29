<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_advertisers_user_default_roles() {
  $roles = array();

  // Exported role: advertiser
  $roles['advertiser'] = array(
    'name' => 'advertiser',
  );

  // Exported role: advertisers administrator
  $roles['advertisers administrator'] = array(
    'name' => 'advertisers administrator',
  );

  return $roles;
}
