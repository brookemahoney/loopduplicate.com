This
It uses bundler, compass, and grunt.

This theme uses rvm, bundler, compass, grunt, and npm shrinkwrap. It is a sub theme of Radix.

Ruby 2.1.2 is required. Using rvm, it can be installed with:
  rvm install 2.1.2
Then:
  rvm use 2.1.2

To install grunt dependencies, from this theme folder, run:
  npm install

To install gems, run:
  bundle install

To compile and watch for changes, run:
  grunt

To just watch for changes without compiling first, run:
  grunt watch

If any node packages are added or updated, make sure to run the following:
 npm shrinkwrap --dev
See https://www.npmjs.org/doc/cli/npm-shrinkwrap.html
