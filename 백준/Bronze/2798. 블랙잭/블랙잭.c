#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, max = 0, sum = 0;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum<=m && sum > max)
				{
					max = sum;
				}
			}
		}
	}
	printf("%d", max);
	free(arr);
	return 0;
}