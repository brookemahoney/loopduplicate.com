<?php
/**
 * @file
 * Utilities related to modules.
 */

/**
 * Utilities related to modules.
 */
class LoopduplicateutilsModule extends Loopduplicateutils {

  public function __construct() {
    parent::__construct();
  }

  /**
   * Uninstalls modules.
   * 
   * @see module_uninstall()
   * @see module_disable()
   * @return boolean TRUE on success or FALSE on failure.
   */
  public function uninstall(array $module_list, $uninstall_dependents = TRUE) {
    module_disable($module_list, $uninstall_dependents);
    drupal_uninstall_modules($module_list, $uninstall_dependents);
    return $this;
  }

  /**
   * Gets an array of development modules suitable for module_enable().
   */
  public function getDevModules() {
    $modules = array(
      'devel',
      'devel_themer',
      'search_krumo',
      'simplehtmldom',
      'stage_file_proxy',
      'temppp',
    );
    return $modules;
  }
  
}
