/*using System;
using System.Text;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string []NX = Console.ReadLine().Split(' ');

            int [] sequence = new int[Int32.Parse(NX[0])];
            int k = Int32.Parse(NX[1]);
            StringBuilder sb = new StringBuilder();

            string[] se = Console.ReadLine().Split(' ');
            
            for (int i = 0; i < se.Length; i++)
            {
                sequence[i] = Int32.Parse(se[i]);
                if (sequence[i] < k)
                {
                    sb.Append(sequence[i] + " ");
                }
            }

            Console.WriteLine(sb);

        }

    }

    
}

*/