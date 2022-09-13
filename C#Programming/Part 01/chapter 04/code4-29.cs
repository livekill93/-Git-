//응용예제
//문자열 처리
//배열을 문자열로 변환

using System;

namespace practicepro
{
    class Cs
    {
        static void Main()
        {
            string arr = {"감자", "고구마" ,"토마토 ","가지"};
            Console.WriteLine(string.Join(",",arr));
        }
    }
}