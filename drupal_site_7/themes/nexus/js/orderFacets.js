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
  
  
    
       
        $("addressee_s").hide();
        $("mods_originInfo_place_placeTerm_s").hide();
        $("mods_physicalDescription_extent_pages_s").hide();
        $("mods_physicalDescription_extent_mm_s").hide();
        $("genre_s").hide();
        $("mods_identifier_local_NLS_copy_identifier_s").hide();
        $("otherVersions_s").hide();
        $("mods_identifier_local_Canonical_Catalog_Number_s").hide();
 

});

jQuery('#fullRecordForm :checkbox').change(function () {
    if ($(this).is(':checked')) {
        console.log($(this).val() + ' is now checked');
       
        
        $("addressee_s").show();
        $("mods_originInfo_place_placeTerm_s").show();
        $("mods_physicalDescription_extent_pages_s").show();
        $("mods_physicalDescription_extent_mm_s").show();
        $("genre_s").show();
        $("mods_identifier_local_NLS_copy_identifier_s").show();
        $("otherVersions_s").show();
        $("mods_identifier_local_Canonical_Catalog_Number_s").show();
        
    } else {
        console.log($(this).val() + ' is now unchecked');
        
        $("addressee_s").hide();
        $("mods_originInfo_place_placeTerm_s").hide();
        $("mods_physicalDescription_extent_pages_s").hide();
        $("mods_physicalDescription_extent_mm_s").hide();
        $("genre_s").hide();
        $("mods_identifier_local_NLS_copy_identifier_s").hide();
        $("otherVersions_s").hide();
        $("mods_identifier_local_Canonical_Catalog_Number_s").hide();
    }
});

