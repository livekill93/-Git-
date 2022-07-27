#include<iostream>

using namespace std; 

int adder(int num1=1, int num2=2){
    return num1+num2;
}

int main(){
    cout<<adder()<<endl;
    cout<<adder(5)<<endl;
    cout<<adder(3,5)<<endl;

    return 0;
    
}
