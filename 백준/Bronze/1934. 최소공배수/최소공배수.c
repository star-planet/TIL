#include <stdio.h>

int solution(int a, int b) 
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

int result(int a, int b) 
{
	return a * b / solution(a, b);
}

int main()
{
	int t, a ,b;

	scanf("%d", &t);

	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", result(a,b));
	}
}