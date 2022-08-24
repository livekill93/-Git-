//자료형 변환
//자료형 변환

using System;
namespace studycccc
{
    class Program
    {
        static void Main(string[] args)
        {
            long longNumber = 2147483647L + 2147483647L;
            int intNumber = longNumber;  //long형이기때문에 int 에러발생
            Console.WriteLine(intNumber);
        }
    }

}