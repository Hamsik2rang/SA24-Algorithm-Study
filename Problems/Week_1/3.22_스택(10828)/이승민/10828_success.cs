using System;
using System.Text;

namespace 백준1
{
    class mainprogram
    {
        static void Main(string[] args)
        {
            short n = short.Parse(Console.ReadLine());
            int[] stack = new int[n];
            short stackpointer = 0;
            StringBuilder sb = new StringBuilder();

            while (n-- != 0)
            {
                string[] command = Console.ReadLine().Split(' ');

                switch (command[0])
                {
                    case "push":
                        stack[stackpointer++] = int.Parse(command[1]);
                        break;
                    case "pop":
                        if (stackpointer == 0)
                        {
                            //Console.WriteLine("-1");
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            //int po = stack[--stackpointer];
                            //stack[stackpointer] = 0;
                            //Console.WriteLine(po);
                            sb.Append(stack[--stackpointer] + "\n");
                        }
                        break;
                    case "size":
                        //Console.WriteLine(stackpointer);
                        sb.Append(stackpointer + "\n");
                        break;
                    case "empty":
                        if (stackpointer == 0)
                        {
                            //Console.WriteLine("1");
                            sb.Append(1 + "\n");
                        }
                        else
                        {
                            //Console.WriteLine("0");
                            sb.Append(0 + "\n");
                        }
                        break;
                    case "top":
                        if (stackpointer == 0)
                        {
                            //Console.WriteLine("-1");
                            sb.Append(-1 + "\n");
                        }
                        else
                        {
                            //Console.WriteLine(stack[stackpointer - 1);
                            sb.Append(stack[stackpointer - 1] + "\n");
                        }
                        break;
                }


            }

            Console.WriteLine(sb);

        }
    }
}
