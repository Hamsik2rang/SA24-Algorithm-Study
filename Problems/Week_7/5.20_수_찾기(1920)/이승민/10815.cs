/*using System;
using System.Text;
using System.Linq;

namespace 백준1
{
    class MainProgram
    {

        static void Quick_sort(ref int[] list, int left, int right)
        {

            if (left < right)
            {
                int q = partition(ref list, left, right);

                Quick_sort(ref list, left, q - 1);
                Quick_sort(ref list, q + 1, right);
            }

        }
        static void Swap(ref int x, ref int y, int temp)
        {
            temp = x;
            x = y;
            y = temp;
        }

        static int partition(ref int[] list, int left, int right)
        {
            int pivot, temp = 0;
            int low, high;

            low = left;
            high = right + 1;
            pivot = list[left];
            do
            {
                do
                {
                    low++;
                } while (low <= right && list[low] < pivot);

                do
                {
                    high--;
                } while (high >= left && list[high] > pivot);

                if (low < high)
                {
                    Swap(ref list[low], ref list[high], temp);
                }
            } while (low < high);

            Swap(ref list[left], ref list[high], temp);

            return high;
        }

        static bool BinarySearch(int[] arr, int size, int target)
        {
            int left = 0;
            int right = size - 1;
            while (left <= right)
            {
                int mid = (left + right) / 2;

                if (arr[mid] == target)
                {
                    return true;
                }
                else if(arr[mid] < target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }

            return false;
        }

        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            string[] Ns = Console.ReadLine().Split(' ');
            int[] NN = new int[Ns.Length];

            int M = int.Parse(Console.ReadLine());
            string[] Ms = Console.ReadLine().Split(' ');
            int[] MM = new int[Ms.Length];

            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < Ns.Length; i++)
            {
                NN[i] = int.Parse(Ns[i]);
            }

            for (int i = 0; i < Ms.Length; i++)
            {
                MM[i] = int.Parse(Ms[i]);
            }

            Quick_sort(ref NN, 0, N - 1);


            for (int i = 0; i < MM.Length; i++)
            {
                if(BinarySearch(NN, NN.Length, MM[i]))
                {
                    sb.Append("1 ");
                }
                else
                {
                    sb.Append("0 ");
                }
            }

            Console.WriteLine(sb);
        }
    }
}*/