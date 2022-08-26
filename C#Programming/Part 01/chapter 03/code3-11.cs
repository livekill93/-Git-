//switch조건문
//스위치 조건문
using System;

namespace Name
{
    class oh
    {
        static void Main(string[] args)
        {
            Console.Write("숫자 입력:");
            int input = int.Parse(Console.ReadLine());
            switch (input % 2)
            {
                
                case 0:
                    Console.WriteLine("짝수입니다.");
                    break;
                case 1:
                    Console.WriteLine("홀수이다");
                    break;
            }
        }
    }
    
}