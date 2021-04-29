/*using System;
using System.Text;
using System.Linq;
namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int[] student = new int[30];

            for (int i = 0; i < 28; i++)
            {
                student[Convert.ToInt32(Console.ReadLine()) - 1] += 1;
            }

            for (int i = 0; i < 30; i++)
            {
                if (student[i] != 1)
                {
                    Console.WriteLine(i + 1);
                } 
            }

        }
    }
}*/