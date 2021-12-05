function checkIfIdenticalTrees(p, q) {
  if (!p && !q) return "true";

  if (p != undefined && q != undefined) {
    return (
      p.value === q.value &&
      checkIfIdenticalTrees(p.left, q.left) &&
      checkIfIdenticalTrees(p.right, q.right)
    );
  }
  return "false";
}

let result = [];

let tree1 = {
  value: 3,
  left: {
    value: 9,
    left: {
      value: 1,
    },
    right: {
      value: 2,
    },
  },
  right: {
    value: 20,
    left: {
      value: 15,
    },
    right: {
      value: 7,
    },
  },
};

let tree2 = {
  value: 3,
  left: {
    value: 9,
    left: {
      value: 1,
    },
    right: {
      value: 2,
    },
  },
  right: {
    value: 20,
    left: {
      value: 15,
    },
    right: {
      value: 7,
    },
  },
};

console.log(checkIfIdenticalTrees(tree1, tree2));
// console.log("Length of Tree ", result.length);
// while (result.length != 0) {
//   //   console.log(result.pop()); //  LOT from BOTTOM to TOP
//   console.log(result.shift()); //  LOT from TOP to BOTTOM
// }
