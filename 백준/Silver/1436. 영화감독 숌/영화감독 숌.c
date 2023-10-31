#include <stdio.h>
#include <math.h>

int main()
{
	int endNum = 665;
	int n, count = 0;
	scanf("%d", &n);
	while (1)
	{
		if (n == count)
		{
			printf("%d", endNum);
			break;
		}
		endNum++;
		for (int i = 0; i <= 10; i++)
		{
			if (endNum / (int)pow(10,i) % 1000 == 666)
			{
				count++;
				break;
			}
		}
	}
	return 0;
}