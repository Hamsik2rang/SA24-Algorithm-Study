using System;
using System.Numerics;

namespace AlgoCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger bint = BigInteger.Parse(Console.ReadLine());

            Solution(1, bint);
        }

        static void Solution(BigInteger left, BigInteger right)
        {
            var target = right;
            while (left <= right)
            {
                BigInteger mid = (left+right)/2;
                var comp = BigInteger.Pow(mid,2);
                if (comp == target)
                {
                    Console.WriteLine(mid);
                    break;
                }
                else if (comp < target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
    }
}