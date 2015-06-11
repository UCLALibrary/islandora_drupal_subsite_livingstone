/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

jQuery(document).ready( function($) {
$lisDate = $("li.mods_originInfo_type_normalized_dateOther_t"); 
    var dateOrderedLis = $lisDate.sort(function (a, b) { 
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("li.mods_originInfo_type_normalized_dateOther_t").parent("ul").html(dateOrderedLis);
    
$lisCreator = $("li.mods_name_personal_creator_namePart_s"); 
    var creatorOrderedLis = $lisCreator.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("li.mods_name_personal_creator_namePart_s").parent("ul").html(creatorOrderedLis);
    
$lisAddressee = $("li.mods_name_personal_addressee_namePart_s"); 
    var addressesOrderedLis = $lisAddressee.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("li.mods_name_personal_addressee_namePart_s").parent("ul").html(addressesOrderedLis); 
    
$lisRepo = $("li.mods_relatedItem_original_name_corporate_namePart_s"); 
    var repoOrderedLis = $lisRepo.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("li.mods_relatedItem_original_name_corporate_namePart_s").parent("ul").html(repoOrderedLis);    
    
$lisGenre = $("li.mods_genre_s"); 
    var genreOrderedLis = $lisGenre.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("li.mods_genre_s").parent("ul").html(genreOrderedLis);         
  
  
    
       
        $("td.addressee_s").hide();
        $("td.mods_originInfo_place_placeTerm_s").hide();
        $("td.mods_physicalDescription_extent_pages_s").hide();
        $("td.mods_physicalDescription_extent_mm_s").hide();
        $("td.genre_s").hide();
        $("td.mods_identifier_local_NLS_copy_identifier_s").hide();
        $("td.otherVersions_s").hide();
        $("td.mods_identifier_local_Canonical_Catalog_Number_s").hide();
        
        $("th.addressee_s").hide();
        $("th.mods_originInfo_place_placeTerm_s").hide();
        $("th.mods_physicalDescription_extent_pages_s").hide();
        $("th.mods_physicalDescription_extent_mm_s").hide();
        $("th.genre_s").hide();
        $("th.mods_identifier_local_NLS_copy_identifier_s").hide();
        $("th.otherVersions_s").hide();
        $("th.mods_identifier_local_Canonical_Catalog_Number_s").hide();
        
        
        $('#fullRecord').change(function() {
    if ($(this).is(':checked')) {
        console.log($(this).val() + ' is now checked');
       
        
        $("td.addressee_s").show();
        $("td.mods_originInfo_place_placeTerm_s").show();
        $("td.mods_physicalDescription_extent_pages_s").show();
        $("td.mods_physicalDescription_extent_mm_s").show();
        $("td.genre_s").show();
        $("td.mods_identifier_local_NLS_copy_identifier_s").show();
        $("td.otherVersions_s").show();
        $("td.mods_identifier_local_Canonical_Catalog_Number_s").show();
        
        $("th.addressee_s").show();
        $("th.mods_originInfo_place_placeTerm_s").show();
        $("th.mods_physicalDescription_extent_pages_s").show();
        $("th.mods_physicalDescription_extent_mm_s").show();
        $("th.genre_s").show();
        $("th.mods_identifier_local_NLS_copy_identifier_s").show();
        $("th.otherVersions_s").show();
        $("th.mods_identifier_local_Canonical_Catalog_Number_s").show();
        
    } else {
        console.log($(this).val() + ' is now unchecked');
        
        $("td.addressee_s").hide();
        $("td.mods_originInfo_place_placeTerm_s").hide();
        $("td.mods_physicalDescription_extent_pages_s").hide();
        $("td.mods_physicalDescription_extent_mm_s").hide();
        $("td.genre_s").hide();
        $("td.mods_identifier_local_NLS_copy_identifier_s").hide();
        $("td.otherVersions_s").hide();
        $("td.mods_identifier_local_Canonical_Catalog_Number_s").hide();
        
        $("th.addressee_s").hide();
        $("th.mods_originInfo_place_placeTerm_s").hide();
        $("th.mods_physicalDescription_extent_pages_s").hide();
        $("th.mods_physicalDescription_extent_mm_s").hide();
        $("th.genre_s").hide();
        $("th.mods_identifier_local_NLS_copy_identifier_s").hide();
        $("th.otherVersions_s").hide();
        $("th.mods_identifier_local_Canonical_Catalog_Number_s").hide();
    }
});
 
$('.islandora-solr-content tr td:first-child a').text(
    function(i,text){
        return text.replace( /\d+/g, 'view');
    });
    
    // move show more or show less on top
    $( "p" ).insertBefore( "#foo" );
    dateShowLink = $( ".Date .soft-limit" ).detach();
    creatorShowLink = $( ".Creator .soft-limit" ).detach();
    genreShowLink = $( ".Genre .soft-limit" ).detach();
    dateShowLink.insertBefore(".Date h3");
    creatorShowLink.insertBefore(".Creator h3");
    genreShowLink.insertBefore(".Genre h3");
    
    
    $(".soft-limit").click(function(e) {
          // toggle class .hidden
          $(this).parent().children().last().toggleClass('hidden');
          if ($(this).text() == Drupal.t('Show more')) {
            $(this).text(Drupal.t('Show less'));
          }
          else {
            $(this).text(Drupal.t('Show more'));
          }
          e.preventDefault();
        });
});



