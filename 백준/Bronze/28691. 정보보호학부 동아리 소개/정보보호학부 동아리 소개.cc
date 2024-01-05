#include <iostream>
using namespace std;

int main()
{
	char S;
	cin >> S;
	switch (S)
	{
	case 'M':
		cout << "MatKor";
		break;
	case 'W':
		cout << "WiCys";
		break;
	case 'C':
		cout << "CyKor";
		break;
	case 'A':
		cout << "AlKor";
		break;
	case '$':
		cout << "$clear";
		break;
	default:
		break;
	}
	return 0;
}