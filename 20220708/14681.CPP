//사분면 고르기
#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout << "좌표를 입력";

    cin >> a >> b ; //a를 입력하고 b를 입력한다.
    if(a<1000&&a>0){
        if(b<1000&& b>0){
            cout << "1";
        }
        else if(b<0&&b>-1000){
            cout << "4";
        }
    }
    else if(a<0&&a>-1000){
       if(b<1000&& b>0){
            cout << "2";
        }
        else if(b<0&&b>-1000){
            cout << "3";
        }
    }
    else{
        cout << "입력수가 잘못되었습니다.";
    }
return 0;
}
//1회차 시행 문제없이 컴파일 되었다.모든답이 1이 나오는듯하다
//a,b의 범위를 좀더 확실하게 하였다.
//제대로 작동은 하는데 뭐가 문제인지 모르겠다
//범위를 오버했는데 제대로 된 답이 출력되지않는다 그부분이 문제인듯하다.
/*
#include <iostream>
 
using namespace std;
 
int main() {
    int X = 0, Y = 0;
 
    cin >> X;
    cin >> Y;
    //cout << X + Y;//입력 확인
    if (X>0)
    {
        if (Y>0) {
            cout << "1";
        }
        else {
            cout << "4";
        }
    }
    else {
        if (Y > 0) {
            cout << "2";
        }
        else {
            cout << "3";
        }
    }
    return 0;
}
/*정답은 대충 이런것인듯 하다. 범위설정이 차라리 필요없었던 모양
