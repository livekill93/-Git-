//자료형 검사
//직접적인 GetType() 메서드 활용
using System;
namespace FristProgram

{
    class Program
    {
        static void Main(string[] args)
        {
  

        Console.WriteLine((273).GetType());
        Console.WriteLine((522731033265).GetType());
        Console.WriteLine((52.273f).GetType());
        Console.WriteLine((52.273).GetType());
        Console.WriteLine(('글').GetType());
        Console.WriteLine(("문자열").GetType()); 


        }
    }
}