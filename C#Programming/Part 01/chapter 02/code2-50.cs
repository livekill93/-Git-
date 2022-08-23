//var 키워드
//지역 변수
using System;
namespace FristProgram

{
    class Program
    {
        var global = 52; //인스턴트 변수 var키워드 변경불가  
        //Compilation error (line 9, col 9): The contextual keyword 'var' may only appear within a local variable declaration or in script code
        static void Main(string[] args)
        {
                //C#은 var 키워드로 변수의 자료형을 자동으로 저장할수있다.

        var local = 273;  //지역 변수 var키워드 변경 가능
        

        }
    }
}