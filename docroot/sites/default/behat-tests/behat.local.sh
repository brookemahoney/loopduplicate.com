#!/bin/sh
export BEHAT_PARAMS='{"extensions":{"Behat\\MinkExtension":{"base_url":"http://devlocal.loopduplicate.com"},"Drupal\\DrupalExtension":{"drupal":{"drupal_root":"/Applications/MAMP/htdocs/loopduplicate/docroot"},"drush":{"alias":"devlocal.loopduplicate.com"},"subcontexts":{"paths":["/Applications/MAMP/htdocs/loopduplicate/docroot/sites/all"]}}}}'
echo "Behat environment variables set. Remember to start Phantom."
