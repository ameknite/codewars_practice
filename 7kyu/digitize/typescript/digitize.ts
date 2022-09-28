export const digitize = (n: number): number[] => {
  if (n == 0) {
      return [0];
  }
  let output: number[] = [];
  while (n != 0) {
    output.push(n % 10);
    n = Math.trunc(n / 10);
  }
  return output;
};
