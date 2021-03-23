using System;

namespace 백준1
{
   class MainProgram
   {
       static void Main(string[] args)
       {
           short N = short.Parse(Console.ReadLine());
           int[] stack = new int[N];
           short stackPointer = 0;
           while (N-- != 0)
           {
               string[] Command = Console.ReadLine().Split(' ');
               switch (Command[0])
               {
                   case "push":
                       stack[stackPointer++] = int.Parse(Command[1]);
                       break;
                   case "pop": 
                       if (stackPointer == 0)
                       {
                           Console.WriteLine("-1");
                       }
                       else
                       {
                           int po = stack[--stackPointer];
                           stack[stackPointer] = 0;
                           Console.WriteLine(po);
                       }
                       break;
                   case "size":
                       Console.WriteLine(stackPointer);
                       break;
                   case "empty":
                       if (stackPointer == 0)
                       {
                           Console.WriteLine("1");
                       }
                       else
                       {
                           Console.WriteLine("0");
                       }
                       break;
                   case "top":
                       if (stackPointer == 0)
                       {
                           Console.WriteLine("-1");
                       }
                       else
                       {
                           int to = stack[stackPointer-1];
                           Console.WriteLine(to);
                       }
                       break;
               }
           }
       }
   }
}
