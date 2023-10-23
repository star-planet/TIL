# 그룹 단어 체커 (Silver V)

### 문제
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 

예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

출처 : [1316번 그룹 단어 체커](https://www.acmicpc.net/problem/1316)

### 풀이
```
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
		char chk = ' ';
		int alphabet[26] = { 0, };
		scanf("%s", str);
		for (int j = 0; j < strlen(str); j++)
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
```