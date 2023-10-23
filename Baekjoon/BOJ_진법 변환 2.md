# 진법 변환 2 (Bronze I)

### 문제

10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

출처 : [11005번 진법 변환 2](https://www.acmicpc.net/problem/11005)

### 풀이
```
#include <stdio.h>

int main5()
{
	int n, b, temp, index = 0;
	char result[30];

	scanf("%d %d", &n, &b);

	while (n)
	{
		temp = n % b;
		result[index++] = temp < 10 ? temp + '0' : temp + 'A' - 10;
		n /= b;
	}

	while (--index >= 0)
	{
		printf("%c", result[index]);
	}

	return 0;
}
```