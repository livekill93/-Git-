using System;//오버플로우
namespace FristProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            int a =2147483640;
            int b = 52273;

        Console.WriteLine(a + b);  
         
     //음수가 출력됨 , 이유는 int의 자료범위때문이며 지료형 범위를 초과한 경우를 오버플로우라고 한다.
        }
    }
}