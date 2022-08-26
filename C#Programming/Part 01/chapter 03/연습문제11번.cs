using System;
namespace 연습문제
{
    class 열한번째문제
    {
        static void Main(string[] args)
        {
           
            Console.WriteLine("학년을 입력하세요 : ");
            int LV = int.Parse(Console.ReadLine());
            switch(LV)
            {
                case 1:
                    Console.WriteLine("수강해야 하는 전공 학점은 12학점이다");
                    break;
                case 2:
                    Console.WriteLine("수강해야 하는 전공 학점은 18학점이다");
                    break;
                case 3:
                    Console.WriteLine("수강해야 하는 전공 학점은 10학점이다");
                    break;
                case 4:
                    Console.WriteLine("수강해야 하는 전공 학점은 18학점이다");
                    break;
            }         
            
        }
    }
    
}