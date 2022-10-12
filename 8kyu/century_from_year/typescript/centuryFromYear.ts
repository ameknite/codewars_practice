export const centuryFromYear = (year: number): number => {
  return Math.trunc((year + 99) / 100);
};
