#include <stdio.h>

int main()
{
	int n, b, temp, index = 0;
	char result[30];

	scanf("%d %d", &n, &b);

	while (n)
	{
		temp = n % b;
		result[index++] = temp < 10 ? temp + '0' : temp + 'A' - 10;
		n /= b;
	}

	while (--index >= 0)
	{
		printf("%c", result[index]);
	}

	return 0;
}