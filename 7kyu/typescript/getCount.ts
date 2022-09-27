export class Kata {
  static getCount(str: string): number {
    return str.split("").filter((x) => "aeiou".includes(x)).length;
  }
}
