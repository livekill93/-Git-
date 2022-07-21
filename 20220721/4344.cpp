//평균구하기 그리고 배열사용하기arr이를 사용해보자

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
    int c,a;
    int arr[1000];
    int sum ,cnt;
    double avg;

    cin >> c; //테스트 케이스
    for(int i=0;i<c;i++){ //케이스에 들어갈 학생점수
        cin >> a ;//케이스의 학생수
         sum = 0; //초기화
         cnt=0;
        for(int j=0; j < a;j++){
            cin >> arr[j];
            sum+= arr[j];
        }
        avg = (sum /(double)a);
        for(int j=0;j<a;j++){
            if(avg<arr[j])
            cnt++;
        }
        cout << fixed;
        cout.precision(3);//소수점 세번째까지 출력
        cout << (cnt*100/(double)a) << "%"<<endl;
        //출력해야되는것이 케이스에서 평균점 이상의 학생들인것에 유의해야한다.
    }
         
        


 }


