//평균구하기 그리고 배열사용하기arr이를 사용해보자

#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;



int main(){
    int c,a;
    int arr[1000];
    int sum ,cnt ;
    double ans;

    cin >> c; //테스트 케이스
    for(int i=0;i<c;i++){ //케이스에 들어갈 학생점수
        cin >> a ;
         sum = 0; //초기화
        for(int j=0; j < a;j++){
            cin >> arr[j];
            sum+= arr[j];
            
        }
        ans= sum/a;
        cnt=0;
    
        }
        
        cout << fixed;
        cout.precision(3);//소수점 세번째까지 출력
        cout << ans << "%"<<endl;


    }


