function max(a, b) {
  return a > b ? a : b;
}

function largetSum_NON_ADJACENT_NUMBERS(arr) {
  var r = new Array(arr.length);
  r[0] = arr[0];
  var last = 0,
    secondLast = 0;

  for (var i = 1; i < arr.length; i++) {
    last = i - 1;
    secondLast = i - 2;
    if (secondLast > -1) {
      r[i] = max(r[last], r[secondLast] + arr[i]);
    } else {
      r[i] = r[last];
    }
  }
  console.log(r);
}

const arr = [1, -1, 6, -4, 2, 2];
largetSum_NON_ADJACENT_NUMBERS(arr);
// console.log(largetSum_NON_ADJACENT_NUMBERS(arr));
