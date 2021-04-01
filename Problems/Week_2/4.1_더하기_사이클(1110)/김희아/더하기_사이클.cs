using System;

namespace _20210401
{
    class Program
    {

        /*static void Main(string[] args)
        {
            int n;
            int.TryParse(Console.ReadLine(), out n);
            Console.WriteLine(Cycle(n));
        }

        static public int Cycle(int n)
        {
            int fn = n; //처음 수 저장
            String sn; //자리별로 계산을 위해 String 형태로 저장
            int answer = 0; //Cycle 횟수 저장
            int nn=0; //자리별로 더한 수 저장
            String snn; //자리별로 더한 수 String 형태로 저장
            do
            {
                sn = n.ToString();

                if (sn.Length==1)
                {
                    sn = "0" + sn;
                }

                nn = Convert.ToInt32(sn.Substring(0, 1)) + Convert.ToInt32(sn.Substring(1, 1)); 
                snn = nn.ToString();
                n = Convert.ToInt32(sn.Substring(sn.Length-1,1) + snn.Substring(snn.Length-1,1));
                answer += 1;

            } while (fn!=n);
            
            return answer;
        }*/

    }
}
