export function countSheeps(arrayOfSheep: (boolean | undefined | null)[]): Number {
    return arrayOfSheep.filter(x => x).length;
}
