#include <stdio.h>

void main8() {

	// 증감 연산자
	// 변수의 값을 1 증가시키거나 감소시키는 연산자

	// 1. 전위증가
	// 선증가 후연산
	// 변수의 값을 1 증가시킨 후 명령어를 연산
	int num1 = 3;
	printf("전위증가 : %d\n", ++num1);
	printf("전위증가 : %d\n", num1);
	printf("\n");

	// 2. 후위증가
	// 선연산 후증가
	// 명령어를 연산 후 변수의 값을 1 증가
	int num2 = 3;
	printf("후위증가 : %d\n", num2++);
	printf("후위증가 : %d\n", num2);
	printf("\n");

	// 3. 전위감소
	// 선감소 후연산
	// 변수의 값을 1 감소시킨 후 명령어를 연산
	int num3 = 3;
	printf("전위감소 : %d\n", --num3);
	printf("전위감소 : %d\n", num3);
	printf("\n");

	// 4. 후위감소
	// 선연산 후감소
	// 명령어를 연산 후 변수의 값을 1 감소
	int num4 = 3;
	printf("후위감소 : %d\n", num4--);
	printf("후위감소 : %d\n", num4);
	printf("\n");

	// 실습
	//  변수선언 후 5의 값 넣어주기
	// 증감연산자를 사용하여 8로 만든 후 출력
	// 증감연산자를 사용하여 4로 만든 후 출력

	int n = 5;
	printf("n의 값 : %d\n", n);
	n++;
	n++;
	n++;
	printf("n의 값 : %d\n", n);
	n--;
	n--;
	n--;
	n--;
	printf("n의 값 : %d\n", n);

}