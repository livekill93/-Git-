//자료형 변환
//숫자로 변환할수 없는 문자열을 변환하는 경우

using System;

namespace plzstop
{
    class forme
    {
        static void Main(string[] args)
        {
        Console.WriteLine(int.Parse("52"));
        Console.WriteLine(int.Parse("abc"));
        //결과
        /*
        52
Unhandled exception. System.FormatException: Input string was not in a correct format.
   at System.Number.ThrowOverflowOrFormatException(ParsingStatus status, TypeCode type)
   at System.Int32.Parse(String s)
   at plzstop.forme.Main(String[] args)
Command terminated by signal 6
 */
 //매서드의 매개변수에 변환가능한 무자열을 넣을것
        }
    }
}