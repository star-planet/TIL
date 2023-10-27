#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, v, i;
	scanf("%d %d %d", &a, &b, &v);
	i = (v - b) / (a - b);
	printf("%.f", ceil(i));
}