//반복문과 배열
//배열범위를 벗어난 인덱스접근
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

            //요소의 길이 출력
            Console.WriteLine(intArray[5]);
            
            //음수를 집어넣어도 오류가발생한다.

        }
    }
    
}