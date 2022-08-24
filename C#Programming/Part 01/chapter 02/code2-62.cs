//자료형변환
//문자열들을 숫자로 변환
//

using System;

namespace studtcccc
{
    class Program
    {   
         static void Main(string[] args)
        {
            //string 자료형을 int자료형으로 변환
            string numberString ="52273";
            int intNumber = (int)numberString;
            Console.WriteLine(intNumber);
        }
    }
    }
//결과 Compilation error (line 15, col 29): Cannot convert type 'string' to 'int' 스트링이 인트로 변환되지않는다.
//문자열을 숫자로 만드는 매서드가 존재한다. 문자티입.Parse() 가 그것이다.