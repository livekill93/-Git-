//for반복문
//시간을 사용한 반복문 이탈

using System;

namespace forloop
{
    class timrdate
    {
        static void Main  (string[] args)
        {
            
            //변수선언
            long start = DateTime.now.ticks;
            long count = 0;
            
            //반복수행 
            while (start + (10000000) > DateTime.Now.Ticks)
            {
                count++;
            }
            Console.WriteLine(count + "만큼 했소이다.");
            
            
        }
    }
    
}

//결과 
/*
main.cs(14,35): error CS0117: `System.DateTime' does not contain a definition for `now'
/usr/lib/mono/4.5/mscorlib.dll (Location of the symbol related to previous error)
Compilation failed: 1 error(s), 0 warnings
*/