#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int Rev(string x)
{
	reverse(x.begin(), x.end());
	return stoi(x);
}

int main()
{
	string x, y;
	cin >> x >> y;
	cout << Rev(to_string(Rev(x) + Rev(y)));
	return 0;
}