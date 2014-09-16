<?php
/**
 * @file
 * loopd_advagg.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loopd_advagg_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_active';
  $strongarm->value = 1;
  $export['advagg_bundler_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_info';
  $strongarm->value = 'Array
(
    [sites/all/modules/contrib/extlink/extlink.js] => Array
        (
            [group_hash] => 00000006 eLV2jl3bWllqseKkhGnFz1l-4aZy65b7zOierZDSttM
            [mtime] => 1410129406
            [filesize] => 5759
            [linecount] => 161
            [changes] => 1
        )

    [misc/drupal.js] => Array
        (
            [group_hash] => 00000006 eLV2jl3bWllqseKkhGnFz1l-4aZy65b7zOierZDSttM
            [mtime] => 1409636163
            [filesize] => 14544
            [linecount] => 433
            [changes] => 1
        )

    [sites/all/modules/development/contrib/search_krumo/search_krumo.trail.js] => Array
        (
            [group_hash] => 00000006 eLV2jl3bWllqseKkhGnFz1l-4aZy65b7zOierZDSttM
            [mtime] => 1409636163
            [filesize] => 3230
            [linecount] => 86
            [changes] => 1
        )

    [misc/jquery.once.js] => Array
        (
            [group_hash] => 00000006 eLV2jl3bWllqseKkhGnFz1l-4aZy65b7zOierZDSttM
            [mtime] => 1409636163
            [filesize] => 2974
            [linecount] => 79
            [changes] => 1
        )

    [sites/all/modules/development/contrib/search_krumo/search_krumo.search.js] => Array
        (
            [group_hash] => 00000006 eLV2jl3bWllqseKkhGnFz1l-4aZy65b7zOierZDSttM
            [mtime] => 1409636163
            [filesize] => 2797
            [linecount] => 78
            [changes] => 1
        )

    [sites/all/modules/development/contrib/devel/devel_krumo_path.js] => Array
        (
            [group_hash] => 00000006 eLV2jl3bWllqseKkhGnFz1l-4aZy65b7zOierZDSttM
            [mtime] => 1409636163
            [filesize] => 2192
            [linecount] => 66
            [changes] => 1
        )

    [sites/all/modules/contrib/jquery_update/replace/jquery/1.8/jquery.min.js] => Array
        (
            [group_hash] => 00000005 dtlNzHSHLau2Ki1zZZlhByZFec7keAa5LdWvVuT2rI8
            [mtime] => 1410130774
            [filesize] => 93436
            [linecount] => 1
            [changes] => 1
        )

    [sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.js] => Array
        (
            [group_hash] => 00000005 dtlNzHSHLau2Ki1zZZlhByZFec7keAa5LdWvVuT2rI8
            [mtime] => 1410130774
            [filesize] => 1579
            [linecount] => 56
            [changes] => 1
        )

    [sites/all/modules/contrib/admin_menu/admin_menu.js] => Array
        (
            [group_hash] => 00000005 dtlNzHSHLau2Ki1zZZlhByZFec7keAa5LdWvVuT2rI8
            [mtime] => 1410129406
            [filesize] => 12267
            [linecount] => 385
            [changes] => 1
        )

    [misc/form.js] => Array
        (
            [group_hash] => 00000004 NGd55lTyTGpiHpdIysK-uBqkiq8A4HobvLPRaYIBiHo
            [mtime] => 1409636163
            [filesize] => 2460
            [linecount] => 78
            [changes] => 1
        )

    [misc/collapse.js] => Array
        (
            [group_hash] => 00000003 L-PiIBaryZn8MVRNKmaVZ7qPgTfZWSRf6ebzih6es24
            [mtime] => 1409636163
            [filesize] => 3323
            [linecount] => 103
            [changes] => 1
        )

    [sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410130774
            [filesize] => 3722
            [linecount] => 48
            [changes] => 1
        )

    [sites/all/modules/contrib/radix_layouts/radix_layouts.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 12386
            [linecount] => 288
            [changes] => 1
        )

    [sites/all/modules/contrib/date/date_api/date.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 3528
            [linecount] => 48
            [changes] => 1
        )

    [sites/all/modules/contrib/geshifilter/geshifilter.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 1282
            [linecount] => 10
            [changes] => 1
        )

    [sites/all/modules/contrib/panels/css/panels.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 843
            [linecount] => 12
            [changes] => 1
        )

    [sites/all/modules/contrib/views/css/views.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 707
            [linecount] => 11
            [changes] => 1
        )

    [sites/all/modules/contrib/ctools/css/ctools.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 509
            [linecount] => 7
            [changes] => 1
        )

    [sites/all/modules/contrib/fences/field.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 457
            [linecount] => 6
            [changes] => 1
        )

    [sites/all/modules/contrib/extlink/extlink.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1410129406
            [filesize] => 424
            [linecount] => 3
            [changes] => 1
        )

    [modules/system/system.base.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409636163
            [filesize] => 5350
            [linecount] => 45
            [changes] => 1
        )

    [modules/system/system.theme.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409636163
            [filesize] => 3711
            [linecount] => 54
            [changes] => 1
        )

    [modules/user/user.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409636163
            [filesize] => 1827
            [linecount] => 25
            [changes] => 1
        )

    [modules/system/system.messages.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409636163
            [filesize] => 961
            [linecount] => 19
            [changes] => 1
        )

    [sites/all/modules/development/contrib/search_krumo/search_krumo.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409636163
            [filesize] => 627
            [linecount] => 8
            [changes] => 1
        )

    [modules/node/node.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409636163
            [filesize] => 144
            [linecount] => 3
            [changes] => 1
        )

    [sites/all/modules/contrib/video_filter/video_filter.css] => Array
        (
            [group_hash] => 00000002 cQo0IwicsCMn91kpfyksXLdlrudiwsadrfGh3Fr2KVM
            [mtime] => 1409179118
            [filesize] => 156
            [linecount] => 3
            [changes] => 1
        )

    [sites/all/themes/loopd_radix/assets/javascripts/script.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1410776167
            [filesize] => 34329
            [linecount] => 1
            [changes] => 1
        )

    [sites/all/modules/contrib/jquery_update/replace/jquery/1.10/jquery.min.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1410130775
            [filesize] => 93107
            [linecount] => 6
            [changes] => 1
        )

    [sites/all/modules/contrib/facetapi/facetapi.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1410129406
            [filesize] => 4607
            [linecount] => 143
            [changes] => 1
        )

    [sites/all/modules/contrib/search_api_autocomplete/search_api_autocomplete.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1410129406
            [filesize] => 3813
            [linecount] => 135
            [changes] => 1
        )

    [misc/autocomplete.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1409636163
            [filesize] => 8169
            [linecount] => 324
            [changes] => 1
        )

    [modules/contextual/contextual.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1409636163
            [filesize] => 1804
            [linecount] => 52
            [changes] => 1
        )

    [sites/all/themes/radix/assets/javascripts/modernizr.js] => Array
        (
            [group_hash] => 00000001 wQ3D-lsrmOUVm_zdWwFbbHL3vCNTdh1uoY_YpweC_3w
            [mtime] => 1402765262
            [filesize] => 15243
            [linecount] => 3
            [changes] => 1
        )

    [sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.css] => Array
        (
            [group_hash] => 00000001 ZjkwH3SJsmp5awlOKKaiqk9DDdyfv3jDWBt8M-XUwg4
            [mtime] => 1410130775
            [filesize] => 3266
            [linecount] => 30
            [changes] => 1
        )

    [sites/all/modules/contrib/admin_menu/admin_menu.css] => Array
        (
            [group_hash] => 00000001 ZjkwH3SJsmp5awlOKKaiqk9DDdyfv3jDWBt8M-XUwg4
            [mtime] => 1410129406
            [filesize] => 5261
            [linecount] => 58
            [changes] => 1
        )

    [modules/system/system.admin.css] => Array
        (
            [group_hash] => 00000001 ZjkwH3SJsmp5awlOKKaiqk9DDdyfv3jDWBt8M-XUwg4
            [mtime] => 1409636163
            [filesize] => 5117
            [linecount] => 67
            [changes] => 1
        )

    [modules/system/system.menus.css] => Array
        (
            [group_hash] => 00000001 ZjkwH3SJsmp5awlOKKaiqk9DDdyfv3jDWBt8M-XUwg4
            [mtime] => 1409636163
            [filesize] => 2035
            [linecount] => 23
            [changes] => 1
        )

    [sites/all/modules/contrib/advagg/advagg.admin.js] => Array
        (
            [group_hash] => 00000001 X6RwzhcLRnQPkOXbsdAhX2xdx4u2q9CtcRIF1jMGZuY
            [mtime] => 1409942640
            [filesize] => 4138
            [linecount] => 125
            [changes] => 1
        )

    [sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js] => Array
        (
            [group_hash] => 00000001 RggANxyeXhSXZZWxCo5tlELA1-LGI5chdbWF49XdCeo
            [mtime] => 1410130774
            [filesize] => 3655
            [linecount] => 89
            [changes] => 1
        )

    [sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.min.js] => Array
        (
            [group_hash] => 00000001 RggANxyeXhSXZZWxCo5tlELA1-LGI5chdbWF49XdCeo
            [mtime] => 1410129406
            [filesize] => 10594
            [linecount] => 10
            [changes] => 1
        )

    [sites/all/modules/contrib/jquery_update/js/jquery_update.js] => Array
        (
            [group_hash] => 00000001 RggANxyeXhSXZZWxCo5tlELA1-LGI5chdbWF49XdCeo
            [mtime] => 1410129406
            [filesize] => 302
            [linecount] => 7
            [changes] => 1
        )

    [misc/ajax.js] => Array
        (
            [group_hash] => 00000001 RggANxyeXhSXZZWxCo5tlELA1-LGI5chdbWF49XdCeo
            [mtime] => 1409636163
            [filesize] => 22763
            [linecount] => 629
            [changes] => 1
        )

    [misc/progress.js] => Array
        (
            [group_hash] => 00000001 RggANxyeXhSXZZWxCo5tlELA1-LGI5chdbWF49XdCeo
            [mtime] => 1409636163
            [filesize] => 3112
            [linecount] => 106
            [changes] => 1
        )

    [sites/all/themes/loopd_radix/assets/stylesheets/print.css] => Array
        (
            [group_hash] => 00000001 KVfkfYaMO1YOjPuDoMV_cmGda_mwkWSZBZ-qwlccFMY
            [mtime] => 1410164435
            [filesize] => 0
            [linecount] => 0
            [changes] => 1
        )

    [sites/all/themes/loopd_radix/assets/stylesheets/screen.css] => Array
        (
            [group_hash] => 00000001 KV1O4r-US6_2weDY755L-uYCswotd4iTgzn_ivwY30E
            [mtime] => 1410799510
            [filesize] => 500287
            [linecount] => 4985
            [changes] => 1
        )

    [sites/all/modules/contrib/search_api_autocomplete/search_api_autocomplete.css] => Array
        (
            [group_hash] => 00000001 KV1O4r-US6_2weDY755L-uYCswotd4iTgzn_ivwY30E
            [mtime] => 1410129406
            [filesize] => 350
            [linecount] => 4
            [changes] => 1
        )

    [modules/contextual/contextual.css] => Array
        (
            [group_hash] => 00000001 KV1O4r-US6_2weDY755L-uYCswotd4iTgzn_ivwY30E
            [mtime] => 1409636163
            [filesize] => 2340
            [linecount] => 16
            [changes] => 1
        )

    [sites/all/themes/radix/assets/stylesheets/radix-livestyle.css] => Array
        (
            [group_hash] => 00000001 KV1O4r-US6_2weDY755L-uYCswotd4iTgzn_ivwY30E
            [mtime] => 1402765262
            [filesize] => 81
            [linecount] => 0
            [changes] => 1
        )

    [modules/system/system.js] => Array
        (
            [group_hash] => 00000001 H7yEX9jgEZLnhvOt8j4L0Dcu5tHrBQq2gPl5PcEc3FU
            [mtime] => 1409636163
            [filesize] => 4699
            [linecount] => 140
            [changes] => 1
        )

    [themes/seven/style.css] => Array
        (
            [group_hash] => 00000001 DkXfc3aEdpAuikc8f-LORs7MkP3qwaoBf7B2PTl90n4
            [mtime] => 1409636164
            [filesize] => 18585
            [linecount] => 271
            [changes] => 1
        )

    [themes/seven/reset.css] => Array
        (
            [group_hash] => 00000001 DkXfc3aEdpAuikc8f-LORs7MkP3qwaoBf7B2PTl90n4
            [mtime] => 1409636164
            [filesize] => 2947
            [linecount] => 144
            [changes] => 1
        )

    [misc/states.js] => Array
        (
            [group_hash] => 00000001 957_7qj0zqJR0_fYy2Hh3umFNXpmNNM3n6kRKT7AiAs
            [mtime] => 1409636163
            [filesize] => 17354
            [linecount] => 544
            [changes] => 1
        )

)
';
  $export['advagg_bundler_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_max_css';
  $strongarm->value = '1';
  $export['advagg_bundler_max_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_bundler_max_js';
  $strongarm->value = '1';
  $export['advagg_bundler_max_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cache_level';
  $strongarm->value = '1';
  $export['advagg_cache_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_combine_css_media';
  $strongarm->value = 0;
  $export['advagg_combine_css_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_core_groups';
  $strongarm->value = FALSE;
  $export['advagg_core_groups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cron_frequency';
  $strongarm->value = '86400';
  $export['advagg_cron_frequency'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_cron_timestamp';
  $strongarm->value = 1410844618;
  $export['advagg_cron_timestamp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_compressor';
  $strongarm->value = '2';
  $export['advagg_css_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_fix_type';
  $strongarm->value = 1;
  $export['advagg_css_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_inline_compressor';
  $strongarm->value = '0';
  $export['advagg_css_inline_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_inline_compress_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_css_inline_compress_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_enabled';
  $strongarm->value = 1;
  $export['advagg_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_gzip';
  $strongarm->value = 1;
  $export['advagg_gzip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter';
  $strongarm->value = 0;
  $export['advagg_ie_css_selector_limiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter_value';
  $strongarm->value = 4095;
  $export['advagg_ie_css_selector_limiter_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compressor';
  $strongarm->value = '1';
  $export['advagg_js_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_compress_packer';
  $strongarm->value = 0;
  $export['advagg_js_compress_packer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_fix_type';
  $strongarm->value = 1;
  $export['advagg_js_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_inline_compressor';
  $strongarm->value = '0';
  $export['advagg_js_inline_compressor'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_inline_compress_if_not_cacheable';
  $strongarm->value = 0;
  $export['advagg_js_inline_compress_if_not_cacheable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_remove_missing_files_from_db_time';
  $strongarm->value = '1209600';
  $export['advagg_remove_missing_files_from_db_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_remove_old_unused_aggregates_time';
  $strongarm->value = '3888000';
  $export['advagg_remove_old_unused_aggregates_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_use_httprl';
  $strongarm->value = FALSE;
  $export['advagg_use_httprl'] = $strongarm;

  return $export;
}
