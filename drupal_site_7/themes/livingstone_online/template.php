<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Livingston Online theme.
 */
 
 
 // Code from: https://drupal.org/node/2096669
 // Adds back in functionality stripped out by omega 4 --kmd

function livingstone_online_preprocess_html(&$variables) {
  // Code borrowed/adapted from D7 core.
  // Classes originally added by D7 core, then removed by Omega 4 and now put back (ish) by this function.
  // NOTE: D7 core used hyphens in class names, we need to use different classes so we're
  // replacing hyphens with underscores (make sure your CSS is expecting this).
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'two_sidebars';
  }
  elseif (!empty($variables['page']['sidebar_first'])) {
    $variables['classes_array'][] = 'one_sidebar sidebar_first';
  }
  elseif (!empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'one_sidebar sidebar_second';
  }
  else {
    $variables['classes_array'][] = 'no_sidebars';
  }
}
?>


<?php

//Adding in viewport declaration
    $inline_script = <<<EOL
      <meta name="viewport" content="width=device-width, initial-scale=1">
EOL;
    $element = array(
      '#type' => 'markup',
      '#markup' => $inline_script,
    );
    drupal_add_html_head($element, 'meta');
?>

<?php
//Adding in google fonts
    $inline_script = <<<EOL
      <link href='http://fonts.googleapis.com/css?family=Neuton:300|Enriqueta|Cinzel+Decorative:400,700|Belleza|Lato:700,300italic' rel='stylesheet' type='text/css'>
EOL;
    $element = array(
      '#type' => 'markup',
      '#markup' => $inline_script,
    );
    drupal_add_html_head($element, 'googlefonts');
?>
