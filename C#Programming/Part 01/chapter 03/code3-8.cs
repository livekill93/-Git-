//if else if 조건문
using System;
namespace 취직시켜줘
{
    class 취직해야되는데
    {
        static void Main(string[] args)
        {
            if (DateTime.Now.Hour <11)
            {
                Console.WriteLine("백수는 웁니다.");
            }
            else if(DateTime.Now.Hour <15)
            {
                Console.WriteLine("살기싫타 진짜");
            }
            else
            {
                Console.WriteLine("시발");
            }
        }
    }
    
}