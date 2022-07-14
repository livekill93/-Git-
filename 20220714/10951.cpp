#include<iostream>

using namespace std;
/*
int main (){
    int a, b;
    
    for(int i=1;i<=5;++i){
    cin >>a >> b;
        for(int i=1;i<=5;++i){
            cout <<a+b <<"\n";
        }

    }
   

//이건 안되는거였다.
//while을 이용하는편이 더 옳다 
/while()함수 안쪽에도 cin이나 cout를 사용할수있다.
    return 0;
}*/

int main (){
    int a, b;
    while(!(cin >> a >> b).eof()){
        cout <<a + b << "\n";
    }
    return 0;
}
