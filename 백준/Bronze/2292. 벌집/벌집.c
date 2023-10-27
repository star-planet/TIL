#include <stdio.h>

int main()
{
	int n, room = 1, i = 1;
	scanf("%d", &n);
	while (n > room) room += 6 * i++;
	printf("%d", i);
	return 0;
}