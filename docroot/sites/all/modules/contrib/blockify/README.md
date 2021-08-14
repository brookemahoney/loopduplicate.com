#Blockify

This module exposes a number of core Drupal elements as blocks.
Plays nice with context and panels.

##Supported elements:

* Logo
* Site name
* Site slogan
* Page title
* Breadcrumb
* Tabs
* Messages
* Local actions
* Feed icons

The module provides an administrations settings page to enable/disable blockify
blocks installation-wide.

##Remarks

If you remove elements such as $messages from your page.tpl.php you should
ensure that the corresponding blockify block is assigned to a panel or theme
region.

If you don't do this, $messages won't be rendered at all. As a consequence other
modules might stop working properly.

Example: without $messages being present, the devel module can't output its
krumo info.

##Authors, maintainers, and general kudos

* [Bantalabs](http://bantalabs.com)
* [mortendk](http://drupal.org/user/65676)
* [psynaptic](http://drupal.org/user/93429)
