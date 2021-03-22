using System;
using System.Text;

namespace AlgoCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int commandCount;
            commandCount = Convert.ToInt32(Console.ReadLine());
            StringBuilder sb = new StringBuilder();
            int[] stack = new int[commandCount];
            int ptr = 0;

            while (commandCount-- > 0)
            {
                string[] temp = Console.ReadLine().Split();
                string command = temp[0].ToLower();
                int data = 0;
                if (temp.Length > 1)
                {
                    data = Convert.ToInt32(temp[1]);
                }
                if (command == "push")
                {
                    stack[ptr++] = data;
                }
                else if (command == "pop")
                {
                    if (ptr > 0)
                    {
                        sb.Append(stack[--ptr] + "\n");
                    }
                    else
                    {
                        sb.Append(-1 + "\n");
                    }
                }
                else if (command == "size")
                {
                    sb.Append(ptr + "\n");
                }
                else if (command == "empty")
                {
                    sb.Append((ptr != 0 ? 0 : 1) + "\n");
                }
                else if (command == "top")
                {
                    if (ptr == 0)
                    {
                        sb.Append(-1 + "\n");
                    }
                    else
                    {
                        sb.Append(stack[ptr - 1] + "\n");
                    }
                }
            }
            Console.WriteLine(sb);
        }
    }
}
