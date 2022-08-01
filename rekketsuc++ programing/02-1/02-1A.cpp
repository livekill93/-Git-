#include<iostream>

using namespace std;

void Ref(int &ref ){
    ref++;
}
void sigh(int &ref){
    ref *= -1;
}
int main(){
    int val=20;
    Ref(val);
    cout<<val<<endl;

    sigh(val);
    cout<<val<<endl;
    
    return 0;
}
