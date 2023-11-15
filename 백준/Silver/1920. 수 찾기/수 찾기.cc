#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(vector<int>& A, int len, int target)
{
	int start = 0, end = len - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (A[mid] == target)
		{
			return true;
		}
		else if (A[mid] > target)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	cin >> m;
	vector<int> E(m);
	for (int i = 0; i < m; i++)
	{
		cin >> E[i];
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < m; i++)
	{
		int result = binary_search(A, n, E[i]);
		cout << result << '\n';
	}
	return 0;
}