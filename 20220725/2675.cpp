#include<iostream>
#include<string>

using namespace std;

int main(){
    int i,j,k;
    string alphanumeric="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\\$%*+-./:";
    string S[26];
    int T,R;

    cin >> T;
    for(i=0;i<T;i++){
        cin >> R  ;
		cin >> S[j];
        
        for(j=0;j<R;j++){
            for( k=0;k<R;k++){
                cout << S[j];
            }

        }
        cout <<endl;
    }
    return 0;
}
