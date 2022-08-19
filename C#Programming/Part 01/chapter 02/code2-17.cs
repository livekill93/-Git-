using System;//예외
namespace FristProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            
            Console.WriteLine("안녕하세요"[100]);
         /*
            Unhandled exception. System.IndexOutOfRangeException: Index was outside the bounds of the array.
              at System.String.get_Chars(Int32 index)
             at FristProgram.Program.Main(String[] args)
            Command terminated by signal 6
이런식으로 오류남
         */
        }
    }
}