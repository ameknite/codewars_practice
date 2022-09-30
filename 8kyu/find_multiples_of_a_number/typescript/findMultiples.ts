export function findMultiples(integer: number, limit: number): number[] {
  return Array.from(
    { length: Math.trunc(limit / integer) },
    (_, i) => (i + 1) * integer,
  );
}
