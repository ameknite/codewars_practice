int positiveSum(List<int> arr) {
  return arr
      .where((element) => !element.isNegative)
      .fold(0, (previousValue, element) => previousValue + element);
}
