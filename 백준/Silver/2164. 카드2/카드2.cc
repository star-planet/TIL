#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;
	queue<int> Queue;
	for (int i = 1; i <= N; i++)
	{
		Queue.push(i);
	}
	while (Queue.size() != 1)
	{
		Queue.pop();
		Queue.push(Queue.front());
		Queue.pop();
	}
	cout << Queue.front();
	return 0;
}