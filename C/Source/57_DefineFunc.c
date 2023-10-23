#include <stdio.h>

#define DUBAE(num) num + num
#define JEGOB(a) a * a
#define ADD(a, b) a + b

void main57() {

	/*
		매크로함수
		#define을 이용하여 인수를 받아 함수 흉내를 냄
	*/

	printf("5를 2배 : %d\n", DUBAE(5));
	//printf("5를 2배 : %d\n", 5 + 5);

	int value = 6;
	//printf("value의 제곱 : %d\n", JEGOB(++value));
	printf("value의 제곱 : %d\n", ++value * ++value);

	printf("5 + 10 = %d\n", ADD(5, 10));

}