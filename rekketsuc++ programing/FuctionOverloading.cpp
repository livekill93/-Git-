#include<iostream>

void MyFunc(){
    std::cout<<"Myfunc(void) called"<<std::endl; 
}

void MyFunc(char c){
    std::cout<<"Myfunc(char c) called"<<std::endl; 
}

void MyFunc(int a,int b){
    std::cout<<"Myfunc(int a,int b) called"<<std::endl; 
}

int main(){
    MyFunc();
    MyFunc('A');
    MyFunc(12,13);

    return 0;
}