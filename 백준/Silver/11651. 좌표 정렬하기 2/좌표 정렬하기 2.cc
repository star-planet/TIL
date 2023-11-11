#include <iostream>
using namespace std;

typedef struct 
{
	int x;
	int y;
} Coord;

int Compare(const void* _a, const void* _b)
{
	Coord a = *(Coord*)_a;
	Coord b = *(Coord*)_b;

	if (a.y > b.y)
		return 1;
	else if (a.y == b.y)
	{
		if (a.x > b.x)
			return 1;
		else
			return -1;
	}
	return -1;
}

int main()
{
	int n;
	scanf("%d", &n);
	Coord* arr = new Coord[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	qsort((void*)arr, n, sizeof(Coord), Compare);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].x << ' ' << arr[i].y << '\n';
	}
	return 0;
}