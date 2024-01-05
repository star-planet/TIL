#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string Secret;
		cin >> Secret;
		if (Secret.size() >= 6 && Secret.size() <= 9)
		{
			cout << "yes" << '\n';
		}
		else
		{
			cout << "no" << '\n';
		}
	}
	return 0;
}