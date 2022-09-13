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
            int x =1;
            while (x<50)
            {
                Console.Clear();
                Console.SetCursorPosition(x,5);

                if(x % 3 == 0)
                Console.WriteLine("__@");
                else if( x % 3 == 1)
                Console.WriteLine("_^@");
                else
                Console.WriteLine("^_@");

                Thread.Sleep(100);
                x++;
            }
        }
    }
}