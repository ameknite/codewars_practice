export function countPositivesSumNegatives(input: null | number[]) {
  if (input === null || input.length == 0) {
    return [];
  }
  let count = input.filter((x) => x > 0).length;
  let sum = input.filter((x) => x < 0).reduce((arr, curr) => arr + curr, 0);
  return [count, sum];
}
