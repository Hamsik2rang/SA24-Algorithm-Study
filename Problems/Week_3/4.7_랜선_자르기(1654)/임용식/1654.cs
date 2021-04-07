using System;

namespace AlgoCSharp
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int[] input     = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            long[] lan      = new long[input[0]];
            long minLength  = 1;
            long maxLength  = 0;

            for (int i = 0; i < lan.Length; i++)
            {
                lan[i] = Convert.ToInt64(Console.ReadLine().Split()[0]);
                maxLength = maxLength < lan[i] ? lan[i] : maxLength;
            }

            Console.WriteLine(GetMaxCutLength(lan, minLength, maxLength, (long)input[1]));
        }

        static long GetMaxCutLength(long[] lan, long minLength, long maxLength, long lanCount)
        {
            long cuttedLanCount = 0;
            if (minLength > maxLength)
            {
                return maxLength;
            }
            long cutPoint = (minLength + maxLength)/2;

            for (int i = 0; i < lan.Length; i++)
            {
                cuttedLanCount += lan[i] / cutPoint;
            }

            if (cuttedLanCount >= lanCount)
            {
                minLength = cutPoint+1;
            }
            else
            {
                maxLength = cutPoint-1;
            }
            return GetMaxCutLength(lan, minLength, maxLength, lanCount);
        }
    }
}