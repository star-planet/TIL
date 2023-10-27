#include <stdio.h>

int main(void)
{
	int t, c, result;
	int money[4] = { 25, 10, 5, 1 };

	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &c);
		for (int i = 0; i < 4; i++)
		{
			result = c / money[i];
			c %= money[i];
			printf("%d ", result);
		}
		printf("\n");
	}

	return 0;
}