using System;
using System.Collections.Generic;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), s => Convert.ToInt32(s));
            long count  = 0;
            var bucket  = new Queue<int>[21];
            for (int i = 1; i <= 20; i++)
            {
                bucket[i] = new Queue<int>();
            }
            for (int i = 1; i <= input[0]; i++)
            {
                string name = Console.ReadLine();
                while (bucket[name.Length].Count != 0 && i - bucket[name.Length].Peek() > input[1])
                {
                    bucket[name.Length].Dequeue();
                }
                count += bucket[name.Length].Count;
                bucket[name.Length].Enqueue(i);
            }

            Console.WriteLine(count);
        }
    }
}