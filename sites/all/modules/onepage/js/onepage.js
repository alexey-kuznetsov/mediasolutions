(function ($) {

  Drupal.behaviors.onepage  = {
    attach: function (context, settings) {
	  	
		if (!jQuery('body').hasClass('processed')) {
			jQuery('body').addClass('processed');
			onepage_get_active_menu();
		}

		jQuery('#onepage-links a').click(function(){	
			var linkId = jQuery(this).attr('id');
			onepage_move_menu('#' + linkId.replace('link-', 'section-'));
			return false;
		});
		
			
		jQuery(window).scroll(function () {
			onepage_get_active_menu();
		});
		
		if (window.location.hash != '') {
			var area = window.location.hash.replace('#', '');
			onepage_move_menu('#section-' + area.replace('#', ''));
		}	  
	  
	  
    }
  };

})(jQuery);

function onepage_move_menu(area) {
	var section = jQuery(area);
	if(typeof(section) == 'object') {
		var targetOffset = section.offset().top - 120;
		jQuery('html,body').stop().animate({scrollTop: targetOffset}, 800);
	}
	return false;
}

function onepage_get_active_menu() {
	var section = jQuery("div.section:in-viewport");
	
	if(section.length > 0) {
		var active = jQuery('#onepage-links a.active').attr('id');
		
		// needs review, can't get element id properly
		var id = jQuery(section).attr('id');
		var linkId = id.replace('section-', 'link-');
		
		if(active != linkId && id != '') {	
	 		jQuery('#onepage-links a, #onepage-links li').removeClass('active');
	 		jQuery('#' + linkId).addClass('active');
	 		jQuery('#' + linkId).parents('li').addClass('active');
		}	
	}
}