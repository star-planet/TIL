#include <stdio.h>

void main17(){

	// 형변환
	// 데이터 자료형을 바꿔주는 것

	// 자동형변환
	// 컴파일러가 자동으로 데이터의 자료형을 변환
	// 범위가 큰것에서 작은것으로 바꾸는 경우 데이터 범위가 바뀜
	// 사용자가 수동으로 형변환 해주는 것이 안전
	// 형변환 우선순위 : char -> int -> long -> float -> double

	int a = 5;
	double b = 12.34;
	printf("a + b : %f\n", a + b); // int -> double 자동형변환

	float c = a;
	printf("c : %f\n", c); // int -> float 자동형변환

	// 수동형변환
	// 사용자가 직접 자료형을 변환하는것

	int num1 = 123;
	int num2 = 456;
	printf("num / num2 : %d\n", num1 / num2);
	printf("num / num2 : %f\n", (float)num1 / num2);

	// 실습
	// float형 변수를 int형으로 변환하여 출력
	// int형 변수를 float형으로 변환하여 출력

	float i = 5;
	int j = 6;

	printf("float -> int : %d\n", (int)i);
	printf("int -> float : %f\n", (float)j);



}