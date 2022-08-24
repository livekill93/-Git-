//자료형 변환
//문자열을 숫자로 변환

using System;

namespace plzstop
{
    class forme
    {
        static void Main(string[] args)
        {
        Console.WriteLine(int.Parse("52"));
        Console.WriteLine(long.Parse("273"));
        Console.WriteLine(float.Parse("52.273"));
        Console.WriteLine(double.Parse("103.32"));

        Console.WriteLine(int.Parse("52").GetType());
        Console.WriteLine(long.Parse("273").GetType());
        Console.WriteLine(float.Parse("52.273").GetType());
        Console.WriteLine(double.Parse("103.32").GetType());
        }
    }
}