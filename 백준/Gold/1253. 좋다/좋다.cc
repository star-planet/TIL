#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> arr(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int Result = 0;

	for (int k = 0; k < N; k++)
	{
		int find = arr[k];
		int i = 0, j = N - 1;

		while (i < j)
		{
			if (arr[i] + arr[j] == find)
			{
				if (i != k && j != k)
				{
					Result++;
					break;
				}
				else if (i == k)
				{
					i++;
				}
				else if (j == k)
				{
					j--;
				}
			}
			else if (arr[i] + arr[j] < find)
			{
				i++;
			}
			else
			{
				j--;
			}
		}
	}
	cout << Result << endl;
}