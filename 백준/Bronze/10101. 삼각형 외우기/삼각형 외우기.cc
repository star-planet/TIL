#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	if (a + b + c != 180)
	{
		cout << "Error";
	}
	else
	{
		if(a == b && a == c)
		{
			cout << "Equilateral";
		}
		else if (a == b || b == c || a == c)
		{
			cout << "Isosceles";
		}
		else
		{
			cout << "Scalene";
		}
	}
}