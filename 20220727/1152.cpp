#include<iostream>
#include<string>
#define N 1000001
//띄어쓰기를 카운트하면 되는거 아닐까? 거기에 끝에 +1로다가
using namespace std;

int main(){
    string str;
    int cnt =0 ;

    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
                cnt++;
        }
    }
    if(str[0]== ' ')
        cnt--;
    if(str[str.length() -1]== ' ')
        cnt--;
    
    cout << cnt+1;
    return 0;
}