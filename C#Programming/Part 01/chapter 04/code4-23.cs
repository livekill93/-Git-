//break 키워드

//goto

using System;

namespace prog {
    class piramith
    {
        static void Main()
        {
            for (int i = 0; i < 10 ; i++)
            {
                Console.WriteLine("외부 반복문");
                for( int j = 0 ; j <10 ; j++)
                {
                    Console.WriteLine("내부 반복문");
                    goto doNotUse;
                }
            }
            goto doNotUse:
            Console.WriteLine("goto 키워드");
            
        }
    }
}