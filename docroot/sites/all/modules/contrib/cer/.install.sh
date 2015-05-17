#!/bin/bash

echo "Installing Drupal..."
drush si -y -q --db-url=mysql://vlad:wibble@localhost/vladdb --account-pass=admin
drush -y -q en admin_menu_toolbar cer cer_entity_settings cer_profile2 devel entityreference features field_collection node_reference user_reference profile2 simpletest views_ui

# I. Hate. Overlay!
drush -y -q dis overlay
drush -y -q pm-uninstall overlay
