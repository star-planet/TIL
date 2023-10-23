#include <stdio.h>

// ...은 가변인자
void ParamsFunction(int args, ...) {
	printf("args : %d\n", args);
}

void main59() {
	/*
		* 가변인자 함수
		매개변수의 갯수가 정해지지 않은 함수
		매개변수가 1개는 필요하다
		가변인자들은 첫번째 매개변수의 자료형을 따라간다.
	*/

	ParamsFunction(1, 3);
	ParamsFunction(2, 2, 3);
	ParamsFunction(2, 3.4f, 1);
	ParamsFunction(1, 'A');
}