using System;
using System.Text;
using System.Linq;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int N = Convert.ToInt32(Console.ReadLine());
            int sum = 1;
            for (int M = 0; M < N; M++)
            {
                sum *= N - M;
            }
            Console.WriteLine(sum);
        }

    }

}