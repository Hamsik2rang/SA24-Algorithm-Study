using System;
using System.Collections.Generic;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            Stack<int> stack = new Stack<int>();
            int N = Int32.Parse(Console.ReadLine());
            string[] L = Console.ReadLine().Split(' ');
            int[] line = new int[N];
            int snack = 0;
            for (int i = 0; i < N; i++)
            {
                line[i] = Int32.Parse(L[i]);
                if (line[i] == snack + 1 ) //현재 라인의 번호표가 맞음
                {
                    snack++;
                }
                else //현재라인이 안맞음
                {
                    if (stack.Count == 0) //다른줄에 사람이 없을경우 예외처리
                    {
                        stack.Push(line[i]);
                    }
                    else if (stack.Peek() == snack + 1) //다른줄 번호표가 맞음 
                    {
                        snack++;
                        stack.Pop();

                    }
                    else
                    {
                        stack.Push(line[i]);
                    }

                }
                line[i] = 0;

            }
            while(stack.Count != 0)
            {
                if (stack.Peek() == snack + 1) //다른줄 번호표가 맞음 
                {
                    snack++;
                    stack.Pop();

                }
                else
                {
                    break; 
                }
            }

            if (stack.Count == 0)
            {
                Console.WriteLine("Nice");
            }             
            else
            {
                Console.WriteLine("Sad");
            }


        }
    }
}

