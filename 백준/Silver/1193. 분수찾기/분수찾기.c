#include <stdio.h>

int main()
{
	int a, b, x, line = 1, sum = 0;
	scanf("%d", &x);
	while (x > sum)
	{
		sum += line;
		if (x <= sum) break;
		line++;
	}
	if (line % 2 == 0)
	{
		int max = line * (line + 1) / 2;
		a = line - (max - x);
		b = max - x + 1;

	}
	else
	{
		int max = line * (line + 1) / 2;
		a = max - x + 1;
		b = line - (max - x);
	}
	printf("%d/%d", a, b);
	return 0;
}