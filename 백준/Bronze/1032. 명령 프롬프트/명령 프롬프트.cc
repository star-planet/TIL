#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> Name(N);
	string temp;
	for (int i = 0; i < N; i++)
	{
		cin >> Name[i];
	}
	temp = Name[0];
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < Name[i].size(); j++)
		{
			if (temp[j] != Name[i][j])
			{
				temp[j] = '?';
			}
		}
	}
	cout << temp;
	return 0;
}