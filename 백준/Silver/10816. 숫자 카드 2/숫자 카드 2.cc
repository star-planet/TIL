#include <iostream>
#include <algorithm>
using namespace std;

int arr[500002];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int input;
		cin >> input;
		cout << upper_bound(arr, arr + N, input) - lower_bound(arr, arr + N, input) << ' ';
	}
	return 0;
}