//for반복문
//foreach 반복문과 var

using System;

namespace forloop
{
    class timrdate
    {
        static void Main  (string[] args)
        {
            
            //변수선언
            string[] arr = {"건담","구자쿠","신자쿠","짐","겔구구","건캐논"};
            
            //반복수행 
            foreach (var item in arr)
            {
                
                Console.WriteLine(item);
            }
            
            
            
        }
    }
    
}//? 뭔데이게