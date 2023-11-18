#include <iostream>
using namespace std;

int c(int n)
{
	int sum = n;
	while (n != 0)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool num[10001]{ false };
	for (int i = 1; i < 10001; i++)
	{
		int n = c(i);
		if (n < 10001)
			num[n] = true;
	}
	for (int i = 1; i < 10001; i++)
	{
		if (!num[i])
			cout << i << '\n';
	}
	return 0;
}