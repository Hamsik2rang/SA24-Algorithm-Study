//using System;

//namespace _20210405
//{
//    class 숫자의_개수
//    {
//        static void Main(string[] args)
//        {
//            int a = Convert.ToInt32(Console.ReadLine());
//            int b = Convert.ToInt32(Console.ReadLine());
//            int c = Convert.ToInt32(Console.ReadLine());

//            String result = ""+ (a * b * c);

//            int[] answer = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

//            for(int i = 0; i < result.Length; i++)
//            {
//                answer[Convert.ToInt32(result.Substring(i,1))] += 1;
//            }

//            for (int i = 0; i < answer.Length; i++)
//            {
//                Console.WriteLine(answer[i]);
//            }
//        }
//    }
//}
