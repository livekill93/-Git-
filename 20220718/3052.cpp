#include <iostream>
using namespace std;
 
int main() {

	int cnt[42] = {};	//0으로 초기화 bool 배열이면 bool count[42] = {false}로할것
	//42를 나눈 나머지니까 
	int n;
	for(int i = 0; i < 10; i++) {
		cin >> n;
		cnt[n % 42]++;	// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
	}
 
	int result = 0;

	for(int n : cnt) {//서로 다른값이 출력되었을때 
		if(n > 0) {		
			result++;//다른수를 카운트
		}
	}
	cout << result;
    
	return 0;
}