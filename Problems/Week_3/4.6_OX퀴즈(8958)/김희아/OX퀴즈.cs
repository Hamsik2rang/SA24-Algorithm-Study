using System;
using System.Collections.Generic;

namespace _20210406
{
    class OX퀴즈
    {
        static void Main(string[] args)
        {
            int num = Convert.ToInt32(Console.ReadLine());
            List<String> oxlist = new List<String>();
            for (int i = 0; i < num; i++)
            {
                oxlist.Add(Console.ReadLine());
            }

            int count = 0;
            int answer = 0;

            for (int i = 0; i < oxlist.Count; i++)
            {
                count = 0;
                answer = 0;
                for (int j = 0; j < oxlist[i].Length; j++)
                {
                    if (oxlist[i].Substring(j, 1) == "O")
                    {
                        count += 1;
                        answer += count;
                    }
                    else
                    {
                        count = 0;
                    }
                }
                Console.WriteLine(answer);
            }
        }
    }
}
