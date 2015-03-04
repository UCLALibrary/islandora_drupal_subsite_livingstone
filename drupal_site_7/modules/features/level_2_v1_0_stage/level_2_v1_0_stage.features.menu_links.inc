<?php
/**
 * @file
 * level_2_v1_0_stage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function level_2_v1_0_stage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_resources:resources
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-external-links_home:http://www.livingstoneonline.org
  $menu_links['menu-external-links_home:http://www.livingstoneonline.org'] = array(
    'menu_name' => 'menu-external-links',
    'link_path' => 'http://www.livingstoneonline.org',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-external-links_home:http://www.livingstoneonline.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-external-links_mail:http://mailto:awisnicki@yahoo.com
  $menu_links['menu-external-links_mail:http://mailto:awisnicki@yahoo.com'] = array(
    'menu_name' => 'menu-external-links',
    'link_path' => 'http://mailto:awisnicki@yahoo.com',
    'router_path' => '',
    'link_title' => 'Mail',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-external-links_mail:http://mailto:awisnicki@yahoo.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-external-links_twitter:http://www.twitter.com/livingstone13d
  $menu_links['menu-external-links_twitter:http://www.twitter.com/livingstone13d'] = array(
    'menu_name' => 'menu-external-links',
    'link_path' => 'http://www.twitter.com/livingstone13d',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-external-links_twitter:http://www.twitter.com/livingstone13d',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-external-links_wordpress:http://livingstoneonline.wordpress.com
  $menu_links['menu-external-links_wordpress:http://livingstoneonline.wordpress.com'] = array(
    'menu_name' => 'menu-external-links',
    'link_path' => 'http://livingstoneonline.wordpress.com',
    'router_path' => '',
    'link_title' => 'WordPress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-external-links_wordpress:http://livingstoneonline.wordpress.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Mail');
  t('Resources');
  t('Twitter');
  t('WordPress');


  return $menu_links;
}
