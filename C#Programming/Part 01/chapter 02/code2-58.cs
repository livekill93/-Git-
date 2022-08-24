//자료형변환
//강제 자료형 변환
using System;
namespace studycccc
{
    class Program
    {
        static void Main(string[] args)
        {
            long longNumber = 2147483647L + 2147483647L;
            int intNumber = (int)longNumber;
            Console.WriteLine(intNumber);
        }
    }

}