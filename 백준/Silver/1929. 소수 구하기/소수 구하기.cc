#include <iostream>
using namespace std;

void PrimeNum(int m, int n)
{
	bool* isPrime = new bool[n + 1];

	for (int i = 0; i <= n; i++)
	{
		isPrime[i] = true;
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * 2; j <= n; j += i)
			{
				isPrime[j] = false;
			}
		}
	}

	for (int i = m; i <= n; i++)
	{
		if (i != 1 && isPrime[i])
		{
			cout << i << "\n";
		}
	}
	delete[] isPrime;
}

int main()
{
	int M, N;
	cin >> M >> N;
	PrimeNum(M, N);
	return 0;
}