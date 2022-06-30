#include<iostream>
#include<queue>

using namespace std;

int N, K;
queue<int> q; //큐는q로받는다

int main()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++) q.push(i);//스택값을넣는 push

	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front()); // i번째 카드를 맨뒤로
			q.pop();//스택값을꺼내는 pop
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";

}