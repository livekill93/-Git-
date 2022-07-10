//구구단
#include<iostream>
using namespace std;
int main(){
    int a;
    
    cin >> a;

    for(int i=1;i<10;++i){
       // cout << "a * i = a*i;" //이거 안됨
       cout << a << " * " << i << " = " << a*i << "\n";//순서대로 쓰자.
    }

    return 0;
}
//이게 지금 틀렸다고 나오는데.
// * = 띄어쓰기가 문제였다.