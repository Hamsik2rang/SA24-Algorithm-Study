using System;
using System.Text;
using System.Linq;


namespace 백준1

{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string str = Console.ReadLine();
            char[] Sword = str.ToArray();
            int[] alpa = new int[26];  //a 97~122 z
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < Sword.Length; i++)
            {
                alpa[(int)Sword[i] - 97]++;
            }

            for (int i = 0; i < alpa.Length; i++)
            {
                sb.Append(alpa[i]);
                sb.Append(" ");
            }
            Console.WriteLine(sb);
        }
    }
}

