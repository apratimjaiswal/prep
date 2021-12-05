function isSumInsideTree(node, sum) {
  if (!node) return false;
  sum = sum - node.value;

  if (!node.left && !node.right) {
    console.log(" ** SUM ** ", sum);
    return sum === 0;
  } else {
    return isSumInsideTree(node.left, sum) + isSumInsideTree(node.right, sum);
  }
}

let tree = {
  value: 5,
  left: {
    value: 4,
    left: {
      value: 11,
      left: {
        value: 7,
      },
      right: {
        value: 2,
      },
    },
  },
  right: {
    value: 8,
    left: {
      value: 13,
    },
    right: {
      value: 4,
      right: {
        value: 1,
      },
    },
  },
};

let sum = 26;
isSumInsideTree(tree, sum) ? console.log("True") : console.log("False");

/**
 * Tree is given and a "Sum" is given
 * Find whether this sum is given along on of Tree's Paths
 */
