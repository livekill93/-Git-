//자료형 변환
//문자열을 bool;로 변환

using System;

namespace plzstop
{
    class forme
    {
        static void Main(string[] args)
        {

            Console.WriteLine(bool.Parse("True"));
            Console.WriteLine(bool.Parse("true"));
            Console.WriteLine(bool.Parse("False"));
            Console.WriteLine(bool.Parse("false"));

        /*결과
        True
        True
        False
        False

        */
        }
    }
}