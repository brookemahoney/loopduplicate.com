# Instructions for running Behat tests for loopduplicate.com.

## Helpful bash aliases

Paste into ~/.bash_profile:
```
# Changes to the test directory and runs commands in behat.local.sh.
alias loopduplicatebehatprepare='cd /Applications/MAMP/htdocs/loopduplicate/docroot/sites/default/behat-tests && source behat.local.sh'
# Starts PhantomJS.
alias phantomstart='phantomjs --webdriver=8643'
```

## To run the tests

Start PhantomJS:

```bash
phantomstart
```

Prepare Behat:

```bash
loopduplicatebehatprepare
```

Run tests:

```bash
bin/behat
```

## First time setup

Verify the System Requirements specified at the bottom of this file.


## System Requirements

### Check that PHP's version is greater than 5.3.5:

```bash
php --version
```

### Check that the curl, mbstring, and xml PHP libraries are installed:

```bash
php -m
```

### Install PhantomJS

#### Linux

```bash
sudo apt-get update
sudo apt-get install build-essential chrpath libssl-dev libxft-dev
sudo apt-get install libfreetype6 libfreetype6-dev
sudo apt-get install libfontconfig1 libfontconfig1-dev
sudo apt-get install phantomjs
```

#### Mac with brew

```bash
brew update && brew install phantomjs
```

**All the commands that follow are written to install from the root of your
project folder.**

Install Composer globally (https://getcomposer.org/doc/00-intro.md#globally),
or download a local copy by using:

```bash
curl -s https://getcomposer.org/installer | php
```

Install the Drupal Extension and its dependencies; this takes a while before you
start to see output:

```bash
php composer.phar install
```

To ensure everything is set up appropriately, type:

```bash
bin/behat -dl
```

You’ll see a list of steps like the following, but longer, if you’ve installed
everything successfully:

```bash
default | Given I am an anonymous user
default | Given I am not logged in
```
