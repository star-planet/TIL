#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<string, int>> A(N);
	deque<int> Deque;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i].first;
		if (A[i].first == "push_back" || A[i].first == "push_front")
			cin >> A[i].second;
	}
	for (int i = 0; i < N; i++)
	{
		if (A[i].first == "push_back")
			Deque.push_back(A[i].second);
		else if (A[i].first == "push_front")
			Deque.push_front(A[i].second);
		else if (A[i].first == "front")
		{
			if (Deque.empty())
				cout << "-1" << '\n';
			else
				cout << Deque.front() << '\n';
		}
		else if (A[i].first == "back")
		{
			if (Deque.empty())
				cout << "-1" << '\n';
			else
				cout << Deque.back() << '\n';
		}
		else if (A[i].first == "size")
			cout << Deque.size() << '\n';
		else if (A[i].first == "empty")
		{
			if (Deque.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (A[i].first == "pop_front")
		{
			if (Deque.empty())
				cout << "-1" << '\n';
			else
			{
				cout << Deque.front() << '\n';
				Deque.pop_front();
			}
		}
		else if (A[i].first == "pop_back")
		{
			if (Deque.empty())
				cout << "-1" << '\n';
			else
			{
				cout << Deque.back() << '\n';
				Deque.pop_back();
			}
		}
	}
	return 0;
}