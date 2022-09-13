//응용예제
//문자열 처리
//움직이는 달팽이

using System;
using System Threading; //스래드 클래스사용을 위한 코드

namespace practicepro
{
    class Cs
    {
        static void Main()
        {
            while(true)
            {
                ConsoleKeyInfo info = Console.ReadKey();
                switch (info.Key)
                {
                    case ConsoleKey.UpArrow:
                        Console.WriteLine("위로이동");
                        break;
                    case ConsoleKey.RighbtArrow:
                        Console.WriteLine("오른쪽으로이동");
                        break;
                    case ConsoleKey.LeftArrow:
                        Console.WriteLine("왼쪽으로이동");
                        break;
                    case ConsoleKey.DownArrow:
                        Console.WriteLine("아래로이동");
                        break;

                }
            }
        }
    }
}