//ox퀴즈
//연승하면 카운트 획득점수가 올라가고 패배하면 카운트가 초기화 하는 형식이될거같다

#include<iostream>
/*#include<string.h>*/
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    int n,x;
   /*double O,X;*/ //이것은 문자열이 아닌모양
   /*string a ="O",b="X"; *///문제가 배열관련문제였다.
    /*int sum=0;
    int cnt=0;*/ //여기있으면 안될듯?
    char arr[80];//OX배멸
    cin >> n;
    for(int i=0;i<n;i++){
           int sum=0;
            int cnt=0;
        cin >>arr;
       for(int j= 0; j< strlen(arr); j++){//배열의 길이? 아마도??ㄴ
        if( /*x == a*/arr[j] =='O'){
            cnt++;
            sum+=cnt;

        }
        if(/*x == b*/arr[j] =='X'){
            cnt=0;
        }
       }
 
            cout << sum <<endl;
            
    }
}

//진심 더럽다