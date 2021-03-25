using System;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string[] HM = Console.ReadLine().Split(' ');

            int H = int.Parse(HM[0]);
            int M = int.Parse(HM[1]) - 45;

            if (M < 0)
            {
                M = M + 60;
                --H;
                if (H < 0)
                {
                    H = H + 24;
                }
            }

            Console.WriteLine(H + " " + M);


        }
    }
}

