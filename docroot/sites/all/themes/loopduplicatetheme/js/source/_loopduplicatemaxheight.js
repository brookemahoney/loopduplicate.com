/**
 * Gets the max height of all elements.
 * 
 * Usage: var maxheight = $('.example').loopduplicatemaxheight();
 */
(function($, Drupal, window, document, undefined) {
  Drupal.behaviors.loopduplicatemaxheight = {
    attach: function(context, settings) {

      $.fn.loopduplicatemaxheight = function() {

        return Math.max.apply(null, $(this).map(function()
        {
          return $(this).height();
        }).get());

      };

    }
  };

})(jQuery, Drupal, this, this.document);
