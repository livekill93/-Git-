//switch조건문
//스위치 조건문
using System;

namespace Name
{
    class oh
    {
        static void Main(string[] args)
        {
            Console.WriteLine("이번 달은 몇월인가 : ");
            int input = int.Parse(Console.ReadLine());
            switch (input)
            {
                case 12:
                case 1:
                case 2:
                    Console.WriteLine("겨울입니다.");
                    break;
                case 3:
                case 4:
                case 5:
                    Console.WriteLine("봄이다");
                    break;
                case 6:
                case 7:
                case 8:
                    Console.WriteLine("여름인가.");
                    break;
                case 9:
                case 10:
                case 11:
                    Console.WriteLine("가을인덧");
                    break;
                default:
                    Console.WriteLine("뭔데 시발");
                    break;
            }
        }
    }
    
}//12입력시 디폴트로 빠져버리는데 ,switch문을 안고쳤다.