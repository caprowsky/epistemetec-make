<?php

/**
 * Implementation of hook_strongarm().
 */
function epistemetec_config_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'garland';

  $export['admin_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_files';
  $strongarm->value = array(
    '0' => 'sites/default/files/color/garland-e9e4cbe3/menu-collapsed.gif',
    '1' => 'sites/default/files/color/garland-e9e4cbe3/menu-collapsed-rtl.gif',
    '2' => 'sites/default/files/color/garland-e9e4cbe3/menu-expanded.gif',
    '3' => 'sites/default/files/color/garland-e9e4cbe3/menu-leaf.gif',
    '4' => 'sites/default/files/color/garland-e9e4cbe3/body.png',
    '5' => 'sites/default/files/color/garland-e9e4cbe3/bg-bar.png',
    '6' => 'sites/default/files/color/garland-e9e4cbe3/bg-bar-white.png',
    '7' => 'sites/default/files/color/garland-e9e4cbe3/bg-tab.png',
    '8' => 'sites/default/files/color/garland-e9e4cbe3/bg-navigation.png',
    '9' => 'sites/default/files/color/garland-e9e4cbe3/bg-content-left.png',
    '10' => 'sites/default/files/color/garland-e9e4cbe3/bg-content-right.png',
    '11' => 'sites/default/files/color/garland-e9e4cbe3/bg-content.png',
    '12' => 'sites/default/files/color/garland-e9e4cbe3/bg-navigation-item.png',
    '13' => 'sites/default/files/color/garland-e9e4cbe3/bg-navigation-item-hover.png',
    '14' => 'sites/default/files/color/garland-e9e4cbe3/gradient-inner.png',
    '15' => 'sites/default/files/color/garland-e9e4cbe3/logo.png',
    '16' => 'sites/default/files/color/garland-e9e4cbe3/screenshot.png',
    '17' => 'sites/default/files/color/garland-e9e4cbe3/style.css',
    '18' => 'sites/default/files/color/garland-e9e4cbe3/style-rtl.css',
  );

  $export['color_garland_files'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_logo';
  $strongarm->value = 'sites/default/files/color/garland-e9e4cbe3/logo.png';

  $export['color_garland_logo'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_palette';
  $strongarm->value = array(
    'base' => '#7db323',
    'link' => '#6a9915',
    'top' => '#b5d52a',
    'bottom' => '#7db323',
    'text' => '#191a19',
  );

  $export['color_garland_palette'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_screenshot';
  $strongarm->value = 'sites/default/files/color/garland-e9e4cbe3/screenshot.png';

  $export['color_garland_screenshot'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_garland_stylesheets';
  $strongarm->value = array(
    '0' => 'sites/default/files/color/garland-e9e4cbe3/style.css',
    '1' => 'sites/default/files/color/garland-e9e4cbe3/style-rtl.css',
  );

  $export['color_garland_stylesheets'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_footer';
  $strongarm->value = '';

  $export['site_footer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'front';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mission';
  $strongarm->value = 'La libreria digitale E-Pistemetec vuole stimolare la curiosità, la creatività, con percorsi studiati per i differenti tipi di utenti.';

  $export['site_mission'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'E-pistemetec Digital Library';

  $export['site_name'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Utenti di culture differenti, utenti divulgatori e utenti pionieri tutti accomunati da un medesimo fine, condividere.';

  $export['site_slogan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_epistemetec_theme';
  $strongarm->value = array(
    'block' => array(
      'menu-menu-principale' => array(
        'grid16-width' => 'grid16-9',
        'fusion-general-styles' => array(
          'fusion-bold-links' => 'fusion-bold-links',
        ),
        'fusion-menu' => 'fusion-inline-menu',
      ),
      'menu-primary-links' => array(),
      'menu-menu-menu-footer' => array(
        'grid16-width' => 'grid16-6',
        'fusion-alignment' => 'fusion-right',
        'fusion-content-alignment' => 'fusion-right-content',
        'fusion-general-styles' => array(
          'fusion-bold-links' => 'fusion-bold-links',
        ),
        'fusion-equal-heights' => array(
          'equal-heights' => 'equal-heights',
        ),
        'fusion-menu' => 'fusion-inline-menu',
      ),
      'block-1' => array(
        'grid16-width' => 'grid16-2',
        'fusion-alignment' => 'fusion-right',
        'fusion-content-alignment' => 'fusion-right-content',
      ),
      'user-1' => array(
        'fusion-list-styles' => array(
          'fusion-list-vertical-spacing' => 'fusion-list-vertical-spacing',
        ),
      ),
      'logintoboggan-0' => array(
        'grid16-width' => 'grid16-1',
      ),
      'user-0' => array(
        'grid16-width' => 'grid16-1',
      ),
      'block-2' => array(),
    ),
    'comment' => array(
      'fedora_obj' => array(),
      'fedora_collectiondl' => array(),
    ),
    'node' => array(
      'fedora_obj' => array(),
      'fedora_collectiondl' => array(),
    ),
  );

  $export['skinr_epistemetec_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_fusion_core';
  $strongarm->value = array(
    'block' => array(
      'menu-primary-links' => array(),
      'user-1' => array(),
      'block-2' => array(),
      'block-1' => array(),
      'lang_dropdown-0' => array(),
    ),
    'comment' => array(
      'fedora_obj' => array(),
      'fedora_collectiondl' => array(),
    ),
    'node' => array(
      'fedora_obj' => array(),
      'fedora_collectiondl' => array(),
    ),
  );

  $export['skinr_fusion_core'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_garland';
  $strongarm->value = array(
    'block' => array(
      'menu-primary-links' => array(),
      'user-1' => array(),
      'block-2' => array(),
      'block-1' => array(),
      'lang_dropdown-0' => array(),
    ),
    'comment' => array(
      'fedora_obj' => array(),
      'fedora_collectiondl' => array(),
    ),
    'node' => array(
      'fedora_obj' => array(),
      'fedora_collectiondl' => array(),
    ),
  );

  $export['skinr_garland'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_settings_fedora_collectiondl';
  $strongarm->value = array(
    '0' => 'comment_group',
    '1' => 'node_group',
  );

  $export['skinr_settings_fedora_collectiondl'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'skinr_settings_fedora_obj';
  $strongarm->value = array(
    '0' => 'comment_group',
    '1' => 'node_group',
  );

  $export['skinr_settings_fedora_obj'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_epistemetec_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 0,
    'toggle_secondary_links' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/epistemetec_theme_logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'theme_grid' => 'grid16-960',
    'fluid_grid_width' => 'fluid-100',
    'sidebar_layout' => 'sidebars-split',
    'sidebar_first_width' => '3',
    'sidebar_last_width' => '3',
    'theme_font' => 'none',
    'theme_font_size' => 'font-size-12',
    'primary_menu_dropdown' => 1,
    'breadcrumb_display' => 1,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'user_notverified_display' => 1,
    'block_config_link' => 1,
    'grid_mask' => 0,
    'rebuild_registry' => 0,
    'fix_css_limit' => 0,
  );

  $export['theme_epistemetec_theme_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_fusion_core_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'theme_grid' => 'grid16-960',
    'fluid_grid_width' => 'fluid-100',
    'sidebar_layout' => 'sidebars-split',
    'sidebar_first_width' => '3',
    'sidebar_last_width' => '3',
    'theme_font' => 'none',
    'theme_font_size' => 'font-size-13',
    'primary_menu_dropdown' => 1,
    'breadcrumb_display' => 1,
    'user_notverified_display' => 1,
    'block_config_link' => 1,
    'grid_mask' => 0,
    'rebuild_registry' => 0,
    'fix_css_limit' => 1,
  );

  $export['theme_fusion_core_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_garland_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/garland_logo.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/default/files/garland_favicon.png',
    'favicon_upload' => '',
    'scheme' => '#7db323,#6a9915,#b5d52a,#7db323,#191a19',
    'palette' => array(
      'base' => '#7db323',
      'link' => '#6a9915',
      'top' => '#b5d52a',
      'bottom' => '#7db323',
      'text' => '#191a19',
    ),
    'theme' => 'garland',
    'info' => array(
      'schemes' => array(
        '#0072b9,#027ac6,#2385c2,#5ab5ee,#494949' => 'Laguna azzurra (Predefinito)',
        '#464849,#2f416f,#2a2b2d,#5d6779,#494949' => 'Cenere',
        '#55c0e2,#000000,#085360,#007e94,#696969' => 'Acquamarina',
        '#d5b048,#6c420e,#331900,#971702,#494949' => 'Cioccolato belga',
        '#3f3f3f,#336699,#6598cb,#6598cb,#000000' => 'Blu marino',
        '#d0cb9a,#917803,#efde01,#e6fb2d,#494949' => 'Esplosione di agrumi',
        '#0f005c,#434f8c,#4d91ff,#1a1575,#000000' => 'Giorno freddo',
        '#c9c497,#0c7a00,#03961e,#7be000,#494949' => 'Raggio verde',
        '#ffe23d,#a9290a,#fc6d1d,#a30f42,#494949' => 'Mediterraneo',
        '#788597,#3f728d,#a9adbc,#d4d4d4,#707070' => 'Mercurio',
        '#5b5fa9,#5b5faa,#0a2352,#9fa8d5,#494949' => 'Notturno',
        '#7db323,#6a9915,#b5d52a,#7db323,#191a19' => 'Olivia',
        '#12020b,#1b1a13,#f391c6,#f41063,#898080' => 'Plastica rosa',
        '#b7a0ba,#c70000,#a1443a,#f21107,#515d52' => 'Pomodoro lucido',
        '#18583d,#1b5f42,#34775a,#52bf90,#2d2d2d' => 'Foglia di tè',
        '' => 'Personalizza',
      ),
      'copy' => array(
        '0' => 'images/menu-collapsed.gif',
        '1' => 'images/menu-collapsed-rtl.gif',
        '2' => 'images/menu-expanded.gif',
        '3' => 'images/menu-leaf.gif',
      ),
      'css' => array(
        '0' => 'style.css',
      ),
      'gradient' => array(
        '0' => 0,
        '1' => 37,
        '2' => 760,
        '3' => 121,
      ),
      'fill' => array(
        'base' => array(
          '0' => 0,
          '1' => 0,
          '2' => 760,
          '3' => 568,
        ),
        'link' => array(
          '0' => 107,
          '1' => 533,
          '2' => 41,
          '3' => 23,
        ),
      ),
      'slices' => array(
        'images/body.png' => array(
          '0' => 0,
          '1' => 37,
          '2' => 1,
          '3' => 280,
        ),
        'images/bg-bar.png' => array(
          '0' => 202,
          '1' => 530,
          '2' => 76,
          '3' => 14,
        ),
        'images/bg-bar-white.png' => array(
          '0' => 202,
          '1' => 506,
          '2' => 76,
          '3' => 14,
        ),
        'images/bg-tab.png' => array(
          '0' => 107,
          '1' => 533,
          '2' => 41,
          '3' => 23,
        ),
        'images/bg-navigation.png' => array(
          '0' => 0,
          '1' => 0,
          '2' => 7,
          '3' => 37,
        ),
        'images/bg-content-left.png' => array(
          '0' => 40,
          '1' => 117,
          '2' => 50,
          '3' => 352,
        ),
        'images/bg-content-right.png' => array(
          '0' => 510,
          '1' => 117,
          '2' => 50,
          '3' => 352,
        ),
        'images/bg-content.png' => array(
          '0' => 299,
          '1' => 117,
          '2' => 7,
          '3' => 200,
        ),
        'images/bg-navigation-item.png' => array(
          '0' => 32,
          '1' => 37,
          '2' => 17,
          '3' => 12,
        ),
        'images/bg-navigation-item-hover.png' => array(
          '0' => 54,
          '1' => 37,
          '2' => 17,
          '3' => 12,
        ),
        'images/gradient-inner.png' => array(
          '0' => 646,
          '1' => 307,
          '2' => 112,
          '3' => 42,
        ),
        'logo.png' => array(
          '0' => 622,
          '1' => 51,
          '2' => 64,
          '3' => 73,
        ),
        'screenshot.png' => array(
          '0' => 0,
          '1' => 37,
          '2' => 400,
          '3' => 240,
        ),
      ),
      'blend_target' => '#ffffff',
      'preview_image' => 'color/preview.png',
      'preview_css' => 'color/preview.css',
      'base_image' => 'color/base.png',
    ),
  );

  $export['theme_garland_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 0,
    'toggle_secondary_links' => 0,
    'toggle_node_info_fedora_obj' => 1,
    'toggle_node_info_page' => 0,
    'toggle_node_info_panel' => 1,
    'toggle_node_info_story' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );

  $export['theme_settings'] = $strongarm;
  return $export;
}
