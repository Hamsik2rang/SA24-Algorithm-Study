using System;
using System.Text;

namespace 백준1
{
    class Mainprogram
    {
        static void Main(string[] args)
        {
            int N = Int32.Parse(Console.ReadLine());
            int[] deque = new int[2 * N];
            int front = N-1;
            int back = N;
            StringBuilder sb = new StringBuilder();

            while (N-- != 0)
            {
                string[] command = Console.ReadLine().Split(' ');

                switch (command[0])
                {
                    case "push_front":
                        deque[front--] = Int32.Parse(command[1]);
                        break;
                    case "push_back":
                        deque[back++] = Int32.Parse(command[1]);
                        break;
                    case "pop_front":
                        if (back - front == 1)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(deque[++front] + "\n");
                            deque[front] = 0;

                        }
                        break;
                    case "pop_back":
                        if (back - front == 1)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(deque[--back] + "\n");
                            deque[front] = 0;
                        }
                        break;

                    case "size":
                        sb.Append(back-front-1 + "\n");
                        break;
                    case "empty":
                        if (back - front == 1)
                        {
                            sb.Append(1 + "\n");
                        }
                        else
                        {
                            sb.Append(0 + "\n");
                        }
                        break;
                    case "front":
                        if (back - front == 1)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(deque[front+1] + "\n");
                        }
                        break;
                    case "back":
                        if (back - front == 1)
                        {
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            sb.Append(deque[back-1] + "\n");
                        }
                        break;
                }


            }

            Console.WriteLine(sb);

        }
    }
}
