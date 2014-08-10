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
   * Proceeds even if any of the modules don't exist. This is behavior is
   * different from that of the Drupal core functions which stop when
   * encountering a module that can't be uninstalled.
   * 
   * @see module_disable()
   * @see drupal_uninstall_modules()
   */
  public function uninstall(array $module_list, $uninstall_dependents = TRUE) {
    foreach ($module_list as $module_single) {
      $module_single = array($module_single);
      module_disable($module_single, $uninstall_dependents);
      if (!drupal_uninstall_modules($module_single, $uninstall_dependents)) {
        $message = t('Module @module could not be uninstalled.', array(
          '@module' => $module_single));
        drupal_set_message($message, 'warning');
      }
    }
    return $this;
  }

  /**
   * Enables modules.
   * 
   * Proceeds even if any of the modules don't exist. This is behavior is
   * different from that of the Drupal core function which stops when
   * encountering a module that can't be enabled.
   * 
   * @see module_enable()
   */
  public function enable(array $module_list, $enable_dependencies = TRUE) {
    foreach ($module_list as $module_single) {
      $module_single = array($module_single);
      if (!module_enable($module_single, $enable_dependencies)) {
        $message = t('Module @module could not be enabled.', array(
          '@module' => $module_single));
        drupal_set_message($message, 'warning');
      }
    }
    return $this;
  }

  /**
   * Gets an indexed array of development modules suitable for module_enable().
   */
  public function getDevModules() {
    return array(
      'devel',
      'search_krumo',
      'simplehtmldom',
      'stage_file_proxy',
      'temppp',
    );
  }

}
