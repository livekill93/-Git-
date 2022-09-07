//break 키워드

using System;

namespace prog {
    class piramith
    {
        static void Main()
        {
            while (true)
            {
                Console.Write ("숫자 처넣어 짝수는 종료한다 : ");
                int input = int.Parse(Console.ReadLine());
                if(input % 2== 0)
                {
                    break;
                }
            }
            
        }
    }
}