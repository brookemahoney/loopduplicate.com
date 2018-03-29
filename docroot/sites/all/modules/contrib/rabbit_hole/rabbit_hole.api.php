<?php

/**
 * @file
 * Hooks provided by Rabbit Hole.
 */

 /**
  * Integrate an entity type with Rabbit Hole.
  *
  * This will automatically add permissions, columns to the entity table, alter
  * the "View" tab (if possible) and add pseudo fields. The only thing that
  * should be left in order to add full integration is to alter the relevant
  * bundle and entity form, and to execute Rabbit Hole when an entity is viewed.
  *
  * Have a look at how the Rabbit Hole nodes module has been built in order to
  * get a deeper understanding of the integration.
  *
  * @return array
  *   You should return an array where the outer key is the name of the module,
  *   and the inner keys consist of:
  *   - entity type
  *   - base table
  *   - view path
  */
 function hook_rabbit_hole() {
   return array(
     'rh_node' => array(
       'entity type' => 'node',
       'base table' => 'node',
       'view path' => 'node/%/view',
     ),
   );
 }
