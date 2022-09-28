export class Kata {
  static disemvowel(str: string): string {
    return [...str].filter((c) => !"aeiouAEIOU".includes(c)).join("");
  }
}
