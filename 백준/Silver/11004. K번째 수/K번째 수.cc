#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	cin.ignore();
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	nth_element(arr, arr + k -1, arr+n);
	cout << arr[k - 1];
	delete[] arr;
	return 0;
}