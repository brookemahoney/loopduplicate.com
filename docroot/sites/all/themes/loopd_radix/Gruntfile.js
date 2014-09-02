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
      },
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
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.loadNpmTasks('grunt-contrib-watch');

  //tasks
  grunt.registerTask('default', ['concat', 'uglify']);
  grunt.registerTask('css', ['compass:dist']);
};