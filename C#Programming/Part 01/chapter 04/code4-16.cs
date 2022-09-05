//for반복문
//역for반복문

using System;

namespace forloop
{
    class timrdate
    {
        static void Main  (string[] args)
        {
            
            //변수선언
            int[] arr = {1,2,3,4,5,6};
            
            //반복수행 
            for( int i= arr.Length - 1 ; i>= 0; i--)
            {
                
                Console.WriteLine(arr[i]);
            }
            
            
            
        }
    }
    
}