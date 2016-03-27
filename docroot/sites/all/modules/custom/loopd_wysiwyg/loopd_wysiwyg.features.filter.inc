<?php
/**
 * @file
 * loopd_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function loopd_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML No Linebreaks.
  $formats['full_html_no_linebreaks'] = array(
    'format' => 'full_html_no_linebreaks',
    'name' => 'Full HTML No Linebreaks',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'video_filter' => array(
        'weight' => -1,
        'status' => 1,
        'settings' => array(
          'video_filter_width' => 400,
          'video_filter_height' => 400,
          'video_filter_autoplay' => 0,
          'video_filter_related' => 0,
          'video_filter_html5' => 1,
          'video_filter_codecs' => array(
            'archive' => 'Archive.org',
            'bliptv' => 'Blip.tv',
            'candidcareer' => 'Candid Career',
            'capped' => 'Capped',
            'collegehumor' => 'College Humor',
            'coub' => 'Coub',
            'dailymotion' => 'DailyMotion',
            'democracynow_fullshow' => 'DemocracyNow Fullshow',
            'democracynow_story' => 'DemocracyNow Story',
            'flickr_slideshows' => 'Flickr Slideshows',
            'flickr_video' => 'Flickr Video',
            'foxnews' => 'Fox News',
            'gametrailers' => 'Game Trailers',
            'gamevideos' => 'Game Videos',
            'giphy' => 'Giphy',
            'godtube' => 'GodTube',
            'google' => 'Google Video',
            'instagram' => 'Instagram',
            'metacafe' => 'Meta Cafe',
            'mailru' => 'Mail.Ru',
            'myspace' => 'MySpace',
            'myvideo' => 'MyVideo',
            'picasa_slideshows' => 'Picasa Slideshows',
            'rutube' => 'Rutube',
            'slideshare' => 'Slideshare',
            'streamhoster' => 'Streamhoster',
            'teachertube' => 'Teachertube',
            'ted' => 'TED',
            'twitch' => 'Twitch',
            'ustream' => 'Ustream',
            'vbox' => 'Vbox7',
            'vimeo' => 'Vimeo',
            'vine' => 'Vine',
            'whatchado' => 'whatchado',
            'wistia' => 'Wistia',
            'youku' => 'YouKu',
            'youtube' => 'YouTube',
            'youtube_playlist' => 'YouTube (Playlist)',
          ),
          'video_filter_multiple_sources' => TRUE,
        ),
      ),
      'geshifilter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'image_resize_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 0,
          ),
        ),
      ),
      'media_filter' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
