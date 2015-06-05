/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

jQuery(document).ready( function($) {
$lisDate = $("ul.mods_originInfo_type_normalized_dateOther_t li"); 
    var dateOrderedLis = $lisDate.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("ul.mods_originInfo_type_normalized_dateOther_t").html(dateOrderedLis);
    
$lisCreator = $("ul.mods_name_personal_creator_namePart_s li"); 
    var creatorOrderedLis = $lisCreator.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("ul.mods_name_personal_creator_namePart_s").html(creatorOrderedLis);
    
$lisAddressee = $("ul.mods_name_personal_addressee_namePart_s li"); 
    var addressesOrderedLis = $lisAddressee.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("ul.mods_name_personal_addressee_namePart_s").html(addressesOrderedLis); 
    
$lisRepo = $("ul.mods_relatedItem_original_name_corporate_namePart_s li"); 
    var repoOrderedLis = $lisRepo.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("ul.mods_relatedItem_original_name_corporate_namePart_s").html(repoOrderedLis);    
    
$lisGenre = $("ul.mods_genre_s li"); 
    var genreOrderedLis = $lisGenre.sort(function (a, b) {
        return $(a).find("a").text() > $(b).find("a").text();
    });
    $("ul.mods_genre_s").html(genreOrderedLis);         
  
  
  
 

});

$('#fullRecordForm :checkbox').change(function () {
    if ($(this).is(':checked')) {
        console.log($(this).val() + ' is now checked');
        
    } else {
        console.log($(this).val() + ' is now unchecked');
    }
});

