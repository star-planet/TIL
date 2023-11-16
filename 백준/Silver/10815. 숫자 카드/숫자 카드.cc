#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool b_search(vector<int>& a, int len, int target)
{
	int start = 0, end = len - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (a[mid] == target)
			return true;
		else if (a[mid] > target)
			end = mid - 1;
		else
			start = mid + 1;
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
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	vector<int> c(m);
	for (int i = 0; i < m; i++)
	{
		cin >> c[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < m; i++)
	{
		int result = b_search(a, n, c[i]);
		cout << result << ' ';
	}
	return 0;
}