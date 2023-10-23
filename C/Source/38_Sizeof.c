#include <stdio.h>

void main38() {
	/*
		* sizeof
		피연산자가 차지하는 메모리 크기를 반환
	*/

	int a = 3;

	printf("int : %d\n", sizeof(int));				// int자료형의 크기
	printf("a : %d\n", sizeof(a));					// a자료형의 크기
	printf("double : %d\n", sizeof(double));		// double자료형의 크기
	printf("string : %d\n", sizeof("안녕하세요"));	// 문자열의 크기

}