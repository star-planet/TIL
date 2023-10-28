#include <stdio.h>

#define MAX 10000

int main()

{
	int numberList[MAX] = { 0, };
	int n, temp;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		numberList[temp - 1]++;
	}
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < numberList[i]; j++)
		{
			printf("%d\n", i + 1);
		}
	}
	return 0;
}