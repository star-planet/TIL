#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<string, int>> arr(N);
	stack<int> st;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first;
		if (arr[i].first == "push")
		{
			cin >> arr[i].second;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i].first == "push")
			st.push(arr[i].second);
		else if (arr[i].first == "pop")
		{
			if (st.empty())
				cout << "-1" << '\n';
			else
			{
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (arr[i].first == "top")
		{
			if (st.empty())
				cout << "-1" << '\n';
			else
				cout << st.top() << '\n';
		}
		else if (arr[i].first == "size")
			cout << st.size() << '\n';
		else if (arr[i].first == "empty")
			cout << st.empty() << '\n';
	}
	return 0;
}