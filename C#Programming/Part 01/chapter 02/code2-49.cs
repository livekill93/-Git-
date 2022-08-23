//var 키워드
//var 키워드의 제약
using System;
namespace FristProgram

{
    class Program
    {
        static void Main(string[] args)
        {
                //C#은 var 키워드로 변수의 자료형을 자동으로 저장할수있다.

        var number = 100;
        number = "변경"; //Compilation error (line 14, col 18): Cannot implicitly convert type 'string' to 'int'
        
        //var 키워드를 사용하려면 두가지 제약이 있다
        // 지역 변수로 선언할 경우, 변수를 선언괴 동시에 초기화 하느 경우

        }
    }
}