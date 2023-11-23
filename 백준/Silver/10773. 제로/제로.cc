#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int K, N, Sum = 0;
	stack<int> Stack;
	cin >> K;
	for (int i = 0; i < K; i++)
	{
		cin >> N;
		if (N == 0)
			Stack.pop();
		else
			Stack.push(N);
	}
	while(!Stack.empty())
	{
		Sum += Stack.top();
		Stack.pop();
	}
	cout << Sum;
	return 0;
}