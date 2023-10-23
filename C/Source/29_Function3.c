#include <stdio.h>

/*
	* 매개변수
	함수에서 사용될 변수
	함수 호출시 값을 받아올 수 있다.
	호출시 매개변수에 들어가는 값을 "인자"라고 한다
*/

void Dubae(int value) {  // value는 매개변수
	/*
		* 지역변수
		* 함수 안에 선언된 변수
		* 함수가 끝나면 소멸한다.
	*/
	int result = value * 2;
	printf("두배 한 값 : %d\n", result);
}

int AddNum(int a, int b) {
	int result = a + b;
	printf("더한 값 : %d\n", result);
	return result;
}

void SumAtoB(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	printf("%d부터 %d까지의 합 : %d\n", a, b, sum);
}

void fTimes(float a, float b, float c) {
	float result = a * b * c;
	printf("모두 곱한 값 : %f\n", result);
}


void main29() {
	Dubae(3);  // 3은 인자

	AddNum(11, 22);

	// 실습
	// 1. float형 매개변수 3개를 받아서 모두 곱한값을 출력하는 함수 제작
	// 2. 매개변수 int a, int b가 있으면 a부터 b까지 모두 더한 값을 출력하는 함수 제작

	fTimes(2.3f, 4.5f, 6.23f);
	SumAtoB(30, 60);
}