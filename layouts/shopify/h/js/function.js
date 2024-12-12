(function ($) {
    "use strict";
	
	var $window = $(window); 
	var $body = $('body'); 
	
	/* Preloader Effect */
	$window.load(function() {
		$(".preloader").fadeOut(600);
    });
	

	/* Back To Top */
	$(document).on('click','#back-to-top a',function(){
		$('body,html').stop().animate({	scrollTop: 0	}, 800);
		return false;
	});
		
	/* Sticky header */
	$window.scroll(function(){
    	if ($window.scrollTop() > 200) {
			$('.navbar').addClass('sticky-header');
		} else {
			$('.navbar').removeClass('sticky-header');
		}
	});
	
	/* Jump to top button */
	$window.scroll(function(){
    	if ($window.scrollTop() > 600) {
			$('.jumptotop').addClass('btn-active');
		} else {
			$('.jumptotop').removeClass('btn-active');
		}
	});
	
	
	
	/* Init Counter */
    $('.counter').counterUp({ delay: 5, time: 2000 });
})(jQuery);