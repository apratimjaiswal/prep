document.querySelector("#outer").addEventListener(
  "click",
  (e) => {
    console.log("Outer clicked");
  },
  true
); // Capturing

document.querySelector("#middle").addEventListener(
  "click",
  (e) => {
    // e.stopPropagation();
    console.log("Middle clicked");
  },
  false
); // Bubbling

document.querySelector("#inner").addEventListener(
  "click",
  (e) => {
    console.log("Inner clicked");
  },
  true
); //Capturing

// Random
const onChange = (e) => {
  console.log("Text entered");
};

const onSubmit = (e) => {
  document.querySelector("#text-box").value = "";
};
