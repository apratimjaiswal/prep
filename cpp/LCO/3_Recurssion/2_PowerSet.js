function PowerSet(str, i, result) {
  if (i === str.length) {
    console.log(result + " - ");
    return;
  }
  PowerSet(str, i + 1, result + str[i]);
  PowerSet(str, i + 1, result);
}

const inputString = "abc";
let index = 0;
let result = "";
PowerSet(inputString, index, result);
