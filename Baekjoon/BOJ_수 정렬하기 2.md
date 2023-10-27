# 수 정렬하기 2 (Silver V)

### 문제

N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

출처 : [2751번 수 정렬하기 2](https://www.acmicpc.net/problem/2751)

### 풀이
```
#include <stdio.h>
#include <stdlib.h>

int arr[1000000];

int CompareNum(const void* _a, const void* _b)
{
	int* a = (int*)_a;
	int* b = (int*)_b;
	if (*a > *b) return 1;
	else if (*a < *b) return -1;
	else return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort((void*)arr, n, sizeof(int), CompareNum);


	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
```