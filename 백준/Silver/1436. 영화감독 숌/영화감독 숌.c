#include <stdio.h>

int check(int n)
{
	if (n < 666) return 0;
	if (n % 1000 == 666) 
		return 1;
	else 
		check(n / 10);
}

int main(void)
{
	int n, num, i = 665, cnt = 0;

	scanf("%d", &n);

	while (i++)
	{
		if (check(i) == 1) {
			num = i;
			cnt++;
		}
		if (cnt == n) break;
	}
	printf("%d", num);

	return 0;
}