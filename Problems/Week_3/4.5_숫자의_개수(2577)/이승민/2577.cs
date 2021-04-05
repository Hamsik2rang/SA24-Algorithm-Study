using System;
using System.Text;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
           
            int[] ABC = new int[3];

            for (int i = 0; i < 3; i++)
            {
                ABC[i] = Int32.Parse(Console.ReadLine());
            }
            string A = Convert.ToString(ABC[0]* ABC[1]* ABC[2]);

            for (int i = 0; i < 10; i++)
            {
                string[] words = A.Split(new string[] { Convert.ToString(i) }, StringSplitOptions.None);
                Console.WriteLine(words.Length - 1);
            }
        }
    }
}