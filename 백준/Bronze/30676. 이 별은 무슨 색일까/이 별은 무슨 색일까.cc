#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (620 <= n && n <= 780)
		cout << "Red";
	else if(590 <= n && n <= 620)
		cout << "Orange";
	else if (570 <= n && n <= 590)
		cout << "Yellow";
	else if (495 <= n && n <= 570)
		cout << "Green";
	else if (450 <= n && n <= 495)
		cout << "Blue";
	else if (425 <= n && n <= 450)
		cout << "Indigo";
	else 
		cout << "Violet";
	return 0;
}