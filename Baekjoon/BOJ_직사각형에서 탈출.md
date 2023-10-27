# 직사각형에서 탈출 (Bronze III)

### 문제
한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.

출처 : [1085번 직사각형에서 탈출](https://www.acmicpc.net/problem/1085)

### 풀이

x, y, w-x, h-y 중 최솟값이 최단거리이다.

```
#include <stdio.h>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	w -= x;
	h -= y;
	if (x > w) x = w;
	if (y > h) y = h;
	x > y ? printf("%d", y) : printf("%d", x);
	return 0;
}
```
