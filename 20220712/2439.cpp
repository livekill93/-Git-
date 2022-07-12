#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    for(int i = 1;i<=n;++i){
        for(int j = 0; j < (n-i); j++){ //아니 이건 무슨 조화인데 for(inf j = (n-1);j<=0;--j)가 안되는 이유는 뭐냐
        cout << " " ;
        }
        for(int j = 0;j<i;++j){
        cout << "*" ;
        }cout << "\n";
        
    }
    return 0;
}