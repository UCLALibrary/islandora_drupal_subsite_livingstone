<?php
/**
 * @file
 * level_2_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function level_2_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_external:admin/structure/menu/manage/menu-external-links
  $menu_links['management_external:admin/structure/menu/manage/menu-external-links'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-external-links',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'External',
    'options' => array(
      'identifier' => 'management_external:admin/structure/menu/manage/menu-external-links',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('External');
  t('Main menu');


  return $menu_links;
}
