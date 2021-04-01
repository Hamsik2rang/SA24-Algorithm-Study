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
                    while (stack.Count != 0 && stack.Peek() == snack + 1)
                    {
                        //스택도 확인, 비어있을 경우도 고려
                        snack++;
                        stack.Pop();
                    }
                }
                else //현재라인이 안맞음
                {
                    stack.Push(line[i]); //현재 라인을 스택에 넣음
                }
            }
            Console.WriteLine(stack.Count == 0 ? "Nice" : "Sad");
        }
    }
}