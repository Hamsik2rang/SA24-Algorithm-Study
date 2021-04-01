//using System;
//using System.Collections;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;

//namespace _20210401
//{
//    class 도키도키_간식드리미
//    {
//        static void Main(string[] args)
//        {
//            int n;
//            int.TryParse(Console.ReadLine(), out n);

//            List<int> num = new List<int>();

//            String tmp = Console.ReadLine();
//            string[] stmp = tmp.Split(' ');

//            for(int i = 0; i < stmp.Length; i++)
//            {
//                num.Add(Convert.ToInt32(stmp[i]));
//            }

//            Console.WriteLine(GiveSnack(n, num));
//        }

//        static public String GiveSnack(int n, List<int>num)
//        {
//            List<int> stayLine = new List<int>(); //대기줄

//            int order = 1; //순서

//            while (num.Count != 0)
//            {
//                if (num[0] == order)
//                {
//                    num.Remove(num[0]);
//                    order += 1;
//                }
//                else if (stayLine.Count>0 && stayLine[0] == order)
//                {
//                    stayLine.Remove(stayLine[0]);
//                    order += 1;
//                }
//                else
//                {
//                    stayLine.Insert(0, num[0]);
//                    num.Remove(num[0]);
//                }
//            }

//            for(int i = 0; i < stayLine.Count-1; i++)
//            {
//                if (stayLine[i] + 1 == stayLine[i + 1])
//                {
//                    continue;
//                }
//                else
//                {
//                    return "Sad";
//                }
//            }
//            return "Nice";
//        }
//    }
//}
