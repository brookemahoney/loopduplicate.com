<?php
/**
 * @file
 * Utilities related to installation.
 */

/**
 * Utilities related to installation.
 */
class LoopduplicateutilsInstall extends Loopduplicateutils {

  // Utility class for modules.
  protected $module_utils;

  /**
   * Sets up dependencies and runs parent constructor.
   */
  public function __construct(LoopduplicateutilsModule $module_utils) {
    parent::__construct();
    $this->module_utils = $module_utils;
  }

  /**
   * Uninstalls some modules.
   */
  public function modulesUninstall() {
    $module_list = array(
      'block',
      'color',
      'comment',
      'dashboard',
      'dblog',
      'help',
      'overlay',
      'toolbar',
    );
    $this->module_utils->uninstall($module_list);
    return $this;
  }

  /**
   * Sets up custom theme.
   */
  public function themeSetup() {
    // Enables custom theme.
    theme_enable(array('loopduplicatetheme'));
    // Sets custom theme as default.
    variable_set('theme_default', 'loopduplicatetheme');
    // Sets custom theme as admin theme.
    variable_set('admin_theme', 'loopduplicatetheme');
    return $this;
  }

  /**
   * Deletes unused content types.
   */
  public function contentTypesDelete() {
    $types = array(
      'article',
      'page',
    );
    foreach ($types as $type) {
      node_type_delete($type);
      variable_del('node_preview_' . $type);
    }
    node_types_rebuild();
    menu_rebuild();
  }

}
