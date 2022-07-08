//알람시계
#include<iostream>
using namespace std;
int main(){
    int hour,sec;
    //시간의 분과 초선언
    //60진법은 어떻게 사용하는것일지 모르곘다.
    cin >> hour >>sec;
    if(sec<45){
        sec += 15;
        hour --;        
    }
    else
        sec-= 45;
    if(hour < 0)
        hour = 23;
    cout << hour << " " << sec;
    //입력받은 분이 45보다 작으면 빼버려라


return 0;
}
