#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int c, num;
	cin >> c;
	cin.ignore();
	for (int i = 0; i < c; i++)
	{
		float stud = 0, avr = 0;
		cin >> num;
		vector<int> info(num);
		for (int j = 0; j < num; j++)
		{
			cin >> info[j];
		}
		for (int j = 0; j < info.size(); j++)
		{
			avr += info[j];
		}
		avr /= num;
		for (int j = 0; j < info.size(); j++)
		{
			if (avr < info[j])
				stud++;
		}
		cout.setf(ios::showpoint);
		cout.precision(5);
		cout << (stud / num) * 100 << "%" << "\n";
		info.clear();
	}
	return 0;
}