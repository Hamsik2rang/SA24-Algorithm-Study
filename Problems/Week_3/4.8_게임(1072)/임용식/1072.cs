using System;

namespace AlgoCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Func<(long, long)> GetInput = () =>
            {
                var temp = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt64);
                return (temp[0], temp[1]);
            };

            var (x, y) = GetInput();

            if (y * 100 / x >= 99)
            {
                Console.WriteLine(-1);
                return;
            }

            Console.WriteLine(GameSearch(0, 10_0000_0000, x, y));
        }

        static int GameSearch(int low, int max, in long x, in long y)
        {
            int mid = (low+max)/2;

            if (low > max)
            {
                return low;
            }
            long newRate = (y+mid)*100/(x+mid);
            if (newRate > y * 100 / x)
            {
                max = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
            return GameSearch(low, max, x, y);
        }
    }
}