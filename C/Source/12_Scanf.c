#include <stdio.h>
#include <conio.h>  // getch

void main12() {

	int input;
	printf("숫자 입력: ");
	scanf_s("%d", &input);
	printf("입력 값 : %d\n", input);

	float speed;
	printf("실수 입력: ");
	scanf_s("%f", &speed);
	printf("입력 실수: %f\n", speed);

	char ch;
	printf("문자 입력: ");
	ch = _getch();
	printf("입력 문자: %c\n", ch);

	// 실습
	// 실수 2개를 입력받아서 더한값, 뺀값, 곱한값, 나눈값 출력
	int a, b;
	printf("첫 번째 숫자: ");
	scanf_s("%d", &a);

	printf("두 번째 숫자: ");
	scanf_s("%d", &b);

	printf("더한값 : %d\n", a+b);
	printf("뺀값 : %d\n", a-b);
	printf("곱한값 : %d\n", a*b);
	printf("나눈값 : %d\n", a/b);
}