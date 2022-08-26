//삼항 연산자
//삼항 연산자를 이용한 자연수 판별
using System;
namespace 삼항연산자
{
    class 연산자
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            int number = int.Parse(input);
            
            Console.WriteLine(number > 0 ? "자연수이다" : "자연수가 아니다");
        }
    }
    
}