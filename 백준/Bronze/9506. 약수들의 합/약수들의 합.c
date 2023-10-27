#include <stdio.h>

int main(void) {
	int n;
	while (1) {
		scanf("%d", &n);
		int sum = 0;
		if (n == -1) break;
		for (int i = 1; i <= n; i++) {
			if (i != n && n % i == 0) {
				sum += i;
			}
		}
		if (n != sum) {
			printf("%d is NOT perfect.\n", n);
		}
		else {
			printf("%d = 1", n);
			for (int i = 2; i < n; i++) {
				if (i != n && n % i == 0) {
					if (i != n) {
						printf(" + %d", i);
					}
				}
			}
			printf("\n");
		}
	}
}