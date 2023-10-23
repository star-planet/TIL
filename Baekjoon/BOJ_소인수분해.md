# 소인수분해 (Bronze I)

### 문제

정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

출처 : [11653번 소인수분해](https://www.acmicpc.net/problem/11653)

### 풀이
```
#include <stdio.h>

int main()
{
	int n;
	int i = 2;
	scanf("%d", &n);

	while (n >= i)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
		}
		else
		{
			i++;
		}
	}

	return 0;
}
```