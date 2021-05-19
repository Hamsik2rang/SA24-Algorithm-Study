using System;
using System.Text;
using System.Linq;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            Double n = Convert.ToDouble(Console.ReadLine());
            Double low = 1;
            Double high = n;
            Double mid;
            while(true)
            {          
                mid = Math.Truncate((low + high) / 2);
                if (mid * mid == n)
                {
                    Console.WriteLine(mid);
                    break;
                }
                else if (mid * mid > n)
                {
                    high = mid - 1.0;
                }
                else if (mid * mid < n)
                {
                    low = mid + 1.0;
                }
            }
            

        }
    }
}