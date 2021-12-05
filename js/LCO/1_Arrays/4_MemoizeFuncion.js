function memoise(fn) {
  var cache = {};
  return function () {
    const key = JSON.stringify(arguments);
    if (cache[key]) {
      console.log("already there", cache[key]);
      return cache[key];
    } else {
      val = fn.apply(null, arguments);
      cache[key] = val;
      console.log("its new", val);
      return val;
    }
  };
}
