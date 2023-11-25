#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	queue<int> Queue;
	for (int i = 1; i <= N; i++)
	{
		Queue.push(i);
	}
	cout << "<";
	while (Queue.size() > 1)
	{
		for (int i = 1; i < K; i++)
		{
			int temp = Queue.front();
			Queue.pop();
			Queue.push(temp);
		}
		cout << Queue.front() << ", ";
		Queue.pop();
	}
	cout << Queue.front() << ">";
	return 0;
}