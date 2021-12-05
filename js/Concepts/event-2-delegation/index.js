// Single event listener attached
document.querySelector("#categories").addEventListener("click", (e) => {
  console.log(e.target.id);
  window.location.href = "/" + e.target.id;
});
