#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<int> arr;
	cin >> n;

	for (int i = 0; i <= n / 3; i++)
	{
		for (int j = 0; j <= n / 5; j++)
		{
			if (3 * i + 5 * j == n)
			{
				arr.push_back(i + j);
			}
		}
	}
	if (arr.size() == 0)
		cout << "-1";
	else
		cout << arr[0];
	return 0;
}