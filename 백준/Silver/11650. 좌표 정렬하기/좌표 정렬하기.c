#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
} coord;

int ComparePoint(const void* _a, const void* _b)
{
	coord a = *(coord*)_a;
	coord b = *(coord*)_b;

	if (a.x > b.x)
		return 1;
	else if (a.x == b.x)
	{
		if (a.y > b.y)
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

	coord arr[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}

	qsort((void*)arr, n, sizeof(coord), ComparePoint);

	for (int i = 0; i < n; i++)
	{
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	return 0;
}