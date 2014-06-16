<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<div id="page">

    <div id="parent">
        <?php if ($page['header']) : ?> 
            <header id="masthead">

                <nav id="navigation" >

                    <?php print render($page['header']); ?>


                </nav>

            </header>
        <?php endif; ?>

        <?php if (theme_get_setting('slideshow_display', 'nexus')): ?>

            <div id="slider">
                <div class="flexslider">
                    <ul class="slides">
                        <li><img class="slide-image" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/Level-1-underlying-image.jpg'; ?>"/>

                        </li>
                        <li><img class="slide-image" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/Level-1-underlying-image.jpg'; ?>"/>

                        </li>
                        <li><img class="slide-image" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/Level-1-underlying-image.jpg'; ?>"/>

                        </li>
                        <li><img class="slide-image" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/Level-1-underlying-image.jpg'; ?>"/>

                        </li>
                    </ul>
                    <ul class="flex-direction-nav"><li><a class="flex-prev" href="#">Previous</a></li><li><a class="flex-next" href="#">Next</a></li></ul>
                    <div class="flex-caption">
                        
  <!--  <h2>LIVINGSTONE ONLINE</h2>
<p>
                    THE WORDS OF EXPLORER DAVID LIVINGSTONE
                </p>-->
                  <?php print render($page['title']); ?>
     <?php print render($page['section']); ?>
<!--<a class="frmore" href="node/66">Livingstone/Online</a><a class="frmore" href="node/72">In His Own Words</a>
<a class="frmore" href="node/69">Our Technology</a>
<a class="frmore" href="node/70">Behind the Scenes</a>
<a class="frmore" href="node/67">Life &amp; Times</a>
<a class="frmore" href="node/68">Resources</a>-->
       
 
                        


                    </div>
                </div>  
            </div>
        <?php endif; ?>


    </div>
    <footer id="colophon" class="site-footer" role="contentinfo">
        <div class="container">
            <div class="row">
                        
          <div class=" block-center col-sm-2">  
               <a href="http://www.library.ucla.edu/"><img width="180" height="31" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/ucla.png'; ?>"></a>
          </div>         
          <div class="block-center col-sm-2">
       <a href="http://www.nts.org.uk/property/davidlivingstonecentre/"><img width="150" height="87" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/NTS.png'; ?>"></a>
          </div>        
  <div class="block-center col-sm-2">
        <a href="http://www.neh.gov/"><img width="205" height="55" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/neh.png'; ?>"></a>
          </div>         
 <div class="block-center col-sm-2">
        <a href="http://www.nls.uk/"><img width="150" height="90" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/NLS.png'; ?>"></a>
          </div>      
  <div class="block-center col-sm-2">
      <a href="www.unl.edu"><img width="130" height="90" src="<?php print base_path() . drupal_get_path('theme', 'nexus') . '/images/nebraska.png'; ?>"></a>
          </div>  
       
            </div>
        </div>
         
</div>
</div>