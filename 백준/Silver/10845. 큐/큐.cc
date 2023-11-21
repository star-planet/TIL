#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<string, int>> A(N);
	queue<int> Queue;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i].first;
		if (A[i].first == "push")
			cin >> A[i].second;
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i].first == "push")
			Queue.push(A[i].second);
		else if (A[i].first == "pop")
		{
			if (Queue.empty())
				cout << "-1" << '\n';
			else
			{
				cout << Queue.front() << '\n';
				Queue.pop();
			}
		}
		else if (A[i].first == "size")
			cout << Queue.size() << '\n';
		else if (A[i].first == "empty")
		{
			if (Queue.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (A[i].first == "front")
		{
			if (Queue.empty())
				cout << "-1" << '\n';
			else
				cout << Queue.front() << '\n';

		}
		else if (A[i].first == "back")
		{
			if (Queue.empty())
				cout << "-1" << '\n';
			else
				cout << Queue.back() << '\n';

		}
	}
	return 0;
}