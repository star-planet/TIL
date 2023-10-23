#include <stdio.h>
#include <conio.h>

void main18() {

	// switch - case 문
	// switch에서 변수를 반단한다.
	// 판단한 변수에 따라 case를 실행

	int input;
	printf("정수 입력 : ");
	scanf_s("%d", &input);

	switch (input) {
	case 5: // input 값이 5라면
		puts("Five"); // 문자열 출력문
		break;
	case 3: // input 값이 3라면
		puts("Three");
		break;
	case 10: // input 값이 10라면
		puts("Ten");
		break;
	default: // 모든 case가 일치하지 않는다면
		puts("other");
		break;
	}

	// 실습
	// 문자 1개를 입력받는다.
	// switch-case문을 활용하여 입력 받은 문자에 대한 문자열을 출력
	// a : "에이" w : "더블유" defalut : "디폴트"

	int inputChar;
	char ch;
	printf("문자 입력 : ");
	ch = _getch();

	switch (ch) {
	case 'a':
		puts("에이\n");
		break;
	case 'w':
		puts("더블유\n");
		break;
	case 'g':
		puts("쥐\n");
		break;
	default:
		puts("디폴트\n");
		break;
	}

}