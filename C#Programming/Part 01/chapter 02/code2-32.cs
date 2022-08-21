using System;//sizeof 연산자.
namespace FristProgram
{
    class Program
    {
        static void Main(string[] args)
        {

          Console.WriteLine("int: " + sizeof(int));
          Console.WriteLine("long: " + sizeof(long));
          Console.WriteLine("float: " + sizeof(float));
          Console.WriteLine("double: " + sizeof(double));
          Console.WriteLine("char: " + sizeof(char));


        }
    }
}