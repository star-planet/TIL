#include <stdio.h>

int main()
{
	while (1)
	{
		int l[3], max = 0;
		scanf("%d %d %d", &l[0], &l[1], &l[2]);

		if (!(l[0] | l[1] | l[2]))
			break;

		for (int i = 0; i < 3; i++)
			if (max < l[i]) max = l[i];

		if (l[0] + l[1] + l[2] - max <= max)
			printf("Invalid\n");
		else if (l[0] == l[1] && l[0] == l[2])
			printf("Equilateral\n");
		else if (l[0] == l[1] || l[1] == l[2] || l[0] == l[2])
			printf("Isosceles\n");
		else
			printf("Scalene\n");
	}
	return 0;
}