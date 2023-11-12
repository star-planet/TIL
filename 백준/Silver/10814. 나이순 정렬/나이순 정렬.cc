#include <iostream>
#include <algorithm>
using namespace std;

typedef struct
{
	int age;
	string name;
} Coord;

int compare(Coord a, Coord b)
{
	if (a.age == b.age) 
		return false;

	return a.age < b.age;
}

int main()
{
	int n;
	cin >> n;
	Coord* arr = new Coord[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].age >> arr[i].name;
	}
	stable_sort(arr, arr + n, compare);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].age << ' ' << arr[i].name << '\n';
	}
	delete[] arr;
	return 0;
}