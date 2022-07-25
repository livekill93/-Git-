#include<iostream>

using namespace std;


int main(){
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    string S;
    int i,j;//i와 j를 사용한다면 차후for문에서 다시 선언하지 말자.
    cin >> S;
    for(i=0;i<26;i++){
        for(j=0;j<S.length();j++){
            if(S[j] == alphabet[i]){
                cout << j << ' ';
                break;
            }
        }
        if(S[j] != alphabet[i]){//여기서 오류가 난다
        	cout << -1 <<' ';
		}
        
    }




}
