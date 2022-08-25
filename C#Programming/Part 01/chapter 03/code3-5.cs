//if else 조건문
//홀수 작수 구분하기
using System;

namespace bonobonoya
{   
    class pororiya
    {
        static void Main(String[] args)
        {
            Console.WriteLine("숫자의 입력: ");
            int input = int.Parse(Console.ReadLine());

            if(input % 2 == 0)
            {
                Console.WriteLine("짝수입니다!");
            }
            else
            {
                Console.WriteLine("홀수입니다!");
            }
        }
    }
    
}