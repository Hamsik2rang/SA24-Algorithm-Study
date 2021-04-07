using System;

namespace AlgoCSharp
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            int[] score = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            int n       = input[0];
            int k       = input[1];

            int minPossibleScore = 0, maxPossibleScore = n * 20;

            while (minPossibleScore < maxPossibleScore - 1)
            {
                int mid = (minPossibleScore + maxPossibleScore)/2;
                int groupCount = 0, groupScore= 0;
                for (int i = 0; i < n; i++)
                {
                    groupScore += score[i];
                    if (groupScore >= mid)
                    {
                        groupCount++;
                        groupScore = 0;
                    }
                }

                if (groupCount >= k)
                {
                    minPossibleScore = mid;
                }
                else
                {
                    maxPossibleScore = mid;
                }
            }

            Console.WriteLine(minPossibleScore);
        }
    }
}