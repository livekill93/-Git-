using System;
namespace 연습문제
{
    class 열번째문제
    {
        static void Main(string[] args)
        {
            int x, y;
            Console.WriteLine("x의 값을 입력하라. : ");
            x = int.Parse(Console.ReadLine());
            Console.WriteLine("y의 값을 입력하라. : ");
            y = int.Parse(Console.ReadLine());
            
            if ( x > 4)
            {
                if( y > 2)
                {
                    Console.WriteLine(x*y);
                }
            }
            else
            {
                Console.WriteLine("다시해봐");
            }
        }
    }
    
}