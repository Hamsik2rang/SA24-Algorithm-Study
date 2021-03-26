using System;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string[] n = Console.ReadLine().Split(' ');
            Console.WriteLine(int.Parse(n[1]) * int.Parse(n[0]) - 1);
          
        }
    }
}

