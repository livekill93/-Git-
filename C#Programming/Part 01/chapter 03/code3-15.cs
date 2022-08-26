//응용예제  
//입력 받아 조건 분할
using System;
namespace Name
{
    class command
    {
        static void Main(string[] args)
        {
            Console.Write("입력 : ");
            String line = Console.ReadLine();

            if(line.Contains("안녕"))
            {
                Console.WriteLine("안녕하세요");
            }
            else
            {
                Console.WriteLine("^^");
            }
        }
    }
    
}