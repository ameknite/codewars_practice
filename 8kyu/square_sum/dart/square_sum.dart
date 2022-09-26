int squareSum(List<int> numbers) {
  return numbers
      .map((e) => e * e)
      .fold(0, (previousValue, element) => previousValue + element);
}
