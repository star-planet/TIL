#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	string n;
	cin >> n;
	sort(n.begin(), n.end(), compare);
	cout << n;
	return 0;
}