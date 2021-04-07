using System;
using System.Text;
using System.Collections.Generic;


namespace AlgoCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            var sb = new StringBuilder();
            // Index 0 is Num of Title, and 1 is count of User Powers.
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            var title = new Dictionary<int, string>();
            var titleScore = new int[input[0]];

            for (int i = 0; i < titleScore.Length; i++)
            {
                string[] temp = Console.ReadLine().Split();
                titleScore[i] = Convert.ToInt32(temp[1]);
                if (title.ContainsKey(titleScore[i]))
                {
                    continue;
                }
                title[titleScore[i]] = temp[0];
            }

            for (int i = 0; i < input[1]; i++)
            {
                int userPower = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32)[0];
                sb.Append(title[TitleSearch(titleScore, userPower)] + (i == input[1] - 1 ? "" : "\n"));
            }
            Console.WriteLine(sb);
        }

        static int TitleSearch(in int[] titleScore, in int userPower)
        {
            int left = 0, right = titleScore.Length-1;
            int maxScoreTitle = titleScore[right];
            while (left <= right)
            {
                int mid = (left+right)/2;

                if (titleScore[mid] == userPower)
                {
                    return titleScore[mid];
                }
                else if (titleScore[mid] > userPower)
                {
                    maxScoreTitle = titleScore[mid];
                    right = mid - 1;
                }
                else
                {
                    maxScoreTitle = titleScore[mid + 1];
                    left = mid + 1;
                }
            }
            return maxScoreTitle;
        }
    }
}