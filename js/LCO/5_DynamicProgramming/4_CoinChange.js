function coinChange(amount, demonimations) {
  var table = new Array(amount + 1).fill(0);
  table[0] = 1;
  for (var i = 0; i < demonimations.length; i++) {
    for (var j = demonimations[0]; j <= amount; j++) {
      table[j] = table[j] + table[j - demonimations[i]];
    }
  }
  console.log(table);
  console.log("The number of ways we can make change: ", table[amount]);
}

let amount = 10;
let demonimations = [1, 5, 10];
coinChange(amount, demonimations);
