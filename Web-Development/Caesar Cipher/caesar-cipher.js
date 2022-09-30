const tabButtons = document.querySelectorAll(".tabContainer .buttonContainer button");
const tabPanels = document.querySelectorAll(".tabContainer  .tabPanel");

function showPanel(panelIndex, colorCode) {
    tabButtons.forEach(function (node) {
        node.style.backgroundColor = "";
        node.style.color = "";
    });
    tabButtons[panelIndex].style.backgroundColor = colorCode;
    tabButtons[panelIndex].style.color = "white";
    tabPanels.forEach(function (node) {
        node.style.display = "none";
    });
    tabPanels[panelIndex].style.display = "block";
}
showPanel(0, '#0281B1');

const eBtn = document.querySelector(".e-btn");
const dBtn = document.querySelector(".d-btn");
let alphabet = "abcdefghijklmnopqrstuvwxyz";
let newalpha = "";



eBtn.addEventListener("click", (e) => {
    e.preventDefault()
    const text = e.target.parentElement.querySelector("input").value
    let ans = encode(text)
    e.target.parentElement.nextElementSibling.nextElementSibling.value = ans

})


dBtn.addEventListener("click", (e) => {
    e.preventDefault()
    const text = e.target.parentElement.querySelector("input").value
    let ans = decode(text)
    e.target.parentElement.nextElementSibling.nextElementSibling.value = ans
})


function shift() {
    for (let i = 0; i < alphabet.length; i++) {
        let offset = (i + 4) % alphabet.length;
        newalpha += alphabet[offset];
    }
}


function encode(message) {

    shift();
    let result = "";
    message = message.toLowerCase();
    for (let i = 0; i < message.length; i++) {
        if (message[i] !== ' ') {
            let index = alphabet.indexOf(message[i]);
            result += newalpha[index];
        }
        else{
            result += ' ';
        }
    }
    return result
}


function decode(message2) {

    shift();
    let result = "";
    message2 = message2.toLowerCase();
    for (let i = 0; i < message2.length; i++) {
        if (message2[i] !== ' ') {
            let index = newalpha.indexOf(message2[i]);
            result += alphabet[index];
        }
        else{
            result += ' ';
        }
    }
    return result
}
