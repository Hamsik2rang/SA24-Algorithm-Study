using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AlgoCSharp
{
    class P2885
    {
        static void Main(string[] args)
        {
            int t;
            StringBuilder sb = new StringBuilder();
            t = Convert.ToInt32(Console.ReadLine());

            while (t-- > 0)
            {
                int stack = 0;
                bool isValid = true;
                string ps = Console.ReadLine();

                foreach (char p in ps)
                {
                    if (p == '(')
                    {
                        stack++;
                    }
                    else if (stack > 0)
                    {
                        stack--;
                    }
                    else
                    {
                        isValid = false;
                        break;
                    }
                }
                if (stack > 0)
                {
                    isValid = false;
                }
                sb.Append((isValid ? "YES\n" : "NO\n"));
            }
            Console.WriteLine(sb);
        }
    }
}
