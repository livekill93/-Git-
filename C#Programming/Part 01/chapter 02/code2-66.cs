//자료형 변환
//소숫점 제거

using System;

namespace plzstop
{
    class forme
    {
        static void Main(string[] args)
        {
            double number = 52.273103;

            Console.WriteLine(number.ToString("0.0"));
            Console.WriteLine(number.ToString("0.00"));
            Console.WriteLine(number.ToString("0.000"));
            Console.WriteLine(number.ToString("0.0000"));

        }
    }
}