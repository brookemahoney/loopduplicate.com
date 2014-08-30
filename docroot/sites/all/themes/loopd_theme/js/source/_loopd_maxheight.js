/**
 * Gets the max height of all elements.
 * 
 * Usage: var maxheight = $('.example').loopdmaxheight();
 */
(function($, Drupal, window, document, undefined) {
  Drupal.behaviors.loopdmaxheight = {
    attach: function(context, settings) {

      $.fn.loopdmaxheight = function() {

        return Math.max.apply(null, $(this).map(function()
        {
          return $(this).height();
        }).get());

      };

    }
  };

})(jQuery, Drupal, this, this.document);
