<?php
/**
 * Implements hook_html_head_alter().
 * This will overwrite the default meta character type tag with HTML5 version.
 */
function nexus_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

function nexus_breadcrumb($breadcrumb) {
   $themed_breadcrumb_class = token_replace('[current-page:url:args:first]'); 
  if (empty($breadcrumb)) {
    return $themed_breadcrumb = 'Livingstone Online <div id="breadcrumb" class="' . $themed_breadcrumb_class . '"></div>';
  }
  else {
    $themed_breadcrumb = '<div id="breadcrumb" class="' . $themed_breadcrumb_class . '">';
    $array_size = count($breadcrumb['breadcrumb']);
    $i = 0;
    while ( $i < $array_size ) {
      $themed_breadcrumb .= '<span class="breadcrumb-';
      $themed_breadcrumb .= $i;
      $themed_breadcrumb .=  '">' . $breadcrumb['breadcrumb'][$i] . '</span>';
      if ( $i + 1 != $array_size ) {
        $themed_breadcrumb .=  '  ';
      }
      $i++;
    }
    $themed_breadcrumb .= '</div>';
    return $themed_breadcrumb;
  }
}

function nexus_preprocess_html(&$vars) {
  $vars['attributes_array']['class'][] = $vars['classes_array'][] = 'page-' . drupal_html_class(drupal_get_title());
}
/**
 * Override or insert variables into the page template.
 */
function nexus_preprocess_page(&$vars) {
  $search_box = drupal_render(drupal_get_form('search_block_form'));
  $vars['search_box'] = $search_box;

  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $vars['secondary_menu'] = FALSE;
  }
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function nexus_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function nexus_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
  $variables['date'] = t('!datetime', array('!datetime' =>  date('j F Y', $variables['created'])));
}

function nexus_page_alter($page) {
  // <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1"/>
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
    'name' =>  'viewport',
    'content' =>  'width=device-width, initial-scale=1, maximum-scale=1'
    )
  );
  drupal_add_html_head($viewport, 'viewport');
}


/**
 * Add javascript files for front-page jquery slideshow.
 */
if (drupal_is_front_page()) {
  drupal_add_js(drupal_get_path('theme', 'nexus') . '/js/jquery.flexslider.js');
  drupal_add_js(drupal_get_path('theme', 'nexus') . '/js/slide.js');
  drupal_add_css(drupal_get_path('theme', 'nexus') . '/style.css', array('group' => CSS_THEME));
}else{
    drupal_add_css(drupal_get_path('theme', 'nexus') . '/style_section.css', array('group' => CSS_THEME)); 
}
function nexus_menu_link__main_menu(array $variables) {
$element = $variables['element'];
  
  return '<li class="frmore"><a title="'.$element['#title'].'"  href="'.base_path().$element['#href'].'">' . $element['#title'] . "</a></li>\n";
}
function nexus_menu_tree__main_menu($variables) {
  return '' . $variables['tree'] . '';
}
function nexus_menu_tree__menu_external_links($variables) {
  return '' . $variables['tree'] . '';
}

function nexus_menu_link__menu_external_links(array $variables) {
  $element = $variables['element'];
  /*$sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";*/
  if($element['#title'] == 'Home'){
     //$element['#title'] = '<img title="home" class="img_menu"   src="'.base_path().drupal_get_path('theme', 'nexus').'/images/home.png"/>'; 
     $element['#title'] = '<i class="fa fa-home"></i>';
  }
    if($element['#title'] == 'Mail'){
     //$element['#title'] = '<img title="mail" class="img_menu_mail" src="'.base_path().drupal_get_path('theme', 'nexus').'/images/mail.jpg"/>'; 
     $element['#title'] = '<i class="fa fa-envelope"></i>';      
  }
    if($element['#title'] == 'Twitter'){
     //$element['#title'] = '<img title="twitter" class="img_menu"  src="'.base_path().drupal_get_path('theme', 'nexus').'/images/twitter.png"/>';
      $element['#title'] = '<i class="fa fa-twitter"></i>';  
  }
    if($element['#title'] == 'WordPress'){
     //$element['#title'] = '<img title="wordpress" class="img_menu" src="'.base_path().drupal_get_path('theme', 'nexus').'/images/wordpress.png"/>'; 
     $element['#title'] = '<i class="fa fa-wordpress"></i>';        
  }
  
  //$output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '><li class="leaf"><a href="'.$element['#href'].'"/>' . $element['#title'] . "</a></li>\n";
}

function nexus_form_element($variables) {
  $element = &$variables['element'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  
 
  $output =  "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' ' . theme('form_element_label', $variables) . "\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "\n";

  return $output;
}

function taxonomy_select_nodes_from_nid($tid, $nid, $direction = 'next', $limit = 1) {
    if (!variable_get('taxonomy_maintain_index_table', TRUE)) {
        return array();
    }
    $query = db_select('taxonomy_index', 't');
    $query->addTag('node_access');
    $query->condition('tid', $tid);
    $query->condition('nid', $nid, $direction == 'next' ? '>' : '<');
    if ($limit !== FALSE) {
        $query->range(0, $limit);
    }
    $query->addField('t', 'nid');
    $query->addField('t', 'tid');
    $query->orderBy('t.nid', $direction == 'next' ? 'ASC' : 'DESC');
    return $query->execute()->fetchCol();
}

