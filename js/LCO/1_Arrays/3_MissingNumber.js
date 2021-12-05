// Function to get the missing number
function getMissingNo(a, n) {
  let totalN = n + 1;
  let total = Math.floor((totalN * (totalN + 1)) / 2);
  for (let i = 0; i < n; i++) total -= a[i];
  return total;
}

// Driver Code

let arr = [1, 2, 4, 5, 6];
let n = arr.length;
console.log(getMissingNo(arr, n));
