using System;//불과 논리 연산자
namespace FristProgram
{
    class Program
    {
        static void Main(string[] args)
        {
        Console.WriteLine(DateTime.Now.Hour < 3|| 8 <DateTime.Now.Hour);  //현재 시각이 3시보다 이르거나 8시보를 넘었을때
        Console.WriteLine(3 < DateTime.Now.Hour && DateTime.Now.Hour < 8);    
     
        }
    }
}