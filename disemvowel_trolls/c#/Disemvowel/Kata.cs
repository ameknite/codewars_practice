using System;
using System.Linq;

public static class Kata
{
    public static string Disemvowel(string str)
    {
        return String.Join("", str.Where(c => !"aeiouAEIOU".Contains(c)));
    }
}
