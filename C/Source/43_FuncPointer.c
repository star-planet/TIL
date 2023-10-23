#include <stdio.h>


void HelloWorld() {
	printf("Hello, World\n");
}

int AddNumPrint(int x, int y) {
	printf("합계 : %d\n", x + y);
	return x + y;
}

void test() {
	printf("void 함수\n");
}

int test1(int x) {
	printf("int 함수 : %d\n", x);
	return x;
}

float test2(float x, float y, float z) {
	printf("float 함수 : %f %f %f\n", x, y, z);
	return x, y, z;
}

void main43() {

	/*
		함수 포인터
		함수도 메모리 주소가 존재한다
		함수포인터는 함수의 메모리주소를 저장하는 변수
	
	*/
	
	void (*funcPtr)() = HelloWorld;
	funcPtr();

	int (*addPtr)(int, int) = AddNumPrint;
	addPtr(1, 2);

	/* 
		* 실습
		1. 반환 자료형 void 함수(매개변수x)인 함수를 만들고
		   함수포인터에 넣은 후 호출

		2. 반환 자료형 int 함수(매개변수 1개)인 함수를 만들고
		   함수포인터에 넣은 후 호출

		3. 반환 자료형 float 함수(매개변수 3개)인 함수를 만들고
		   함수포인터에 넣은 후 호출
	 */

	void(*funcPtr2)() = test;
	funcPtr2();

	int(*testPtr)(int) = test1;
	testPtr(5);

	float(*testPtr2)(float, float, float) = test2;
	testPtr2(1.2f, 3.4f, 5.6f);
	
}