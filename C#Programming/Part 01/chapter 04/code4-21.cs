//중첩 반복문
//피라미드

using System;

namespace prog {
    class piramith
    {
        static void Main()
        {
            for (int i= 0; i<10 ; i++)
            {
                for (int j = 0; j< 10-i; j++)
                Console.Write(' ');
                
                
                for (int j = 0; j< i; j++)
                Console.Write('*');
                Console.Write('\n');
            }
        }
    }
}