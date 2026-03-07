let hed = document.getElementById("heading");   // by id
hed.style.color = "green";
hed.style.fontSize = "50px";
hed.innerText = "Hello Rohit";
hed.innerHTML =  "<i>Hello Rohit</i>";

let cont = document.getElementsByClassName("content");  // by class name
cont[1].style.backgroundColor = "red";

let para = document.querySelector("p");
// para.style.backgroundColor = "yellow";
para.classList.add("big");
para.classList.remove("big");

let body = document.querySelector("body");
// body.classList.add("darkmode");

// Creating a new element using javascript

let newElement = document.createElement("p");
newElement.innerText = "Hello eveyone I am Rohit Gupta";

body.appendChild(newElement);

// cont[1].remove();  // button removed

// Event listners

let btn = document.querySelector("#btn");

// btn.addEventListener("click", () =>{
//     alert("Button Clicked");
// })

// to change text on click

let newpara = document.querySelector("#newpara");

btn.addEventListener("click", () => {
    newpara.classList.toggle("changedText");
})

