#include <stdio.h>

int main(){
    int i, j, k;  // i: 가로라인 계산, j: 공백의 수 계산, k: 별의 수 계산
    int a,b; //// 입력받은 만큼 저장하는 변수 
    printf("입력"); //입력을 콘솔창에 알려주기 위한 설명 출력 
    scanf("%d %d", &a,&b ); //사용자에게 별의 갯수를 입력
    for(i = 0; i < a; i++){  //가로 계산// 
    for(j = 0; j < a-i; j++){ //공백의 수 계산
    printf("");
    }
    for(k = 0; k <=i; k++)    //별의 수 계산///
    {printf("*");}

printf("\n");   //가로라인이 한번 끝나면 줄바꿈 //
    }
    printf("\n");
    for(i = 0; i < b; i++){  //가로 계산// 
    for(j = 0; j < b-i; j++){ //공백의 수 계산
    printf("");
    }
    for(k = 0; k <=i; k++)    //별의 수 계산///
    {printf("*");}
printf("\n");   //가로라인이 한번 끝나면 줄바꿈 //
    }
    return 0;
}

