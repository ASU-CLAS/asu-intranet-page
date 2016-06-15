<?php
/**
 * @file
 * asu_intranet_page.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function asu_intranet_page_user_default_roles() {
  $roles = array();

  // Exported role: asu intranet local viewer.
  $roles['asu intranet local viewer'] = array(
    'name' => 'asu intranet local viewer',
    'weight' => 4,
  );

  // Exported role: asu intranet viewer.
  $roles['asu intranet viewer'] = array(
    'name' => 'asu intranet viewer',
    'weight' => 4,
  );

  return $roles;
}
