using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;

namespace _20210406
{
    class IF문_좀_대신_써줘
    {
        static void Main(String[] args)
        {
            String[] nm = Console.ReadLine().Split();
            int n = Convert.ToInt32(nm[0]);
            int m = Convert.ToInt32(nm[1]);

            Dictionary<String, int> condition = new Dictionary<String, int>();

            for(int i = 0; i < n; i++)
            {
                String[] stateValue = Console.ReadLine().Split();
                String state = stateValue[0];
                int value = Convert.ToInt32(stateValue[1]);
                condition.Add(state, value);
            }

            List<int> strong=new List<int>();

            for(int i = 0; i < m; i++)
            {
                strong.Add(Convert.ToInt32(Console.ReadLine()));
            }


            for(int i = 0; i < strong.Count; i++)
            {
                Console.WriteLine(condition.FirstOrDefault(x=>x.Value>=strong[i]).Key);
            }

        }
    }
}
