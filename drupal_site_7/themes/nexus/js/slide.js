jQuery(window).load(function() {

  jQuery('#slidebox').flexslider({
    animation: "fade",
    directionNav:true,
    controlNav:false
  });
   jQuery('.flexslider').flexslider({
    controlNav: true,               //Boolean: Create navigation for paging control of each clide? Note: Leave true for manualControls usage
    directionNav: false 
  }); 

});