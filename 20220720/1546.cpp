#include <iostream>
using namespace std;

int main() {
	int n; //시험 과목의 수 
	int score[1000] = {};//점수
	int max = 0; //최대값
	double result = 0; //평균을 저장, 이번문제는 소수점까지 나오니까 더블
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
		result += score[i];
	}
	result = (result / max * 100) / n;

	cout << fixed;
	cout.precision(6);
	cout << result << endl;
}