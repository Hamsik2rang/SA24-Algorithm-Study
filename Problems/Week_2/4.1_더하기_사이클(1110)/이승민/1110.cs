using System;
using System.Text;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            int cycle = 0;
            int origin = N;

            while (true){
                cycle++; //회차
                int M = (N % 10)*10; //새로운 수의 십의자리
                N = M + (N / 10 + N % 10) % 10; //새로운 수

                if (N == origin)
                {
                    break;
                }

            }
            Console.WriteLine(cycle);
        }
    }
}

