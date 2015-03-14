<?php
/**
 * @file
 * Utilities related to modules.
 */

/**
 * Utilities related to modules.
 */
class LoopDUtils {

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
  public static function uninstall(array $module_list, $uninstall_dependents = TRUE) {
    foreach ($module_list as $module_single) {
      $module_single = array($module_single);
      module_disable($module_single, $uninstall_dependents);
      if (!drupal_uninstall_modules($module_single, $uninstall_dependents)) {
        $message = t('Module @module could not be uninstalled.', array(
          '@module' => current($module_single)));
        drupal_set_message($message, 'warning');
      }
    }
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
  public static function enable(array $module_list, $enable_dependencies = TRUE) {
    foreach ($module_list as $module_single) {
      $module_single = array($module_single);
      if (!module_enable($module_single, $enable_dependencies)) {
        $message = t('Module @module could not be enabled.', array(
          '@module' => $module_single));
        drupal_set_message($message, 'warning');
      }
    }
  }

  /**
   * Gets an indexed array of development modules suitable for module_enable().
   */
  public static function getDevModules() {
    return array(
      // Modules which depend on other modules should be listed first.
      'search_krumo',
      'devel',
      'simplehtmldom',
      
      // @todo Enable Stage File Proxy once there is a production site URI.
      // 'stage_file_proxy',
      
      // This is a module that I have ignored in .gitignore. It is good for
      // local development. I also have a local git commit pre-commit hook which
      // checks the diff for the text "temppp" and stops the commit if it finds
      // it.
      'temppp',
    );
  }

  /**
   * Checks if a string starts with a string.
   *
   * @param string $haystack <p>
   * The string to search in
   * </p>
   * @param string $needle <p>
   * The string to search for
   * </p>
   * @return bool If haystack starts with needle, returns TRUE.
   */
  public static function startsWith($haystack, $needle) {
    // Searches backwards starting from haystack length characters from the end
    return $needle === "" || strrpos($haystack, $needle, -strlen($haystack)) !== FALSE;
  }

  /**
   * Checks if a string ends with a string.
   *
   * @param string $haystack <p>
   * The string to search in
   * </p>
   * @param string $needle <p>
   * The string to search for
   * </p>
   * @return bool If haystack ends with needle, returns TRUE.
   */
  public static function endsWith($haystack, $needle) {
    // Searches forward starting from end minus needle length characters
    return $needle === "" || (($temp = strlen($haystack) - strlen($needle)) >= 0 && strpos($haystack, $needle, $temp) !== FALSE);
  }
}
