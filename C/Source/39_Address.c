#include <stdio.h>

void main39() {

	/*
		메모리 주소
		변수를 선언하면 메모리라는 기억장치에 변수가 만들어짐
		메모리에는 주소가 존재
		변수가 만들어진 주소에 이름을 붙인 것이 "변수명"이다.
		실행마다 변수의 메모리 주소값은 계속 바뀐다
	*/

	int num = 0;
	printf("num의 메모리 주소 : %p\n", &num);
	// %p : 메모리 주소 출력 타입
	// &  : 주소 연산자(변수의 메모리주소를 반환)

	/*
		* 실습
		float, double, char, long 변수를 만들고
		각각 메모리 주소 출력
	*/

	float f;
	double d;
	char c;
	long l;

	printf("f의 메모리 주소 : %p\n", &f);
	printf("d의 메모리 주소 : %p\n", &d);
	printf("c의 메모리 주소 : %p\n", &c);
	printf("l의 메모리 주소 : %p\n", &l);
}