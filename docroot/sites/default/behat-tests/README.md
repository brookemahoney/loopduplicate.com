# Instructions for running Behat tests for loopduplicate.com.

## To run the tests

Start the local Selenium server (See System Requirements):

```
cd ~/Servers/selenium-server-standalone-2.44.0/
java -jar selenium-server-standalone-2.44.0.jar
```

Set local environment variables (or alternatively, modify behat.yml):

`source behat.local.sh`

Run tests:

`bin/behat`

## First time setup

Verify the System Requirements specified at the bottom of this file.

Set the BEHAT_PARAMS environment variables to match your local site's
configuration. See behat.local.sh for an example. This can also be achieved by
modifying behat.yml.

**All the commands that follow are written to install from the root of your
project folder.**

Install Composer globally (https://getcomposer.org/doc/00-intro.md#globally),
or download a local copy by using:

`curl -s https://getcomposer.org/installer | php`

Install the Drupal Extension and its dependencies; this takes a while before you
start to see output:

`php composer.phar install`

To ensure everything is set up appropriately, type:

`bin/behat -dl`

You’ll see a list of steps like the following, but longer, if you’ve installed
everything successfully:

```
default | Given I am an anonymous user
default | Given I am not logged in
```

## System Requirements

### PHP

Check that PHP's version is greater than 5.3.5:

`php --version`

Check that the curl, mbstring, and xml PHP libraries are installed:

`php -m`

### Java and cURL:

Check that Java and cURL are installed, versions don't necessarily matter.

`java -version`

`curl --version`

### Selenium

Download the latest version of Selenium Server,
http://www.seleniumhq.org/download/. It’s under the heading Selenium Server
(formerly the Selenium RC Server). This is a single file which can be placed in
any directory and run with the following command (replace with the name of the
version that was downloaded):

`java -jar selenium-server-standalone-2.44.0.jar`
