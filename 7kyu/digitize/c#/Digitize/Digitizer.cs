using System;
using System.Linq;
using System.Collections.Generic;

namespace Solution
{
    class Digitizer
    {
        public static long[] Digitize(long n)
        {
            if (n == 0)
            {
                return new long[] { 0 };
            }
            IEnumerable<long> output = new long[] { };
            while (n != 0)
            {
                output = output.Append(n % 10);
                n /= 10;
            }
            return output.ToArray();
        }
    }
}
