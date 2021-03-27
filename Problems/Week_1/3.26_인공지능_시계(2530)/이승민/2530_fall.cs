using System;

namespace 백준1
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            string[] ABC = Console.ReadLine().Split(' ');
            string d = Console.ReadLine();
            int D = int.Parse(d);

            int[] time = new int[3];
            for (int i = 0; i < 3; i++ )
            {
                time[i] = int.Parse(ABC[i]);
            }

            time[0] += D / 3600;
            D = D % 3600;

            time[1] += D / 60;
            D = D % 60;

            time[2] += D;

            if(time[2]>=60)
            {
                time[2] -= 60;
                time[1] += 1;
                
            }
            if (time[1] >= 60)
            {
                time[1] -= 60;
                time[0] += 1;
                
            }
            if (time[0] >= 24)
            {
                time[0] -= 24;
            }

            Console.WriteLine(time[0] + " " + time[1] + " " + time[2]);


        }
    }
}


