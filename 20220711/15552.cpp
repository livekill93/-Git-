#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
		ios::sync_with_stdio(false);
        cin.tie(NULL);
 
	int a ,b,T;
    cin >>T;
	for (int i = 0; i < T; i++) {
		cin >> a>> b ;
        cout << a+b << "\n";
	}
	return 0;
}
//더럽게 어렵네