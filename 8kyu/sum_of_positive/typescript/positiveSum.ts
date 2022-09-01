export function positiveSum(arr: number[]): number {
    return arr.filter(x => x > 0).reduce((prev, curr) => prev + curr, 0);
}
