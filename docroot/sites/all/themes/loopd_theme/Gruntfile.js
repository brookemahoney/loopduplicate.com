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
        src: ['js/source/*.js'],
        dest: 'js/script.js'
      }
    },
    uglify: {
      dist: {
        src: 'js/script.js',
        dest: 'js/script.js'
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
        files: ['js/source/*.js'],
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