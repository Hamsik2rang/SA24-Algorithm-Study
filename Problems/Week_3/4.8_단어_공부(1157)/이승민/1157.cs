/*using System;
using System.Text;
using System.Collections;
using System.Linq;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string word = Console.ReadLine();
            char[] words = word.ToArray();
            int[] count = new int[26];
            
            for (int i = 0; i < words.Length; i++)
            {
                int a = words[i]; //정수로 형변환
                if (a < 91) //대문자, 65~90
                    count[a - 65] += 1;
                else //소문자, 97~ 122
                    count[a - 97] += 1;
            }
            int mani = count[0];
            int man = 65;
            int qe = 0;
            for (int i = 1; i < 26; i++)
            {
                if (mani < count[i])
                {
                    mani = count[i];
                    man = i + 65;
                    qe = 0;
                }
                else if(mani == count[i])
                {
                    qe = 1;
                }
            }
            if (qe == 1)
            {
                man = 63;
            }
            Console.WriteLine((char)man);

        }
    }
}

*/