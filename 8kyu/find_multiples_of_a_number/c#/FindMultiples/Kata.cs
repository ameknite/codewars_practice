using System.Linq;
using System.Collections.Generic;

public class Kata
{
    public static List<int> FindMultiples(int integer, int limit)
    {
        return Enumerable.Range(1, limit / integer).Select(x => x * integer).ToList();
    }
}
