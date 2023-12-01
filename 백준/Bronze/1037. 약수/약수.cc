#include <iostream>
#include <vector>
#include <algorithm>
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
	sort(A.begin(), A.end());
	cout << A[0] * A[N - 1];
	return 0;
}
