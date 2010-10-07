<?php

/**
 * Implementation of hook_profile_details().
 */
function epistemetec_profile_details() {
  return array(
    'name' => 'Epistemetec',
    'description' => 'Make a better Digital Library by Cybersar',
    'old_short_name' => 'epistemetec_installer',
  );
}

/**
 * Implementation of hook_profile_modules().
 */
function epistemetec_profile_modules() {
  $modules = array(
     // Drupal core
    'block',
    'comment',
    'dblog',
    'filter',
    'help',
    'menu',
    'node',
    'openid',
    'search',
    'system', 
    'taxonomy',
    'upload',
    'user',
    // Admin menu
    'admin_menu',
    // Views
    'views', 'views_ui', 
    // CTools
    'ctools',
    // Date
    'date_api', 'date_timezone',
    // Features
    'features',
    // Image
    'imageapi', 'imageapi_gd', 'imagecache',
    // Token
    'token',
    // Skinr
    'skinr',
    // Strongarm
    'strongarm',
    // Custom features
    'skinr_config',

   
  );

  return $modules;
}

/**
* Implementation of hook_profile_final().
*
* epistemetec platform installation.
*/
function epistemetec_profile_final() {

// Enable default theme
  drupal_system_enable('theme', 'minnelli');
  variable_set('theme_default', 'minnelli');

}
?>
