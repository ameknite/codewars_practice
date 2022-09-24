using System;
using System.Collections.Generic;
using System.Linq;

public class Kata
{
    public static int[] CountPositivesSumNegatives(int[] input)
    {
        if (input == null || input.Length == 0)
        {
            return new int[] { };
        }
        int count = input.Where(x => x > 0).Count();
        int sum = input.Where(x => x < 0).Sum();
        return new int[] { count, sum };
    }
}
