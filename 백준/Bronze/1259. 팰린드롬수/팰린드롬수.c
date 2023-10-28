#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	while (1)
	{
		bool isPalin = true;
		char number[6] = { '\0', };
		scanf("%s", &number);
		if (number[0] == '0') break;
		for (int i = 0; i < strlen(number)/2; i++)
		{
			if (number[i] != number[strlen(number) - 1 - i])
			{
				isPalin = false;
				break;
			}
		}
		isPalin ? printf("yes\n") : printf("no\n");
	}
	return 0;
}