#include <stdio.h>

void main40() {

	/*
		* 포인터
		변수의 메모리 주소를 저장하는 변수
		"가리키는 것"이라는 뜻을 가지고 있다.

		* 포인터 변수 선언 방법
		변수의 자료형 뒤에 *(Asterisk)를 붙인다.
		위치에 따른 차이는 없다.
		ex) int* numPtr;
			int * numPtr;
			int *numPtr;
	*/

	int num = 10;
	int* numPtr = &num;

	printf("num의 주소 : %p\n", &num);
	printf("numPtr의 값 : %p\n", numPtr);

	num = 55;

	printf("num의 값 : %d\n", num);
	printf("numPtr의 역참조 값 : %d\n", *numPtr);

	// 원래는 자료형이 다르면 메모리주소를 저장할 수 없다.
	float value = 12.34f;
	int* valuePtr = &value;

	printf("%p\n", valuePtr);
}