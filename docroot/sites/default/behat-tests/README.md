# Instructions for running Behat tests for loopduplicate.com.

## To run the tests

Start Phantom.js (See System Requirements):

`phantomjs --webdriver=8643`

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

### PhantomJS

#### Linux
```
sudo apt-get update
sudo apt-get install build-essential chrpath libssl-dev libxft-dev
sudo apt-get install libfreetype6 libfreetype6-dev
sudo apt-get install libfontconfig1 libfontconfig1-dev
sudo apt-get install phantomjs
```

#### Mac with brew
`brew update && brew install phantomjs`
