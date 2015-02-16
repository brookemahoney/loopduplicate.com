# Instructions for running Behat tests for loopduplicate.com.

Verify System Requirements, which are specified at the bottom of this file.

Set the BEHAT_PARAMS environment variables to match your local site's
configuration. See behat.local.sh for an example.

Start the local Selenium server (See System Requirements)

**All the commands that follow are written to install from the root of your project folder.**

If you do not have composer installed globally, download a local copy by using:

`curl -s https://getcomposer.org/installer | php`

Install the Drupal Extension and its dependencies; this takes a while before you start to see output:

`php composer.phar install`

To ensure everything is set up appropriately, type:

`bin/behat -dl`

You’ll see a list of steps like the following, but longer, if you’ve installed everything successfully:
```
default | Given I am an anonymous user
default | Given I am not logged in
```

## System Requirements

### Check PHP version

`php --version`

It must be higher than 5.3.5! Note: This means you cannot use the same version of PHP for testing that you
might use to run a Drupal 5 site.

PHP will also need to have the following libraries installed:

* curl
* mbstring
* xml

Check your current modules by running:

`php -m`

## Check for Java:

`java -version`

It doesn’t necessarily matter what version, but it will be required for Selenium.

## Check for cURL:

`curl --version`

## Selenium

Download the latest version of Selenium Server It’s under the heading Selenium Server (formerly the
Selenium RC Server). This is a single file which can be placed any where you like on your system and
run with the following command:
java -jar selenium-server-standalone-2.44.0.jar
// replace with the name of the version you downloaded

