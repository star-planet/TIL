#include <stdio.h>

void main22() {

	// 무한반복
	// 무한반복시 종료조건 혹은 컴퓨터 대기시간이 있어야 한다.

	int input;

	for (;;) { // 반복종료 조건이 없다면 무한반복
		printf("숫자입력(종료는 0) : ");
		scanf_s("%d", &input);
		if (input == 0) break;
		printf("입력한 숫자 : %d\n", input);
	}

}