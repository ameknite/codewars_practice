using System.Linq;

public static class Kata
{
    public static int GetVowelCount(string str)
    {
        return str.Where(x => "aeiou".Contains(x)).Count();
    }
}
