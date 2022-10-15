int getCount(String inputStr) {
  return inputStr.runes
      .where((e) => "aeiou".contains(String.fromCharCode(e)))
      .length;
}
