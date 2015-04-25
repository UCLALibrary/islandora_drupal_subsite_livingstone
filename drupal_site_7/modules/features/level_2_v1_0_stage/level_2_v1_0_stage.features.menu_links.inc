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

  // Exported menu link: menu-external-links_home:http://www.livingstoneonline.org
  $menu_links['menu-external-links_home:http://www.livingstoneonline.org'] = array(
    'menu_name' => 'menu-external-links',
    'link_path' => 'http://www.livingstoneonline.org',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
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
  // Exported menu link: menu-external-links_twitter:http://www.twitter.com/livingstone13d
  $menu_links['menu-external-links_twitter:http://www.twitter.com/livingstone13d'] = array(
    'menu_name' => 'menu-external-links',
    'link_path' => 'http://www.twitter.com/livingstone13d',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'identifier' => 'menu-external-links_twitter:http://www.twitter.com/livingstone13d',
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
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
      'attributes' => array(),
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
  t('Twitter');
  t('WordPress');


  return $menu_links;
}
