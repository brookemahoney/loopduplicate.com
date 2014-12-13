module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),

    watch: {
      options: {
        livereload: true
      },
      images: {
        files: ['assets/images/**']
      },
      css: {
        files: './**/*.scss',
        tasks: ['compass:dev']
      },
      js: {
        files: ['js/{,**/}*.js', '!js/{,**/}*.min.js'],
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
          //'assets/javascripts/source/contrib/bootstrap/tooltip.js',
          //'assets/javascripts/source/contrib/bootstrap/popover.js',
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
          dest: 'assets/javascripts',
          src: ['assets/javascripts/script.js'],
          rename: function(dest, src) {
            var folder = src.substring(0, src.lastIndexOf('/'));
            var filename = src.substring(src.lastIndexOf('/'), src.length);
            filename = filename.substring(0, filename.lastIndexOf('.'));
            return dest + '/' + folder + filename + '.min.js';
          }
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
          dest: 'assets/javascripts',
          src: ['assets/javascripts/script.js'],
          rename: function(dest, src) {
            var folder = src.substring(0, src.lastIndexOf('/'));
            var filename = src.substring(src.lastIndexOf('/'), src.length);
            filename = filename.substring(0, filename.lastIndexOf('.'));
            return dest + '/' + folder + filename + '.min.js';
          }
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

  //plugins
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-pagespeed');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-watch');

  //tasks
  grunt.registerTask('default', [
    'compass:dev',
    'watch'
  ]);
};