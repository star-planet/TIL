#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<pair<int, int>> info(N);
	for (int i = 0; i < N; i++)
	{
		cin >> info[i].first >> info[i].second;
	}

	for (int i = 0; i < N; i++)
	{
		int count = 1;
		for (int j = 0; j < N; j++)
		{
			if (j == i)
				continue;
			else if (info[i].first < info[j].first && info[i].second < info[j].second)
				count++;
		}
		cout << count << ' ';
	}
	return 0;
}