# 최소공배수 (Bronze I)

> 유클리드 호제법

### 문제 
두 자연수 A와 B에 대해서, A의 배수이면서 B의 배수인 자연수를 A와 B의 공배수라고 한다. 
이런 공배수 중에서 가장 작은 수를 최소공배수라고 한다. 
예를 들어, 6과 15의 공배수는 30, 60, 90등이 있으며, 최소 공배수는 30이다.

두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

출처 : [1934번 최소공배수](https://www.acmicpc.net/problem/1934)

### 풀이
```
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
```
