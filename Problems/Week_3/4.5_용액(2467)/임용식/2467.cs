using System;

namespace AlgoCSharp
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            Console.ReadLine();
            int[] arr           = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            int left            = 0;
            int right           = arr.Length-1;
            int minOfMixedPH    = Math.Abs(arr[left]+arr[right]);
            int[] answer        = new int[2]{arr[left],arr[right] };
            
            while (left < right)
            {
                int curMixedPH = arr[left]+arr[right];
                if(minOfMixedPH > Math.Abs(curMixedPH))
                {
                    minOfMixedPH = Math.Abs(curMixedPH);
                    answer[0] = arr[left];
                    answer[1] = arr[right];
                }

                if (curMixedPH < 0)
                {
                    left++;
                }
                else if(curMixedPH > 0)
                {
                    right--;
                }
                else
                {
                    break;
                }
            }

            Console.WriteLine($"{answer[0]} {answer[1]}");
        }
    }
}