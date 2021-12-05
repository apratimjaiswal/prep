// Event Handlers
function div1(e) {
  this.style.backgroundColor = "red";
}

function div2(e) {
  e.stopImmediatePropagation();
  this.style.backgroundColor = "blue";
}
function div2_2(e) {
  // e.stopPropagation();
  this.style.width = "250px";
}

const div3 = (e) => {
  this.style.backgroundColor = "green";
};

const divOne = document.getElementById("one");
const divTwo = document.getElementById("two");
const divThree = document.getElementById("three");

divOne.addEventListener("click", div1, false);
// divTwo - 2 Event handlers for the same "click" event
divTwo.addEventListener("click", div2, false);
divTwo.addEventListener("click", div2_2, false);
divThree.addEventListener("click", div3, false);
