#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int N, a, b;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int minData = A[0], maxData = A[0];
	for (int i = 0; i < N; i++)
	{
		minData = min(minData, A[i]);
		maxData = max(maxData, A[i]);
	}
	cout << minData * maxData;
	return 0;
}