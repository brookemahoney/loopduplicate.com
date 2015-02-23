This is a Drupal 7 distribution which runs on
<a href="http://loopduplicate.com">loopduplicate.com</a>, which contains things
and stuff, mostly related to Drupal (the most badassest way to create a
thingamabob on the internets.)

![TravisCI Status](https://api.travis-ci.org/jeffymahoney/loopduplicate.com.svg?branch=7.x-1.x)
It is integrated with TravisCI, https://travis-ci.org/jeffymahoney/loopduplicate.com.
The testing suite extends Behat and the Drupal Extension. It makes use of
PhantomJS for all tests which require javascript. 

Don't use this distribution as a base distribution, please. Just hack it.
Drupal's ability to override distributions sucks... If you don't think so, fine, jerk.
Use it as an example of how to build your own distribution. It has a great set of
modules that are useful for many sites. Most settings can be overridden without
causing any features to be overridden.

For a quick way to install from the command line, see the included document
at /scripts/development-scripts.txt

Currently, if this profile is installed using the UI instead of using drush, the
diff module and the save draft module output some error notices if error
reporting is turned on; they can all be ignored.
