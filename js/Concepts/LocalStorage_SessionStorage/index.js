let refreshCount = 0;

refreshCount = sessionStorage.getItem("refreshCount");

let count = 0;
if (refreshCount) {
  count = parseInt(refreshCount);
  count++;
}

sessionStorage.setItem("refreshCount", count);

const spanCount = document.querySelector("#refresh-count");
spanCount.innerHTML = count;

// Saving OBJECT in sessionStorage
const user = { name: "Apratim" };
sessionStorage.setItem("user", JSON.stringify(user));
const getUser = JSON.parse(sessionStorage.getItem("user"));

const spanName = document.querySelector("#user");
spanName.innerHTML = getUser.name;

// Cookie
document.cookie.split(";").map((cookie) => cookie.split("="));
// console.log(document.cookie.split(";").map((cookie) => cookie.split("=")));
// console.log(document.cookie);
document.cookie
  .split(";")
  .map((cookie) => cookie.split("="))
  .reduce(
    (accumulator, [key, value]) => ({
      ...accumulator,
      [key.trim()]: decodeURIComponent(value),
    }),
    {}
  );
