//if조건문
//홀짝구분
using System;

namespace yoshi
{
    class yoshi
    {
        static void Main(string[] args)
        {
            Console.WriteLine("숫자 입력: ");
            int input = int.Parse(Console.ReadLine());

            if(input % 2 == 0)
            {
                Console.WriteLine("짝수인 데스웅");
            }
            if(input % 2 == 1)
            {
                Console.WriteLine("홀수인데찌");
            }
        }
    }
}