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
   * Proceeds even if any of the modules don't exist.
   * @see module_uninstall()
   * @see module_disable()
   */
  public function uninstall(array $module_list, $uninstall_dependents = TRUE) {
    foreach ($module_list as $module_single) {
      $module_single = array($module_single);
      module_disable($module_single, $uninstall_dependents);
      drupal_uninstall_modules($module_single, $uninstall_dependents);
    }
    return $this;
  }

  /**
   * Enables modules.
   * 
   * Proceeds even if any of the modules don't exist.
   * @see module_uninstall()
   * @see module_disable()
   */
  public function enable(array $module_list, $enable_dependencies = TRUE) {
    foreach ($module_list as $module_single) {
      $module_single = array($module_single);
      module_enable($module_single, $enable_dependencies);
    }
    return $this;
  }

  /**
   * Gets an array of development modules suitable for module_enable().
   */
  public function getDevModules() {
    $modules = array(
      'devel',
      'search_krumo',
      'simplehtmldom',
      'stage_file_proxy',
      'syslog',
      'temppp',
    );
    return $modules;
  }

}
