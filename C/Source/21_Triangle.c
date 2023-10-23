#include <stdio.h>

void main21() {

	// 별찍기
	// *을 1개 출력하는것을 이용하여 반복문을 사용하여
	// 삼각형을 출력하는 것

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 삼각형
	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 역삼각형
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}

		for (int k = 10; k >= i; k--) {
			printf("*");
		}
		printf("\n");
	}

}