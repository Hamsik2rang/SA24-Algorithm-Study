using System;
using System.Text;
using System.Linq;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string[] abc = Console.ReadLine().Split(' ');
            int [] ABC = new int[3];
            for (int i = 0; i < ABC.Length; i++)
            {
                ABC[i] = int.Parse(abc[i]);
            }


            if((ABC[2] - ABC[1]) <= 0 )
            { 
                Console.WriteLine("-1");
            }
            else if(ABC[2] != ABC[1])
            {
                int a = ABC[0] / (ABC[2] - ABC[1]) + 1;
                Console.WriteLine(a);
            }

        }
    }
}

