using System;
namespace 연습문제
{
    class 일곱번째문제
    {
        static void Main(string[] args)
        {
            Console.WriteLine("몇년생인가?");
            int num = int.Parse(Console.ReadLine());
            switch (num % 12)
            {
                case 0 :
                    Console.WriteLine("원숭이띠");
                    break;
                case 1 :
                    Console.WriteLine("닭띠");
                    break;
                case 2 :
                    Console.WriteLine("개띠");
                    break;
                case 3 :
                    Console.WriteLine("돼지띠");
                    break;
                case 4 :
                    Console.WriteLine("쥐띠");
                    break;
                case 5 :
                    Console.WriteLine("소띠");
                    break;
                case 6 :
                    Console.WriteLine("호랑이띠");
                    break;
                case 7 :
                    Console.WriteLine("토끼띠");
                    break;
                case 8 :
                    Console.WriteLine("용띠");
                    break;
                case 9 :
                    Console.WriteLine("뱀띠");
                    break;
                case 10 :
                    Console.WriteLine("말띠");
                    break;
                case 11 :
                    Console.WriteLine("양띠");
                    break; 
            }
        }

    }
    
}