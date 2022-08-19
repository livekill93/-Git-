using System;//논리부정 연산자
namespace FristProgram
{
    class Program
    {
        static void Main(string[] args)
        {
        Console.WriteLine(!true);  // '!'는 부정 연산자
        Console.WriteLine(!false);    
        Console.WriteLine(!(52 < 273));
        Console.WriteLine(!(52 > 273));
        }
    }
}