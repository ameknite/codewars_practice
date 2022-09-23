function nextItem(xs, item) {
  const iter = xs[Symbol.iterator]();
  for (const x of iter) {
    if (x == item) {
      return iter.next().value;
    }
  }
}
