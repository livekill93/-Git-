using System;
namespace 연습문제
{
    class 여덟번째문제
    {
        static void Main(string[] args)
        {
            Console.WriteLine("언제 태어났니? :  ");
            int where = int.Parse(Console.ReadLine());
            switch(where)
            {
                case 12:
                case 1:
                case 2:
                    Console.WriteLine("겨울");
                    break;
                case 3:
                case 4:
                case 5:
                    Console.WriteLine("봄");
                    break;
                case 6:
                case 7:
                case 8:
                    Console.WriteLine("여름");
                    break;
                case 9:
                case 10:
                case 11:
                    Console.WriteLine("가을");
                    break;
            }
        }
    }
    
}