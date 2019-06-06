<?php

/**
 * @file
 * API documentation for Nodeaccess module.
 */


/**
 * Allow for changes to be made on the entire grants array for a node before
 * saving.
 *
 * @param array &$grants
 *   array(
 *    array(
 *      'gid' => (int) gid for realm,
 *      'realm' => (string) what realm the access grant belongs to (ex: nodeaccess_rid).
 *      'grant_view' => (int) view access being granted,
 *      'grant_update' => (int) update access being granted,
 *      'grant_delete' => (int) delete access being granted,
 *    ),
 *    ...
 *  )
 * @param $node
 *   Node object the grant is being applied to.
 */
function hook_nodeaccess_grants_alter(&$grants, $node) {
  foreach ($grants as $gid => $grant) {
    // Make some changes to the grants.
  }
}


/**
 * Allow for changes to be made on the single grant item prior to saving.
 *
 * @param array &$grant
 *  array(
 *    'gid' => (int) gid for realm,
 *    'realm' => (string) what realm the access grant belongs to (ex: nodeaccess_rid).
 *    'grant_view' => (int) view access being granted,
 *    'grant_update' => (int) update access being granted,
 *    'grant_delete' => (int) delete access being granted,
 *  )
 * @param $node
 *   Node object the grant is being applied to.
 */
function hook_nodeaccess_grant_alter(&$grant, $node) {
  // Make some change to the individual grant.
}
