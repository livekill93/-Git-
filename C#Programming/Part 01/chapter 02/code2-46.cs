//자료형 검사
//GetType() 메서드 활용
using System;
namespace FristProgram

{
    class Program
    {
        static void Main(string[] args)
        {
        int _int = 273;
        long _long = 522731033265;
        float _float = 52.273f;
        double _double = 52.273;
        char _char = '글';
        string _string ="문자열";

        Console.WriteLine(_int.GetType());
        Console.WriteLine(_long.GetType());
        Console.WriteLine(_float.GetType());
        Console.WriteLine(_double.GetType());
        Console.WriteLine(_char.GetType());
        Console.WriteLine(_string.GetType()); 


        }
    }
}