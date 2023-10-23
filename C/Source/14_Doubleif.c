#include <stdio.h>

void main14() {

	int a = 10;
	int b = 20;

	if (a == 10) {
		if (b == 20) {
			printf("이중if\n");
		}
	}

	if (a == 10 && b == 20) {
		printf("이중if\n");
	}

	// 이중 if문
	// 첫번째 if 조건을 만족하며 두번째 if의 조건까지 만족해야한다.
	// and(&&) 연산자와 조건이 같다.

	//실습
	// 정수 1개를 입력받아서 이중 if문을 활용하여 음수, 양수, 짝수, 홀수인지를 출력
	// ex) 양수/짝수, 음수/홀수

	int input;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &input);

	if (input > 0) {
		if (!(input % 2)) {
			printf("양수/짝수\n");
		}
		else {
			printf("양수/홀수\n");
		}
	}

	else if (input < 0) {
		if (!(input % 2)) {
			printf("음수/짝수\n");
		}
		else {
			printf("음수/홀수\n");
		}
	}

	else {
		printf("0\n");
	}

}