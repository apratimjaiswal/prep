function largetSumOfSubset_ADJACENT_NUMBERS(arr) {
  var currentSum = arr[0],
    globalSum = 0;
  for (var i = 0; i < arr.length; i++) {
    currentSum += arr[i];
    if (currentSum < 0) currentSum = arr[i];
    if (globalSum < currentSum) globalSum = currentSum;
  }
  return globalSum;
}

const arr = [-4, 2, -5, 1, 2, 3, 6, -5, 1];
console.log(largetSumOfSubset_ADJACENT_NUMBERS(arr));
