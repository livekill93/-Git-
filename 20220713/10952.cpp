#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(true) {
	int A, B;
	cin >> A >> B;
 
	if(A == 0 && B == 0) {	// A와 B가 모두 0이라면 while문 종료
		break;
	}
 
	cout << A + B << "\n";	
}
}