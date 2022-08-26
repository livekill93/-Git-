//응용예제  
//키 입력 구분
using System;
namespace Name
{
    class command
    {
        static void Main(string[] args)
        {
            ConsoleKeyInfo info = Console.ReadKey();
            switch (info.Key)
            {
                case ConsoleKey.UpArrow:
                    Console.WriteLine("위로이동");
                    break;
                case ConsoleKey.RightArrow:
                    Console.WriteLine("오른쪽이동");
                    break;
                case ConsoleKey.LeftArrow:
                    Console.WriteLine("왼쪽이동");
                    break;
                case ConsoleKey.DownArrow:
                    Console.WriteLine("아래로이동");
                    break;
                default:
                    Console.WriteLine("다른 키를 눌렀습니다");
                    break;
            }                                            
        }
    }
    
}