#include <iostream>
using namespace std;

int main()
{
	int num[5];
	int result = 1;
	for (int i = 0; i < 5; i++)
	{
		cin >> num[i];
	}
	while (1)
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
		{
			if (result % num[i] == 0)
				count++;
		}
		if (count >= 3)
			break;
		else
			result++;
	}
	cout << result;
	return 0;
}