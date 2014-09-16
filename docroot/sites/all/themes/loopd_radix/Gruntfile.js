module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    compass: {
      dist: {
        options: {
          config: 'config.rb'
        }
      }
    },
    concat: {
      dist: {
        src: ['assets/javascripts/source/*.js'],
        dest: 'assets/javascripts/script.js'
      }
    },
    uglify: {
      dist: {
        src: 'assets/javascripts/script.js',
        dest: 'assets/javascripts/script.js'
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
    },
    watch: {
      css: {
        files: './**/*.scss',
        tasks: ['compass:dist'],
        options: {
          livereload: true
        }
      },
      js: {
        files: ['assets/javascripts/source/*.js'],
        tasks: ['concat', 'uglify']
      }
    }
  });

  //plugins
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-concat');
  grunt.loadNpmTasks('grunt-pagespeed');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-watch');

  //tasks
  grunt.registerTask('default', ['concat', 'uglify']);
  grunt.registerTask('css', ['compass:dist']);
};