AOS.init({
    offset:100,
    duration:1000
  });
  $('.owl-carousel').owlCarousel({
    loop:true,
    margin:10,
    items:2,
    nav:false,
    responsiveClass:true,
    responsive:{
        0:{
            items:1,
            nav:false
        },
        600:{
            items:1,
            nav:false
        },
        1000:{
            items:1,
            nav:false,
            loop:true
        }
    }
})
var owl = $('.owl-carousel');
owl.owlCarousel();
// Listen to owl events:
owl.on('changed.owl.carousel', function(event) {
  new WOW().init();
})

$('.counter').counterUp({
    delay: 30,
    time: 4000
})

// document.addEventListener("scroll",()=>{
//     const header = document.querySelector("nav");
    
//     if(window.scrollY>0){
//         header.classList.add("change");
//     }else{
//         header.classList.remove("change");
//     }
// })