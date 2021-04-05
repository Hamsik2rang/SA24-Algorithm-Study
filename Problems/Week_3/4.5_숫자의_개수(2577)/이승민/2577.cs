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

            string[] words = A.Split(new string[] { "0" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "1" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "2" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "3" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "4" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "5" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "6" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "7" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "8" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

            words = A.Split(new string[] { "9" }, StringSplitOptions.None);
            Console.WriteLine(words.Length - 1);

        }
    }
}