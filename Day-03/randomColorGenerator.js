let button = document.getElementById("btn");
let colotText = document.getElementById("colorCode");

button.addEventListener("click", function(){
    const randomColor = generateColor();
    document.body.style.backgroundColor = randomColor;
    colotText.textContent = randomColor;

});

function generateColor(){

    const letters = "0123456789ABCDEF";

    let color = "#";

    for(let i = 0; i<6; i++){
        const randomIndex = Math.floor(Math.random()*16);
        color += letters[randomIndex];
    }

    return color;

}