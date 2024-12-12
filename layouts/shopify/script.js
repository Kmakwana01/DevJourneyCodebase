$('.owl-carousel').owlCarousel({
    loop:true,
    margin:80,
    responsiveClass:true,
    responsive:{
        0:{
            items:3,
            nav:false
        },
        600:{
            items:3,
            nav:false
        },
        1000:{
            items:6,
            nav:false,
            loop:true
        }
    }
})


var owl = $('.owl-carousel');
owl.owlCarousel();
owl.on('changed.owl.carousel', function(event) {
    new WOW().init();
})

// function add(this){
//     document.getElementById("wishlist").innerHTML=this.value
// }


// scroll
// ---------------------------------------------------- 
// document.addEventListener("scroll",()=>{
//     const demo=document.getElementsByClassName("sticky")[0];

//     if(window.scrollY > 0){
//         demo.firstElementChild.classList.add("tty")
//         demo.classList.add("sticky2")
//     }else{
//         demo.firstElementChild.classList.remove("tty")
//         demo.classList.remove("sticky2");
//     }
// })


// function add(khushal){
//     alert("asdf")
//     const demo=document.getElementsByClassName("ttt")[0].parentElement.parentElement.parentElement;
//     console.log(demo);
// //   document.getElementById("lpll").innerHTML=demo;
//     // document.getElementById("lpll").innerHTML="khushalasdffdf
//     // console.log(document.getElementById("demos"))
// }



