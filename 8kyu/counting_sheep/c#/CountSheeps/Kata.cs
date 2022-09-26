using System.Linq;

public static class Kata
{
    public static int CountSheeps(bool[] sheeps)
    {
        return sheeps.Where(x => x).Count();
    }
}
