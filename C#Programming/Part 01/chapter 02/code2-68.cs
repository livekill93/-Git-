//자료형 변환
//간단한 문자열 변환

using System;

namespace plzstop
{
    class forme
    {
        static void Main(string[] args)
        {

            int number = 52273;

            string outputA = number + "";
            Console.WriteLine(outputA);

            char character = 'a';
            string outputB =character + "";
            Console.WriteLine(outputB);
        }
    }
}

//결과 
/*
52273
a
일단 안되는것임
*/