/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
	
	function hideMenu(){
		
		$('#onepage-links-wrapper > h2').removeClass('element-invisible');
		$('#main-menu > h2').removeClass('element-invisible');
		$('#onepage-links-wrapper > ul').addClass('mobile');
		$('#main-menu > ul').addClass('mobile');
		
	}
	
	function showMenu(){
		
		$('#onepage-links-wrapper > h2').addClass('element-invisible');
		$('#main-menu > h2').addClass('element-invisible');
		$('#onepage-links-wrapper ul').removeClass('mobile');
		$('#main-menu ul').removeClass('mobile');
		
	}
	
// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {
   	
				if($('#cboxLoadedContent article').length!=0)	
				$('#cboxLoadedContent').mCustomScrollbar();	
		
  }
};
$(document).scroll(function(){
if($(window).scrollTop()>$('#header').innerHeight()){
			$('#navigation').addClass('fixed');
			} else {$('#navigation').removeClass('fixed');}
			});

$(document).ready(function(){
$('#block-webform-client-block-18 h2').click(function(){					
					$('.region-addnav form').toggleClass('active');
				});	
if($(window).width()<790){
	hideMenu();
};

$('#onepage-links-wrapper > h2').click(function(){
	$('#onepage-links-wrapper ul').toggleClass('mclick');
});

$('#main-menu > h2').click(function(){
	$('#main-menu ul').toggleClass('mclick');
});
		
$('.contact-form #edit-subject').val('Re:');	
$('.contact-form .form-item-subject').hide();	
setTimeout(function(){$('#section-services .reqs').click()}, 20000);
});

$(document).click(function(e){
	if ($(e.target).closest('.region-addnav').length==0 && $('.region-addnav form').hasClass('active')){
		$('.region-addnav form').removeClass('active');
	}
});

$(window).resize(function(){
	if($(window).width()<790){
	hideMenu();
}		else {showMenu()};
});

})(jQuery, Drupal, this, this.document);
