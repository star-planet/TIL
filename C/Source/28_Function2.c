#include <stdio.h>
/*
	* 함수의 반환자료형
	반환할 값에 해당하는 자료형을 적어주어야 한다.
*/

int One() {
	return 1;
}

float TwoTwo() {
	return 2.2f;
}

char CharTest() {
	char ch = 'f';
	return ch;
}

/*
	* void
	"무형"이라는 뜻
	함수에 사용하면 반환값이 없다는 의미
	void가 아닌 함수는 return을 써서 값을 반환해야 한다.
*/

void PrintTest() {
	printf("보이드함수\n");
}

void ReturnTest() {
	printf("1. 출력\n");
	return; // 함수 종료
	printf("2. 출력안됨\n");
}

void main28() {

	printf("One() : %d\n", One());
	printf("TwoTwo() : %.1f\n", TwoTwo());
	printf("CharTest() : %c\n", CharTest());

	PrintTest();
	ReturnTest();

}