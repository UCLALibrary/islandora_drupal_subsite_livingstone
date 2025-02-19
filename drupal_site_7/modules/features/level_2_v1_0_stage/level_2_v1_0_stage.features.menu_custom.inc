<?php
/**
 * @file
 * level_2_v1_0_stage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function level_2_v1_0_stage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-external-links.
  $menus['menu-external-links'] = array(
    'menu_name' => 'menu-external-links',
    'title' => 'External',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('External');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
