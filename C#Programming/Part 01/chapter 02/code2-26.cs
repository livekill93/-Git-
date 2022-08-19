using System;//오버플로우
namespace FristProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            int a =2000000000;
            int b =1000000000;

        Console.WriteLine(a + b);  
         
     //음수가 출력됨 , 이유는 int의 자료범위때문이며 지료형 범위를 초과한 경우를 오버플로우라고 한다.
     //이러한 문제 해결하는 방법에대해서 알아보자.
     
        }
    }
}