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

  // Exported menu link: main-menu_about-this-site:livingstoneonline
  $menu_links['main-menu_about-this-site:livingstoneonline'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'livingstoneonline',
    'router_path' => 'livingstoneonline',
    'link_title' => 'About This Site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-this-site:livingstoneonline',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: main-menu_behind-the-scenes:behindthescenes
  $menu_links['main-menu_behind-the-scenes:behindthescenes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'behindthescenes',
    'router_path' => 'behindthescenes',
    'link_title' => 'Behind the Scenes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_behind-the-scenes:behindthescenes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 16,
    'customized' => 1,
  );
  // Exported menu link: main-menu_in-his-own-words:inhisownwords
  $menu_links['main-menu_in-his-own-words:inhisownwords'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'inhisownwords',
    'router_path' => 'inhisownwords',
    'link_title' => 'In His Own Words',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_in-his-own-words:inhisownwords',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 8,
    'customized' => 1,
  );
  // Exported menu link: main-menu_life--times:lifeandtimes
  $menu_links['main-menu_life--times:lifeandtimes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'lifeandtimes',
    'router_path' => 'lifeandtimes',
    'link_title' => 'Life & Times',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_life--times:lifeandtimes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 20,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-technology:ourtechnology
  $menu_links['main-menu_our-technology:ourtechnology'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'ourtechnology',
    'router_path' => 'ourtechnology',
    'link_title' => 'Our Technology',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-technology:ourtechnology',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 12,
    'customized' => 1,
  );
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
    'weight' => 24,
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
  t('About This Site');
  t('Behind the Scenes');
  t('Home');
  t('In His Own Words');
  t('Life & Times');
  t('Mail');
  t('Our Technology');
  t('Resources');
  t('Twitter');
  t('WordPress');


  return $menu_links;
}
