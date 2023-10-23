#include <stdio.h>

void main13() {

	// 조건문(if)
	// 조건이 true인지, false인지에 따라 코드블럭 실행

	int a = 10;

	if (a > 5) {
		printf("a는 5보다 크다.\n");
	}

	if (a < 5) {
		printf("a는 5보다 작다.\n");
	}

	// if문의 중괄호가 없으면 바로 밑 1줄만 if의 영향을 받는다
	if (a != 10)
		printf("a는 10입니다.\n");
	printf("테스트\n");

	// else if
	// 단독으로 사용할 수 없다.
	// 위에 if문이 있어야 한다.
	// 위에 if문이 거짓이고 else if의 조건이 true라면 코드블럭 실행

	// else
	// 단독으로 사용할 수 없다.
	// 위에 is 혹은 else if문이 있어야한다.
	// 위에 if와 else if의 조건이 모두 거짓이면 코드블럭 실행

	int num = 10;

	if (num > 10) {
		printf("num은 10보다 크다.\n");
	}

	else if (num < 10) {
		printf("num은 10보다 작다.\n");
	}

	else {
		printf("num은 10이다.\n");
	}

	// 실습
	// 정수값을 입력받는다.
	// 입력받은 값이 "양수"인지, "음수"인지, 0인지 출력

	int input;
	printf("정수 값 입력: ");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("양수\n");
	}

	else if (a < 0) {
		printf("음수\n");
	}

	else {
		printf("0\n");
	}

}