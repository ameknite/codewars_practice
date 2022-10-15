export class Kata {
  static squareDigits(num: number): number {
    return parseInt(
      [...num.toString()].map((c) => Math.pow(parseInt(c), 2)).join(""),
    );
  }
}
