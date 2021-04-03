using System;
using System.Text;
using System.Collections.Generic;


namespace AlgoCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb    = new StringBuilder();
            const int left      = 0;
            const int right     = 1;

            // Key is arrival time, and value is index.
            var q               = new Queue<KeyValuePair<int, int>>[2]{new Queue<KeyValuePair<int, int>>(),new Queue<KeyValuePair<int, int>>()};
            // Index 0 is M, 1 is t, 2 is N.
            int[] input         = Array.ConvertAll(Console.ReadLine().Split(), s => Convert.ToInt32(s));
            long[] arrivalTime  = new long[input[2]];

            for (int i = 0; i < input[2]; i++)
            {
                string[] passenger = Console.ReadLine().Split();
                if (passenger[1].Equals("left"))
                {
                    q[left].Enqueue(KeyValuePair.Create(Convert.ToInt32(passenger[0]), i));
                }
                else
                {
                    q[right].Enqueue(KeyValuePair.Create(Convert.ToInt32(passenger[0]), i));
                }
            }

            long time = 0;
            int anchor = left;
            while (q[left].Count + q[right].Count != 0)
            {
                var capacity = input[0];

                if (q[anchor].Count != 0 && q[anchor].Peek().Key <= time)
                {
                    while (q[anchor].Count > 0 && capacity > 0 && q[anchor].Peek().Key <= time)
                    {
                        arrivalTime[q[anchor].Dequeue().Value] = time + (long)input[1];
                        capacity--;
                    }
                }
                // There is no Passenger in current Anchorage, but next Passenger's arrival time is faster then Opposite one.
                // Do Nothing. Just Move the boat.
                else if (q[1 - anchor].Count == 0 || q[1 - anchor].Count != 0 && q[anchor].Count != 0 && (q[anchor].Peek().Key < q[1 - anchor].Peek().Key))
                {
                    time = q[anchor].Peek().Key;
                    while (q[anchor].Count > 0 && capacity > 0 && q[anchor].Peek().Key <= time)
                    {
                        arrivalTime[q[anchor].Dequeue().Value] = time + (long)input[1];
                        capacity--;
                    }
                }
                // Passenger's arrival time in current anchorage is later then another or No passenger will arrive this one.
                else
                {
                    time = q[1 - anchor].Peek().Key > time ? q[1 - anchor].Peek().Key : time;
                }
                time += (long)input[1];
                anchor = 1 - anchor;
            }
            for (int i = 0; i < arrivalTime.Length; i++)
            {
                sb.Append(arrivalTime[i] + "\n");
            }
            Console.Write(sb);
        }
    }
}