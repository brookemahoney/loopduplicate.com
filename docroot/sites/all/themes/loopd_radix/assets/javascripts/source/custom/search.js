/**
 * @file
 * Custom scripts for theme.
 */
(function ($, Drupal) {
  Drupal.behaviors.loopdsearch = {
    attach: function () {
      var $filters = $('#search-filters');
      var $results = $('#search-results');
      if (typeof $.cookie('search-filters--visible') === 'undefined') {
        $.cookie('search-filters--visible', '1', {expires: 365, path: '/'});
      }
      var filters_visible = $.cookie('search-filters--visible');

      // On page load.
      $filters.before('<h5 id="search-toggle-filters" class="search-toggle-filters">(+/-) ' + Drupal.t('Show/Hide Filters') + '</h5>');
      var $toggle = $('#search-toggle-filters');
      if (filters_visible === '0') {
        $results.toggleClass('col-sm-8 col-md-9');
        $filters.toggleClass('hidden');
      }

      // On click of Show/Hide Toggle.
      $toggle.on('click', function () {
        $results.toggleClass('col-sm-8 col-md-9');
        $filters.toggleClass('hidden');
        if (filters_visible === '1') {
          $.cookie('search-filters--visible', '0');
          filters_visible = '0';
        } else {
          $.cookie('search-filters--visible', '1');
          filters_visible = '1';
        }
      });
    }
  };
})(jQuery, Drupal);
