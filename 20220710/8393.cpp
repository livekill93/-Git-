#include<iostream>
using namespace std;
int main(){
  /* int A,n;
    cin >>A;
    for(int i=0;i<A;++i){
        n=1;
        cout << A*(A+1)/2<<endl;*///이부분은 틀렸음 sum 함수를 사용해서 다시
        int n;
        int sum = 0;
        cin >> n;
        for(int i = 1; i <= n; ++i){
            sum = sum + i;
        }
        cout << sum;
    
    return 0;
}
// 뭐 이딴 기묘한게 나왔지.
//sum말고도 n(n+1)/2 를 사용하는 방법도 있을것임