#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main35() {

	// 난수의 범위
	// rand()함수는 범위가 0 ~32767로 지정이 되어 있다.
	// % 연산을 사용하면 범위 지정 가능

	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) {
		printf("난수 : %d\n", rand() % 10); // 0 ~ 9까지의 난수
	}

	// 실습
	// 난수를 이용하여 랜덤하게 "가위", "바위", "보" 중 1개 출력

	switch (rand() % 3)
	{
	case 0:
		printf("가위");
		break;
	case 1:
		printf("바위");
		break;
	case 2:
		printf("보");
	default:
		break;
	}

}