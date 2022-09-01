//do while반복문
//do while활용
using System;

namespace 두
{
    class 와일
    {
        static void Main(string[] args)
        {   
            string input;
            do{
                Console.WriteLine("입력(exit를 입력하면 종료함) : ");
                input = Console.ReadLine();
            }
            while (input ! = "exit");

        }
    }
    
}