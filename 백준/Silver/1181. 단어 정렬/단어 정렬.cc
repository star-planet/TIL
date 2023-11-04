#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int CompareWord(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}

int main()
{
	int n;
	cin >> n;
	vector<string> arr(n);
	for (int i=0;i<n;i++) 
		cin >> arr[i];
	sort(arr.begin(), arr.end(), CompareWord);
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	for (string str : arr) 
		cout << str << endl;
	return 0;
}