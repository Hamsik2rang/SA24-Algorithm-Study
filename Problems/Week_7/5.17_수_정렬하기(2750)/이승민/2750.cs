using System;
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
        static void Swap(ref int x,ref int y, int temp)
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
                    Swap(ref list[low],ref list[high], temp);
                }
            } while (low < high);

            Swap(ref list[left],ref list[high], temp);

            return high;
        }

        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            int[] list = new int[N];
            //원소 입력
            for (int i = 0; i < N; i++)
            {
              list[i] = Int32.Parse(Console.ReadLine());
            }

            Quick_sort(ref list, 0, N-1);

            for (int i = 0; i < N; i++)
            {
                Console.WriteLine(list[i]);
            }
        }

    }
}