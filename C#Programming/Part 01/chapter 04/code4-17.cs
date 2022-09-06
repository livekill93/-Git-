//for반복문
//foreach

using System;

namespace forloop
{
    class timrdate
    {
        static void Main  (string[] args)
        {
            
            //변수선언
            int[] arr = {"건담","구자쿠","신자쿠","짐","겔구구","건캐논";
            
            //반복수행 
            foreach (string item in arr)
            {
                
                Console.WriteLine(item);
            }
            
            
            
        }
    }
    
}