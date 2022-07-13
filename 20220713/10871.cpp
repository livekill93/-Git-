#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x ;
    for(int i=1;i<=n;i++){//10을 입력한다면 1-10까지 정확한 범위를 설정할수있도록 한다.
        int y;
        cin >> y;
        if(y<x){
            cout << y <<" ";
        }
        else{
            cout << "";
        }
    }
        
    return 0;
}
