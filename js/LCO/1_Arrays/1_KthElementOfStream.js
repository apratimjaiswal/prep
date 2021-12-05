function kthElementOfStream(stream, k) {
  let resultStream = [];
  let temp = new Array(k).fill(-1);

  for (let i = 0; i < k; i++) temp[i] = stream[i];
  temp.sort((a, b) => a - b);
  resultStream.push(temp[k - 1]);
  //   console.log("Temp is ", temp);
  //   console.log("Result is ", resultStream);

  let storej = 0;
  for (let j = 0; j < stream.length; j++) {
    storej = j;
    for (let i = 0; i < k; i++) {
      if (i < j) {
        temp[i] = stream[j];
      }
    }
    j = storej;
    temp.sort((a, b) => a - b);
    console.log("Temp is ", temp);
    resultStream.push(temp[k - 1]);
  }
  console.log("Result is ", resultStream);
}

let k = 4,
  n = 6;
let stream = [1, 2, 3, 4, 5, 6];
kthElementOfStream(stream, k);
