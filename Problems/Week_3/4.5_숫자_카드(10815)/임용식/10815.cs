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
                sb.Append((Array.BinarySearch(arr, i) < 0 ? 0 : 1) + " ");
            }

            Console.WriteLine(sb);
        }
    }
}