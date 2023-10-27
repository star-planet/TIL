#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int b, result = 0;
	char n[30];

	scanf("%s %d", &n, &b);

	int len = strlen(n);

	for (int i = 0; i < len; i++)
	{
		int temp;
		if (n[i] >= '0' && n[i] <= '9')
		{
			temp = n[i] - '0';
		}

		if (n[i] >= 'A' && n[i] <= 'Z')
		{
			temp = (n[i] - 'A') + 10;
		}

		result += temp * pow(b, len - 1 - i);
	}

	printf("%d", result);

	return 0;
}