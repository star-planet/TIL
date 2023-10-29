#include <stdio.h>

int gcd(int a, int b)
{
	int n;
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", gcd(a, b));
	printf("%d", lcm(a, b));

	return 0;
}