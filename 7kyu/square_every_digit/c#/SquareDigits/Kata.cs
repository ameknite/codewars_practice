using System;
using System.Linq;

public class Kata
{
    public static int SquareDigits(int n)
    {
        return Int32.Parse(String.Concat(n.ToString().Select(c => (int)Math.Pow(char.GetNumericValue(c), 2))));
    }
}
