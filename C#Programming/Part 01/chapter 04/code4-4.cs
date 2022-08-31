//반복문과 배열
//배열 생성하고 요소에 접근
using System;

namespace hang
{
    class ger
    {
        static void Main(string[] args)
        {   //배열생성
            int[] intArray = { 52, 273, 32 , 65 , 103};
            //배열요소변경
            intArray[0] = 0;

            //요소출력
            Console.WriteLine(intArray[0]);
            Console.WriteLine(intArray[1]);
            Console.WriteLine(intArray[2]);
            Console.WriteLine(intArray[3]);
            Console.WriteLine(intArray[4]);

        }
    }
    
}