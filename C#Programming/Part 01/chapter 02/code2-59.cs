//자료형 변환
//강제 자료형 뵨환의 데이터 손실 미발생
using System;
namespace studycccc
{
    class Program
    {
        static void Main(string[] args)
        {
            long longNumber = 52273;
            int intNumber = (int)longNumber;
            Console.WriteLine(intNumber);
        }
    }

}