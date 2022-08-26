using System;
namespace 연습문제
{
    class 여덟번째문제
    {
        static void Main(string[] args)
        {
            Console.WriteLine("숫자? :  ");
            int num = int.Parse(Console.ReadLine());
            if(num < 20 && num >10)
            {
                Console.WriteLine(" 조건에 맞는다.");
            }
            else
            {
                Console.WriteLine("이건 아니지");
            }
        }
    }
    
}