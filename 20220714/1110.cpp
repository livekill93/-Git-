#include<iostream>

using namespace std;

int main(){//알고리즘을 유의하라
  
	int a ;//입력할 숫자
    
	

    int cnt=0; //표시카운트
	cin >> a ;
    int init = a ;//d원래대로 돌아왔을때의 확인용
    while(true){
        a=(a%10)*10+((a/10)+(a%10))%10;//게산식

        cnt ++;

        if(a == init){
            break;
        }
    }
    cout <<cnt; //반복된 횟수를 출력

    return 0;
}
