#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int Score[10], Sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> Score[i];
	}
	int Index = 0;
	while (Sum < 100)
	{
		Sum += Score[Index++];
	}
	if (Sum == 100)
	{
		cout << Sum;
	}
	else
	{
		int a = Sum - 100;
		int b = Sum - Score[Index - 1] - 100;
		if (abs(a) > abs(b))
		{
			cout << Sum - Score[Index - 1];
		}
		else
		{
			cout << Sum;
		}
	}
	return 0;
}