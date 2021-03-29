using System;
using System.Text;

namespace 백준1
{
    class mainprogram
    {
        static void Main(string[] args)
        {
            int n = Int32.Parse(Console.ReadLine());
            int[] queue = new int[n];
            short queuepointer = 0; //스택은 데이터의 출입이지만 여기선 들어갈 자리만 해당함
            StringBuilder sb = new StringBuilder();

            while (n-- != 0)
            {
                string[] command = Console.ReadLine().Split(' ');

                switch (command[0])
                {
                    case "push":
                        queue[queuepointer++] = Int32.Parse(command[1]);
                        break;
                    case "pop":
                        if (queuepointer == 0)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(queue[0] + "\n");
                            for (int i = 0; i < queuepointer; i++)
                            {
                                queue[i] = queue[i + 1];
                            }
                            --queuepointer;

                        }
                        break;
                    case "size":
                        sb.Append(queuepointer + "\n");
                        break;
                    case "empty":
                        if (queuepointer == 0)
                        {
                            sb.Append(1 + "\n");
                        }
                        else
                        {
                            sb.Append(0 + "\n");
                        }
                        break;
                    case "front":
                        if (queuepointer == 0)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(queue[0] + "\n");
                        }
                        break;
                    case "back":
                        if (queuepointer == 0)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(queue[queuepointer-1] + "\n");
                        }
                        break;
                }


            }

            Console.WriteLine(sb);

        }
    }
}
