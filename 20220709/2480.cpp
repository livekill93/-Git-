//주사위, 사이코로 문제
#include <iostream>
using namespace std;

int main() {
	int A, B, C, reward = 0, max = 0;
	cin >> A >> B >> C;
	if (A == B && B == C) { //A==B==C 한번에 3개 전부는 안되는것 주의
		reward = 10000 + A * 1000;//A<B,C가 전부 같은 값이나왔을때
	}
	else if (A == B || A == C || B == C) {//주사위 2개가 같은값이나왔을때
		if (A == B || A == C) { //여기에 B==C도 추가해야되는가?
			reward = 1000 + A * 100;
		}
		else reward = 1000 + B * 100;//먼저 처음에 3개중 2개가 같다고되었기떄문에 아래if에서 A값을 처리해보고 아닌경우 elsㄷ로 받는다.
	}
	else {//3개의 눈이 겹치지 않는경우
		max = A;
		if (B > A && B > C) max = B;
		else if (C > A && C > B) max = C;
		reward = max * 100;
	}

	cout << reward << endl;
	return 0;
}

//갑자기 더럽개 어려워졌다.