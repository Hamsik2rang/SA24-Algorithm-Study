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
            int n2 = 0;
            int n1 = 1;
            int n = 0;
            for (int i = 0; i < N; i++)
            {
                n = n2 + n1;
                n2 = n1;
                n1 = n;
            }
            Console.WriteLine(n2);

        }

    }
    

}