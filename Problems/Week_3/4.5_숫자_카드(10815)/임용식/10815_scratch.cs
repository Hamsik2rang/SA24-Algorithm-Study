using System;
using System.Text;


namespace AlgoCSharp
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            Console.ReadLine();
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            Console.ReadLine();
            int[] searchData = Array.ConvertAll(Console.ReadLine().Split(), Convert.ToInt32);
            Array.Sort(arr);

            foreach (var i in searchData)
            {
                sb.Append(BinarySearch(arr, 0, arr.Length - 1, i) + " ");
            }

            Console.WriteLine(sb);
        }

        static int BinarySearch(int[] arr, int left, int right, int value)
        {
            if (left > right)
            {
                return 0;
            }
            int mid = (left + right) / 2;

            if (arr[mid] == value)
            {
                return 1;
            }
            else if (arr[mid] > value)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }

            return BinarySearch(arr, left, right, value);
        }
    }
}