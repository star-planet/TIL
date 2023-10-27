#include <stdio.h>
#include <math.h>

int main()
{
	int n, dot = 0, square = 1;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		square *= 2;
		dot = pow(square + 1, 2);
	}
	printf("%d", dot);
}