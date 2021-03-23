using System;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string[] ABC = Console.ReadLine().Split(' ');

            int A = int.Parse(ABC[0]);
            int B = int.Parse(ABC[1]);
            int C = int.Parse(ABC[2]);

            Console.WriteLine(((A + B) % C).ToString());
            Console.WriteLine((((A % C) + (B % C)) % C).ToString());
            Console.WriteLine(((A*B) % C).ToString());
            Console.WriteLine((((A % C) * (B % C)) % C).ToString());

        }
    }
}

