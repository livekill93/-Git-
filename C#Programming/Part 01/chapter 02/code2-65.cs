//자료형 변환
//다른 자료형을 문자여로 변환
//다른 자료형을 문자열로 변환할떄는 ToString() 매서드를 사용한다.

using System;

namespace plzstop
{
    class forme
    {
        static void Main(string[] args)
        {
            Console.WriteLine((52).ToString());
            Console.WriteLine((52.273).ToString());
            Console.WriteLine(('a').ToString());
            Console.WriteLine((true).ToString());
            Console.WriteLine((false).ToString());

            Console.WriteLine((52).ToString().GetType());
            Console.WriteLine((52.273).ToString().GetType());
            Console.WriteLine(('a').ToString().GetType());
            Console.WriteLine((true).ToString().GetType());
            Console.WriteLine((false).ToString().GetType());

        }
    }
}