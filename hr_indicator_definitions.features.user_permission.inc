<?php
/**
 * @file
 * hr_indicator_definitions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hr_indicator_definitions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create indicator_definition content.
  $permissions['create indicator_definition content'] = array(
    'name' => 'create indicator_definition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any indicator_definition content.
  $permissions['delete any indicator_definition content'] = array(
    'name' => 'delete any indicator_definition content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own indicator_definition content.
  $permissions['delete own indicator_definition content'] = array(
    'name' => 'delete own indicator_definition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any indicator_definition content.
  $permissions['edit any indicator_definition content'] = array(
    'name' => 'edit any indicator_definition content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own indicator_definition content.
  $permissions['edit own indicator_definition content'] = array(
    'name' => 'edit own indicator_definition content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: view any unpublished indicator_definition content.
  $permissions['view any unpublished indicator_definition content'] = array(
    'name' => 'view any unpublished indicator_definition content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
