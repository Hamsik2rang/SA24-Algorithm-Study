using System;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            for(int i = 1; i <= N; i++) //줄
            {
                for (int k = 0; k < N-i; k++) 
                {
                    Console.Write(" ");


                }
                for (int j = 0; j < i; j++) 
                {
                    Console.Write("*");

                }

                Console.Write("\n");
            }
        }
    }
}

