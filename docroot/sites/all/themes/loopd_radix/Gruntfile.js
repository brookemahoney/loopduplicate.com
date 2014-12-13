module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

    watch: {
      livereload: {
        options: {
          livereload: true
        },
        files: [
          'assets/javascripts/script.js',
          'assets/stylesheets/**/*']
      },
      images: {
        files: ['assets/images/**']
      },
      css: {
        files: 'assets/sass/**/*.scss',
        tasks: ['compass:dev']
      },
      js: {
        files: [
          'assets/javascripts/{,**/}*.js',
          '!assets/javascripts/{,**/}*.min.js',
          '!assets/javascripts/script.js'],
        tasks: ['jshint', 'concat', 'uglify:dist']
      }
    },

    compass: {
      options: {
        config: 'config.rb',
        bundleExec: true,
        force: true
      },
      dev: {
        options: {
          environment: 'development'
        }
      },
      dist: {
        options: {
          environment: 'production'
        }
      }
    },

    jshint: {
      options: {
        jshintrc: '.jshintrc'
      },
      all: ['assets/javascripts/source/custom/**/*.js']
    },

    concat: {
      dist: {
        src: [
          // Bootrap JS; Must be loaded in a particular order
          // @see https://github.com/twbs/bootstrap-sass/blob/master/assets/javascripts/bootstrap-sprockets.js
          'assets/javascripts/source/contrib/bootstrap/affix.js',
          //'assets/javascripts/source/contrib/bootstrap/alert.js',
          'assets/javascripts/source/contrib/bootstrap/button.js',
          //'assets/javascripts/source/contrib/bootstrap/carousel.js',
          'assets/javascripts/source/contrib/bootstrap/collapse.js',
          'assets/javascripts/source/contrib/bootstrap/dropdown.js',
          'assets/javascripts/source/contrib/bootstrap/tab.js',
          'assets/javascripts/source/contrib/bootstrap/transition.js',
          //'assets/javascripts/source/contrib/bootstrap/scrollspy.js',
          //'assets/javascripts/source/contrib/bootstrap/modal.js',
          'assets/javascripts/source/contrib/bootstrap/tooltip.js',
          'assets/javascripts/source/contrib/bootstrap/popover.js',
          // JQuery Cookie
          'assets/javascripts/source/contrib/_jquery-cookie.js',
          // Radix
          'assets/javascripts/source/contrib/radix-script.js',
          // Theme specific
          'assets/javascripts/source/custom/**/*.js'
        ],
        dest: 'assets/javascripts/script.js'
      }
    },

    uglify: {
      dev: {
        options: {
          mangle: false,
          compress: false,
          beautify: true
        },
        files: [{
          expand: true,
          flatten: true,
          cwd: 'assets/javascripts',
          src: ['script.js'],
          dest: 'assets/javascripts'
        }]
      },
      dist: {
        options: {
          mangle: true,
          compress: true
        },
        files: [{
          expand: true,
          flatten: true,
          cwd: 'assets/javascripts',
          src: ['script.js'],
          dest: 'assets/javascripts'
        }]
      }
    },

    pagespeed: {
      options: {
        nokey: true,
        url: "http://loopduplicate.com"
      },
      prod: {
        options: {
          url: "http://loopduplicate.com/content/one-crazy-way-to-theme-a-fieldable-panels-pane-to-get-exactly-the-markup-you-want",
          locale: "en_GB",
          strategy: "desktop",
          threshold: 80
        }
      },
      paths: {
        options: {
          paths: ["/"],
          locale: "en_GB",
          strategy: "desktop",
          threshold: 80
        }
      }
    }
  });

  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-pagespeed');

  grunt.registerTask('default', [
    'compass:dev',
    'watch'
  ]);
};