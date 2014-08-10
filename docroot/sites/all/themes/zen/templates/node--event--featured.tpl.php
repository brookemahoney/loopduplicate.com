<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($unpublished): ?>
    <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
  <?php endif; ?>
  <div class="featured-event-header">
    <?php if ($image): ?>
      <div class="featured-event-image"><?php print $image; ?></div>
    <?php endif; ?>
    <?php if ($date): ?>
      <div class="featured-event-date"><?php print $date; ?></div>
    <?php endif; ?>
  </div>
  <h4 class="featured-event-title"><?php print $title; ?></h4>
  <?php if ($teaser): ?>
    <div class="featured-event-teaser"><?php print $teaser; ?></div>
  <?php endif; ?>
  <?php if ($date_medium): ?>
    <div class="featured-event-date-medium"><?php print $date_medium; ?></div>
  <?php endif; ?>
  <?php if ($location): ?>
    <div class="featured-event-location"><?php print $location; ?></div>
  <?php endif; ?>
</article>
