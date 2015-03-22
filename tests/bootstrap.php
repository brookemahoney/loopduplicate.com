<?php
// Enable Composer autoloader
require dirname(__DIR__) . '/vendor/autoload.php';

// Bootstrap Drupal.
define('DRUPAL_ROOT', dirname(__DIR__) . '/docroot');
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
$_SERVER['REMOTE_ADDR'] = '127.0.0.1';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
