function max(a, b) {
  return a > b ? a : b;
}
function knapsack(weights, profits, weight_of_bag) {
  var table = new Array(weights + 1);
  for (var i = 0; i < profits.length + 1; i++) {
    table[i] = new Array(weight_of_bag + 1);
    for (var w = 0; w <= weight_of_bag; w++) {
      if (i == 0 || w == 0) {
        table[i][w] = 0;
      } else if (weights[i - 1] <= w) {
        table[i][w] = max(
          profits[i - 1] + table[i - 1][w - weights[i - 1]],
          table[i - 1][w]
        );
      } else {
        table[i][w] = table[i - 1][w];
      }
    }
  }
  console.log(table);
}

// Test case 1
// const weights1 = [2, 3, 6, 7];
// const profits1 = [1, 4, 5, 6];
// const weight_of_bag1 = 10;
// knapsack(weights1, profits1, weight_of_bag1);

// Test case 2
const weights2 = [5, 3, 4, 2];
const profits2 = [6, 5, 7, 3];
const weight_of_bag2 = 5;
knapsack(weights2, profits2, weight_of_bag2);
