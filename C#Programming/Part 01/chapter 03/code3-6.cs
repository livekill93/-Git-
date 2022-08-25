//if else 조건문
//오전과 오후 구분
using System;

namespace 귀찮아아아아
{
    class 졸려
    {
        static void Main(string[] args)
        {
            if(DateTime.Now.Hour < 12)
            {
                Console.WriteLine("오전입니다: ");
            }
            else
            {
                Console.WriteLine("오후입니다:");
            }


        }
    }
    
}