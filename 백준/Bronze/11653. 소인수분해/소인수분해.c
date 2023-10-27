#include <stdio.h>

int main()
{
	int n;
	int i = 2;
	scanf("%d", &n);

	while (n >= i)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
		}
		else
		{
			i++;
		}
	}

	return 0;
}