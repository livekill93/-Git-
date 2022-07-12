#include<iostream>
using namespace std;
int main (){
    int S;
    cin >> S;
    for(int i = 1;i<=S;++i){
        for(int j = 0;j<i;++j){
        cout << "*" ;
        }cout << "\n";
    }
    return 0;
}
//내가 이걸 어떻게 푸는거지