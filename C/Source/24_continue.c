#include <stdio.h>

void main24() {

	// continue
	// 반복을 1번 건너뛰는 역할

	int input;
	printf("건너 뛸 번호 : ");
	scanf_s("%d", &input);

	for (int i = 0; i < 10; i++) {
		if (i == input)
			continue;
		printf("i : %d\n", i);
	}

}