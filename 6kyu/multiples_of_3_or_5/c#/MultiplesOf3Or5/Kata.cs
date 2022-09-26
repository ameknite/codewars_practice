using System.Linq;

public static class Kata
{
    public static int Solution(int value)
    {

        return value <= 0 ? 0 : Enumerable.Range(1, value - 1).Where(x => (x % 3 == 0 || x % 5 == 0)).Sum();
    }
}
