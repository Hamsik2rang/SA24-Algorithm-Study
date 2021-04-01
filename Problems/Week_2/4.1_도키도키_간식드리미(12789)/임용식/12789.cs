using System;
using System.Collections.Generic;

namespace AlgoCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            var q               = new Queue<int>();
            var tempLine        = new Stack<int>();
            int n               = Convert.ToInt32(Console.ReadLine());
            int[] personCount   = Array.ConvertAll(Console.ReadLine().Split(), s => Convert.ToInt32(s));

            foreach (var i in personCount)
            {
                q.Enqueue(i);
            }

            int num = 1;

            while (num <= n)
            {
                if (q.Count == 0 && tempLine.Peek() != num)
                {
                    Console.Write("Sad");
                    return;
                }
                if (q.Count != 0 && q.Peek() == num)
                {
                    q.Dequeue();
                    num++;
                }
                else if (tempLine.Count != 0 && tempLine.Peek() == num)
                {
                    tempLine.Pop();
                    num++;
                }
                else
                {
                    while (q.Count > 0 && q.Peek() != num)
                    {
                        tempLine.Push(q.Dequeue());
                    }
                }
            }
            Console.Write("Nice");
        }
    }
}
