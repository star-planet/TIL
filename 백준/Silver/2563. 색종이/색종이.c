#include <stdio.h>

int square[100][100] = { 0, };

int main(void) {
	int n;
	int x, y;
	int area = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (int j = 9 + y; j >= y; j--) {
			for (int k = 8 + x; k >= x - 1; k--) {
				if (square[k][j] != 1) {
					square[k][j] = 1;
					area += 1;
				}
			}
		}
	}
	printf("%d", area);
}