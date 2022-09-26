export class Challenge {
  static solution(number: number) {
    if (number < 0) {
      return 0;
    }
    return Array(number).fill(0).map((_, i) => i).filter((x) =>
      x % 3 == 0 || x % 5 == 0
    ).reduce((prev, curr) => prev + curr, 0);
  }
}
