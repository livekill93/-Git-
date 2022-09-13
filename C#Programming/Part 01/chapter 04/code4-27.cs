//응용예제
//문자열 처리
//문자열가르기

using System;

namespace practicepro
{
    class Cs
    {
        static void Main()
        {
            string input = "감자 고구마 토마토";
            string[] inputs = inputs.Split(new Char[] {' '});

            foreach (var item in inputs)
            {
                Console.WriteLine(item);
            }
        }
    }
}