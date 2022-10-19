using System.Numerics;

public class Kata
{
    public static int CountBits(int n)
    {
        return BitOperations.PopCount((uint)n);
    }
}
