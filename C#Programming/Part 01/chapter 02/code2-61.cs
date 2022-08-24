//자료형변환
//자동 자료형 변환
//

using System;

namespace studtcccc
{
    class Program
    {   
         static void Main(string[] args)
        {
            //int 자료형 숫자 생성
            int intNumber = 2147483647; 
            //int자료형을 long자료형으로 자동변환
            long intTolong =intNumber;
            Console.WriteLine(intTolong);

            //int자료형을 double자료형으로 자동변환
            double intTodouble = intNumber;
            Console.WriteLine(intTodouble);
        }
    }
    }
