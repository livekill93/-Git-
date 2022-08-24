//자료형변환
//강제 자료형 변환
//C#은 데이터 손실이 일어나지 않는 범위에서 자동으로 지료형을 변환해준다.
//숫자 손상

using System;

namespace studtcccc
{
    class Program
    {   
         static void Main(string[] args)
        {
            long longNumber = 2147483647L + 2147483647L;
            int intNumber = (int)longNumber;
            Console.WriteLine(intNumber);
            //double 자료형을 int 자료형으로 변환
            double doubleNumber = 52.27310332;
            int doubleToint = (int)doubleNumber;
            Console.WriteLine(doubleNumber);
        }
    }
    }
