#include <stdio.h>

void main16() {

	// 이진수
	// 0과 1이라는 2가지 숫자로만 구성된 수
	
	// 비트(bit)
	// 컴퓨터가 자료를 다룰때 사용하는 최소 단위

	// 바이트(byte)
	// 8개의 비트가 모인 단위
	// 1byte = 8bit
	// 1byte로 나타낼 수 있는 값의 범위 0~255


	// 비트연산자
	// bit단위로 논리연산을 할 때 사용

	// & : 대응되는 비트가 모두 1이면 1을 반환(AND연산)
	// | : 대응되는 비트가 하나라도 1이면 1을 반환(OR연산)
	// ^ : 대응되는 비트가 서르 다르면 1을 반환 (XOR연산)
	// ~ : 비트가 1이면 0으로 0이면 1을 반환(NOT연산)

	// 쉬프트 연산
	// << : 지정 수만큼 비트를 왼쪽으로 이동
	// >> : 지정 수만큼 비트를 오른쪽으로 이동

	// unsigned : 자료형을 양수만 표현
	// char : -128 ~ 127(1byte)
	// unsigned char : 0 ~ 255(0000 0000)

	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 3; // 0000 0011

	printf("num1 & num2: %d\n", num1 & num2); // 0000 0001
	printf("num1 & num2: %d\n", num1 | num2); // 0000 0011
	printf("num1 & num2: %d\n", num1 ^ num2); // 0000 0010

	unsigned char num3 = 162; // 1010 0010
	unsigned char num4 = ~162; // 0101 1101

	printf("~num3: %d\n", num4);

	unsigned char num5 = 3; // 0000 0011
	printf("num5 << 3: %d\n", num5 << 3); // 0001 1000 (24)

	unsigned char num6 = 24; // 0001 1000
	printf("num6 >> 2: %d\n", num6 >> 2); //0000 0110;
}