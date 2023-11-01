#include <stdio.h>
#include <math.h>

int main()
{
	int n, x, y, result = 0, minX = 10001, maxX = -10001, minY = 10001, maxY = -10001;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x < minX) minX = x;
		if (x > maxX) maxX = x;
		if (y < minY) minY = y;
		if (y > maxY) maxY = y;
	}
	result = (maxX - minX) * (maxY - minY);
	printf("%d", result);
	return 0;
}