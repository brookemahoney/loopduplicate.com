/**
 * @file
 * Custom scripts for theme.
 */
(function ($, Drupal, window, document, undefined) {
  Drupal.behaviors.loopd = {
    attach: function () {

      var $filters = $('#search-filters');
      var $results = $('#search-results');
      if (typeof $.cookie('search-filters--visible') === 'undefined') {
        $.cookie('search-filters--visible', '1');
      }
      var visible = $.cookie('search-filters--visible');

      // On page load.
      $filters.before('<h5 id="search-toggle-filters" class="search-toggle-filters">(+/-) Show/Hide Filters</h5>');
      var $toggle = $('#search-toggle-filters');
      if (visible === '0') {
        $results.toggleClass('col-sm-8 col-md-9');
        $filters.toggleClass('hidden');
      }

      // On click of Show/Hide Toggle.
      $toggle.on('click', function () {
        $results.toggleClass('col-sm-8 col-md-9');
        $filters.toggleClass('hidden');
        if (visible === '1') {
          $.cookie('search-filters--visible', '0');
        } else {
          $.cookie('search-filters--visible', '1');
        }
      });
    }
  };
})(jQuery, Drupal, this, this.document);
