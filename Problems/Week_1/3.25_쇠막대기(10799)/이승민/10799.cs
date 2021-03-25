using System;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string word = Console.ReadLine();
            int stick = 0;
            int piece = 0;

            string[] words = new string[word.Length];
            for (int i = 0; i < word.Length; i++)
            {
                words[i] = word.Substring(i, 1);
            }
            for (int i = 0; i < word.Length; i++)
            {
                if (words[i] == "(")
                {
                    if(words[i+1] == "(")
                    stick++;
                }
                else if (words[i] == ")")
                {
                    if (words[i-1] == "(")
                    {
                        //레이저 라는 뜻
                        if (stick > 0)
                        {
                            piece = piece + stick;
                        }

                    }
                    else if (words[i-1] == ")")
                    {
                        stick--;
                        piece++;
                    }
                }
            }
            Console.WriteLine(piece);
        }
    }
}

