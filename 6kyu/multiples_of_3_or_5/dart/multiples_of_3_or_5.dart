int solution(int n) {
  return Iterable<int>.generate(n)
      .where((element) => element % 3 == 0 || element % 5 == 0)
      .fold(0, (previousValue, element) => previousValue + element);
}
