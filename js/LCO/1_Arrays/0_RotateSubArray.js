let M = 3,
  N = 3;
let arr = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9],
];

let x = 1,
  y = 2;

let size = 9;
let tempArr = [];

for (let i = 0; i < M; i++) {
  for (let j = 0; j < N; j++) {
    if (i > x || (i === x && j >= y)) {
      tempArr.push(arr[i][j]);
    }
  }
}
console.log("Temp array:", tempArr);

// Reversing the array
tempArr.reverse();
console.log("Reversed Temp array:", tempArr);

let q = 0;
for (let i = 0; i < M; i++) {
  for (let j = 0; j < N; j++) {
    if (i > x || (i === x && j >= y)) {
      arr[i][j] = tempArr[q++];
    }
  }
}
console.log("Swapped array: ", arr);
