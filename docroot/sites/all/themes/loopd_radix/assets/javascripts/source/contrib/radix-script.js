/**
 * @file
 * JS for Radix.
 */
(function ($, Drupal, window) {
  
  // Show dropdown on hover.
  Drupal.behaviors.radix_dropdown = {
    attach: function() {
      $('.dropdown').once('radix-dropdown', function(){
        // Show dropdown on hover.
        $(this).mouseenter(function(){
          $(this).addClass('open');
        });
        $(this).mouseleave(function(){
          $(this).removeClass('open');
        });
      });
    }
  }

  // Bootstrap tooltip.
  Drupal.behaviors.radix_tooltip = {
    attach: function() {
      $("[data-toggle='tooltip']").tooltip();
    }
  }

  // Bootstrap popover.
  Drupal.behaviors.radix_popover = {
    attach: function() {
      $("[data-toggle='popover']").popover();
    }
  }

  // Allow main menu dropdown-toggle to be clickable.
  $('#main-menu .dropdown > a.dropdown-toggle').once('radix-dropdown', function(){
    $(this).click(function(e) {
      e.preventDefault();
      window.location.href = $(this).attr('href');
    });
  });

  // Show first tab by default.
  // Alters original Radix js. Original line is commented out below for
  // reference. This line was causing JS errors on /admin* pages and possibly
  // others where the second or greater of Drupal's primary tabs was active.
  // For example, visiting /admin/index would cause an error:
  // "
   $('.nav-tabs > li').first().find('a').tab('show');
  //$('.nav-tabs > li').not('.nav-tabs.primary > li').first().find('a').tab('show');
  if (hash = window.location.hash) {
    $('.nav-tabs > li > a[href$=' + hash + ']').tab('show');
  }
})(jQuery, Drupal, this);
