# Instructions for running Behat tests for loopduplicate.com.

## Helpful bash aliases

Paste into ~/.bash_profile:
```
# Changes to the test directory and runs commands in behat.local.sh.
alias loopduplicatebehatprepare='cd /Applications/MAMP/htdocs/loopduplicate/docroot/sites/default/tests/behat && source behat.local.sh'
# Starts PhantomJS.
alias phantomjsstart='phantomjs --webdriver=8643'
```

## To run the tests

Start PhantomJS:

```shell
phantomjsstart
```

Prepare Behat:

```shell
loopduplicatebehatprepare
```

Run tests:

```shell
bin/behat
```

## First time setup

### PHP

Check that PHP's version is greater than 5.3.5:

```shell
php --version
```

Check that the curl, mbstring, and xml PHP libraries are installed:

```shell
php -m
```

### PhantomJS

Linux:

```shell
sudo apt-get update
sudo apt-get install build-essential chrpath libssl-dev libxft-dev
sudo apt-get install libfreetype6 libfreetype6-dev
sudo apt-get install libfontconfig1 libfontconfig1-dev
sudo apt-get install phantomjs
```

Mac with brew:

```shell
brew update && brew install phantomjs
```

### The rest of the setup steps must be run from the test folder.

```bash
cd /Applications/MAMP/htdocs/loopduplicate/docroot/sites/default/tests/behat
```

### Composer

Install Composer globally (https://getcomposer.org/doc/00-intro.md#globally),
or download a local copy by using:

```shell
curl -s https://getcomposer.org/installer | php
```

### Drupal Extension

This takes a while before you start to see output:

```shell
php composer.phar install
```

### Verify

```shell
bin/behat -dl
```

You should see a list like this but longer:

```behat
default | Given I am an anonymous user
default | Given I am not logged in
```
