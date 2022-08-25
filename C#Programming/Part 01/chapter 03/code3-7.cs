//중첩 조건문
//중첩조건문의 활용
using System;

namespace gundam
{
    class jaku
    {
        static void Main(string[] args)
        {
            if(DateTime.Now.Hour < 12)
            {
                Console.WriteLine("아침먹을 시간이다.");
            }
            else
            {   
                if(DateTime.Now.Hour <15)
                {
                    Console.WriteLine("점심머겅"); 
                }
                else
                {
                    Console.WriteLine("저녘머겅");
                }
            }
            
        }
    }
}
//왜 아침이지???
