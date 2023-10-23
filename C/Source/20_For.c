#include <stdio.h>

void main20() {

	// 반복문(for)
	// for(초기식; 조건식; 증감식)
	// 초기식 - 변수선언 및 초기값 할당
	// 조건식 - 조건이 true면 반복, false면 반복종료
	// 증감식 - 반복할때마다 변수의 값을 증감 혹은 감소

	for (int i = 0; i < 3; i++) {
		printf("Hello World\n");
		// for 문에서 선언된 변수는 for 문이 끝나면 소멸한다.
	}

	// 실습
	// for문을 이용하여 "Unreal"을 10번 출력

	for (int i = 0; i < 10; i++) {
		printf("Unreal\n");
	}

	for (int i = 0; i < 5; i++) {
		printf("%d번째 반복\n", i);
	}

	// 감소식 사용
	for (int i = 10; i > 0; i--) {
		printf("%d번째 감소\n", i);
	}

	// 2씩 증가
	for (int i = 0; i < 10; i += 2) {
		printf("짝수: %d\n", i);
	}

	// 실습
	// for문을 이용해서 1~100까지 합을 출력
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1 ~ 100까지의 합 : %d", sum);

	// 2중 for문
	// for문 안에 for문이 있는 것

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("j: %d ", j);
		}
		printf("// i : %d\n", i);
	}
}