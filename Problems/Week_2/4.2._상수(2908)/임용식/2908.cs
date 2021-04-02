using System;

namespace AlgoCSharp
{
    class MainProgram
    {
        static void Main(string[] args)
        {
            int[] num = Array.ConvertAll(Console.ReadLine().Split(), (s)=>
            {
                var temp = s.ToCharArray();
                Array.Reverse(temp);
                return Convert.ToInt32(new string(temp));
            });

            Console.Write(num[0] < num[1] ? num[1] : num[0]);
        }
    }
}