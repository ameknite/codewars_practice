import 'dart:math';

int findSmallestInt(List<int> arr) {
  return arr.reduce((value, element) => min(value, element));
}
