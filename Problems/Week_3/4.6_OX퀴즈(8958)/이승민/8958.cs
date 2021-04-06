using System;
using System.Text;
using System.Collections;
using System.Linq;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {

            int N = Int32.Parse(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < N; i++)
            {
                int a = 0; //누적점수
                int b = 1; //연속된 O의 수
                char[] ox = Console.ReadLine().ToArray();
                for (int k = 0; k < ox.Length; k++)
                {
                    if (ox[k] == 'O')
                    {
                        a += b;
                        b++;
                    }
                    else
                        b = 1;
                }
                sb.Append(a + "\n");
            }
            Console.WriteLine(sb);
        }
    }
}