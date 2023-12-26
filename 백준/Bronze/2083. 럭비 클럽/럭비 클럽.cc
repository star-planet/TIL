#include <iostream>
using namespace std;

int main()
{
	string Name;
	int Age, Weight;
	while (1)
	{
		cin >> Name >> Age >> Weight;
		if (Name == "#") break;
		if (Age > 17 || Weight >= 80)
		{
			cout << Name << ' ' << "Senior" << '\n';
		}
		else
		{
			cout << Name << ' ' << "Junior" << '\n';
		}
	}
	return 0;
}