#include<iostream>
#include<string>
#include<stdlib>

using namespace std;


char*MakeStrAdr(int len){
    char*str=(chat*)malloc(sizeof(char)*len);
    return str;
}

int main(){
    char*str = MakeStrAdr(20);
    strcpy(str,"I am so happy~");
    cout<<str<<endl;
    free(str);
    return 0;
}