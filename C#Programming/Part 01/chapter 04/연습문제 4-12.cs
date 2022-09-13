using System;
 
class Program {
 
    /*문제 : 5개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.*/
    static void Main()
    {
        
            int i;
            int[] arr = {0,1,2,3,4};
            
            for(i = 0;i<5;i++)
            {
                Console.WriteLine("숫자를 입력해주세요: ");
                int n = int.Parse(Console.ReadLine());
                arr[i] =n;
            }
            
            
            //최대값 구하는
            int[] numarr ={0,1,2};
            if(arr[0]>arr[1])
            {
                numarr[0] = arr[0];
            }
            else if(arr[0]<arr[1])
            {
                numarr[0] = arr[1];
            }
            else if(arr[0]==arr[1])
            {
                numarr[0] = arr[0];
            }
            
            if(arr[2]>arr[3])
            {
                numarr[1] = arr[2];
            }
            else if(arr[2]<arr[3])
            {
                numarr[1] = arr[3];
            }
            else if(arr[2]==arr[3])
            {
                numarr[1] = arr[2];
            }
            
            numarr[2]=arr[4];
            
            int[] numarr1 ={0,1};
            
            if(numarr[0]>numarr[1])
            {
                numarr1[0] = numarr[0];
            }
            else if(numarr[0]<numarr[1])
            {
                numarr1[0] = numarr[1];
            }
            else if(numarr[0]==numarr[1])
            {
                numarr1[0] = numarr[0];
            }
            
            numarr1[1] =numarr[2];
            //최소값의 계산
            
            int[] numarr2 ={0,1,2};
            if(arr[0]>arr[1])
            {
                numarr2[0] = arr[1];
            }
            else if(arr[0]<arr[1])
            {
                numarr2[0] = arr[0];
            }
            else if(arr[0]==arr[1])
            {
                numarr2[0] = arr[0];
            }
            
            if(arr[2]>arr[3])
            {
                numarr2[1] = arr[3];
            }
            else if(arr[2]<arr[3])
            {
                numarr2[1] = arr[2];
            }
            else if(arr[2]==arr[3])
            {
                numarr2[1] = arr[3];
            }
            
            numarr2[2]=arr[4];
            
            int[] numarr3 ={0,1};
            
            if(numarr2[0]>numarr2[1])
            {
                numarr3[0] = numarr2[1];
            }
            else if(numarr2[0]<numarr2[1])
            {
                numarr3[0] = numarr2[0];
            }
            else if(numarr2[0]==numarr2[1])
            {
                numarr3[0] = numarr2[0];
            }
            
            numarr3[1] =numarr2[2];
            
            Console.WriteLine("----------------------");
            //최대값출력
            Console.WriteLine("\n최대값출력");
            if(numarr1[0]>numarr1[1])
            {
                Console.WriteLine(numarr1[0]);
            }
            else if(numarr1[0]<numarr1[1])
            {
                Console.WriteLine(numarr1[1]);
            }
            
            //최소값출력
            Console.WriteLine("\n최소값출력");
            if(numarr3[0]>numarr1[1])
            {
                Console.WriteLine(numarr3[1]);
            }
            else if(numarr3[0]<numarr3[1])
            {
                Console.WriteLine(numarr3[0]);
            }
            
            
    }
}

//책에서 아직 max와 min을 다루지않았으므로 이방식이 맞을듯 