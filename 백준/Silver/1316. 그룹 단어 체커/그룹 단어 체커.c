#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char str[101];
	scanf("%d", &n);
	int count = n;

	for (int i = 0; i < n; i++)
	{
		char chk = '0';
		int alphabet[26] = { 0, };
		scanf("%s", str);
		for (int j = 0; str[j] != '\0'; j++)
		{
			if (chk != str[j]) {
				chk = str[j];
				alphabet[str[j] - 'a'] += 1;
			}

			if (alphabet[str[j] - 'a'] == 2)
			{
				count -= 1;
				break;
			}
		}
		
	}
	printf("%d", count);
	
	return 0;
}