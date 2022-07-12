#include<iostream>
using namespace std;
int main(){
    int T,A,B;
    cin >> T;
    for(int i=1;i<=T;++i){//이부분이 틀렸었는데 0을 입력하면 후에 case 부분에서  case 0으로 출력됨
        cin >> A >> B;
        cout << "Case #" << i << ": " << A << " + " << B << " = " << A+B << "\n";


    }
    return 0 ;
}