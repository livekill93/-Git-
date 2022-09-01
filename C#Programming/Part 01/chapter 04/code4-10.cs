//while반복문
//while반복문 활용
using System;

namespace hang
{
    class ger
    {
        static void Main(string[] args)
        {   //배열생성
        int i = 0;
        int[] arr= {1,2,3,45,78,789};
           while (true)
           {
            Console.WriteLine(i+"몇번을 출력 : "+arr[i]);
            i++;
           }

        }
    }
    
}