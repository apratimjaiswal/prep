function ZigZag(node, level, result) {
  if (!node) return;

  if (result[level]) {
    result[level].push(node.value);
  } else {
    result[level] = [node.value];
  }

  ZigZag(node.left, level + 1, result);
  ZigZag(node.right, level + 1, result);
}

let result = [];

let node = {
  value: 1,
  left: {
    value: 2,
    left: {
      value: 3,
    },
    right: {
      value: 4,
    },
  },
  right: {
    value: 5,
    left: {
      value: 6,
    },
    right: {
      value: 7,
    },
  },
};

ZigZag(node, 0, result);

result = result.map((v, i) => {
  if (i % 2 != 0) {
    return v.reverse();
  } else {
    return v;
  }
});

while (result.length > 0) {
  console.log(result.shift());
}
