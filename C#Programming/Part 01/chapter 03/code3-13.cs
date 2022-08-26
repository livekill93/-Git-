//삼항 연산자
using System;
namespace 삼항연산자
{
    class 연산자
    {
        static void Main(string[] args)
        {
            int number = 22 ;
            Console.WriteLine(number % 2 == 0 ? true : false);

            Console.WriteLine(number % 2 == 0 ? "짝수" : "홀수");
        }
    }
    
}