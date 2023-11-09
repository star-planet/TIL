#include <iostream>
using namespace std;

int main()
{
	int t, k, n;
	cin >> t;
	int arr[16][16];
	for (int i = 0; i < 16; i++)
	{
		arr[0][i] = i + 1;
		arr[i][0] = 1;
	}
	for (int i = 1; i < 16; i++)
		for (int j = 1; j < 16; j++)
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;
		cout << arr[k][n - 1] << "\n";
	}
	return 0;
}