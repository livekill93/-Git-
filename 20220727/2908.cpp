#include<iostream>
#include<string>
//두수를 뒤집은 다음에 크기르 비교해서 큰거 출력?--이건 아닌듯

using namespace std;

int main(){
    string a,b;

    cin >> a >> b ;

    string c;

    for(int i=0; i<3;i++){
        if(a[i]>b[i]){
            c=a;
            break;
        }
        else if(a[i]<b[i]){
            c=b;
            break;
        }
    }
    cout << c[0] << c[1] << c[2] ;

}
