//for반복문으로 곱셈

using System;

namespace forloop
{
    class forloops
    {
        static void Main  (string[] args)
        {
            //변수선언
            int output = 1;

            //반보ㅓㄱ문수행
            for (int i = 1 ; i <= 20 ; i++)
            {
                output *= i;
            }

            //출력
            console.WriteLine(output);
        }
    }
    
}