This theme is a sub theme of Radix. The folder structure used in this theme has been kept as close as possible to the folder structure of a default Radix sub theme.

###
 # Required programs
 ##

Node.js is required. It's really easy to install:
"If you're using Mac or Windows, the best way to install Node.js is to use one of the installers from nodejs.org."
For more details, see https://docs.npmjs.com/getting-started/installing-node

Use of RVM (Ruby Version Manager) is recommended so that this theme can use a specific version of Ruby, as this theme most likely requires a different version that the system version.
To install RVM, see https://rvm.io/rvm/install#installation

Ruby 2.1.2 is required. Using RVM, it can be installed with:
  rvm install 2.1.2
Then:
  rvm use 2.1.2

Bundler is required. To install, run:
  gem install bundler


###
 # Installing Grunt dependencies and Ruby gems
 ##

To install Grunt dependencies, from this theme folder, run:
  npm install

To install gems, run:
  bundle install


###
 # Regular workflow
 ##

To compile and watch for changes, run:
  grunt

To just watch for changes without compiling first, run:
  grunt watch


###
 # Note about Node.js module updates and ruby gem updates.
 ##

If any Node.js packages are added or updated, make sure to run the following:
  npm shrinkwrap --dev
See https://www.npmjs.org/doc/cli/npm-shrinkwrap.html

If any gems are added or updated, make sure to delete the Gemfile.lock file and run 'bundle install' to regenerate it.

###
 # Configuration file descriptions
 ##

.gitignore
* Ignores node_modules and SASS cache folders so they aren't committed to the git repo.

.jshintrc
* Configuration for JS Hint.
* "JSHint is a program that flags suspicious usage in programs written in JavaScript"

.ruby-gemset
* Used by RVM
* A single line with a single word which identifies the RVM gem set to use.
** For Drupal themes, the name of the theme is a good choice.

.ruby-version
* Used by RVM
* A single line which denotes the version of Ruby to use for the theme.

config.rb
* Configuration for Compass.
* This contains settings which are used for compiling SASS.

Gemfile
* Used by Bundler
* Keeps track of the exact gems that are needed to compile SASS for the theme.

Gemfile.lock
* Used by Bundler
* Keeps track of the exact versions of gems that are needed to compile SASS for the theme.
* When running 'bundle install', this file is auto-generated from the Gemfile if it doesn't already exist.

Gruntfile.js
* Configuration for Grunt (the task runner, built on node.js, that automates everything for SASS and JS development in this theme.)

npm-shrinkwrap.json
* Used by NPM to keep track of which node modules are used for the theme.

package.json
* Settings which are loaded in the Gruntfile
* Keeps track of the node.js version and grunt dependencies
