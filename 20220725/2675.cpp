#include<iostream>
#include<string>

using namespace std;

int main(){
    int i,j,k;
  /*  string alphanumeric="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\\$%*+-./:";*///끝이 null함수이기때문에 문제가 발생함
    string S;
    int T,R;

    cin >> T;
    for(i=0;i<T;i++){
        cin >> R ;
		cin >> S;
        
        for(j=0;j<S.size();j++){//이부분을 수정해준닼
            for( k=0;k<R;k++){
                cout << S[j];
            }

        }
        cout <<endl;
    }
    return 0;
}
