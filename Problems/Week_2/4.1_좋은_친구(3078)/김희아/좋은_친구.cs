using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _20210401
{
    class 좋은_친구
    {
        static void Main(string[] args)
        {
            String tmp = Console.ReadLine();
            string[] stmp = tmp.Split(' ');
            int num = Convert.ToInt32(stmp[0]); //주어진 학생 수
            int order = Convert.ToInt32(stmp[1]); //해당 등수 차이만큼 좋은 친구가 될 수 있음

            List<int> name = new List<int> (); //학생 수만큼의 이름을 담을 리스트

            for(int i=0; i < num; i++)
            {
                String ntmp = Console.ReadLine();
                name.Add(ntmp.Length); 
            }

            Console.WriteLine(GoodFriend(order, name));
        }

        static int GoodFriend(int order, List<int> name)
        {
            int answer = 0;

            for (int i = 0; i < name.Count; i++)
            {
                List<int> index = Enumerable.Range(0, name.Count).Where(j => name[j] == name[i]).ToList();

                if (index[1] - index[0]<=order)
                {
                    answer += 1;
                }
            }

            
  
            return answer/2;
        }

    }
}
