#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	set<int> Array;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		Array.insert(temp);
	}
	set<int>::iterator iter = Array.begin();
	for (iter; iter != Array.end(); iter++)
	{
		cout << *iter << ' ';
	}

	return 0;
}