let count = 0;

let getData = () => {
  // Calls an API and fetches Data
  console.log("Hi");
};

let Debounce = (fn, delay) => {
  let timer;
  return function () {
    let context = this,
      args = arguments;
    clearTimeout(timer);
    timer = setTimeout(() => {
      fn.apply(context, args);
    }, delay);
  };
};

let betterFunc = Debounce(getData, 300);
