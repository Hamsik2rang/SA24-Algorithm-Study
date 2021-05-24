using System;
using System.Text;
namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            int M = int.Parse(Console.ReadLine());
            string [] y = Console.ReadLine().Split(' ');
            int[] x = new int[M];
            for (int i = 0; i < y.Length; i++)
            {
                x[i] = Convert.ToInt32(y[i]); 
            }
            int H = x[0];

            if (N - x[M - 1] > H)
            {
                H = N - x[M - 1];
            }

            for (int i = 1; i < M; i++)
            {
                if ((x[i] - x[i - 1]) > H)
                {
                    H = x[i + 1] - (x[i]);
                }
            }

            Console.WriteLine(H);

        }
    }
}

