

function openNav() {
    document.getElementById("myNav").style.width = "100%";
}
function closeNav() {
    document.getElementById("myNav").style.width = "0%";
}

var acc = document.getElementsByClassName("accordion");
var i;


// accordin
var acc = document.getElementsByClassName("accordion");
var i;

for (i = 0; i < acc.length; i++) {
    acc[i].addEventListener("click", function () {
        this.classList.toggle("active");
        var panel = this.nextElementSibling;
        if (panel.style.maxHeight) {
            panel.style.maxHeight = null;
        } else {
            panel.style.maxHeight = panel.scrollHeight + "px";
        }
    });
}


let r1 = document.getElementsByClassName("r1"); 
for(let i=0; i<=r1.length; i++){
    r1[i].addEventListener("mouseover",(event)=>{
        // alert("all ok"); 
        let target=event.target;
        if(target.classList.contains("r1")){
            // alert("okkk");
            let org=target.src;
            let new_i=target.getAttribute("data-hover");
            // console.log(new_i)
            target.src=new_i;
            target.addEventListener("mouseleave",()=>{
                target.src=org;  

            })
        }
        else{
            alert("not")
        }
    })
}