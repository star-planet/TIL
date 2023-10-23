#include <stdio.h>

int GetSum(int from, int to); // 함수의 원형

void main30() {
	/*
		* 함수의 원형
		원래는 함수 호출전에 함수의 정보를 컴파일러에게 전달 해야한다.
		함수의 원형은 컴파일러에게 함수의 정보를 미리 전해주는 역할
	*/
	GetSum(30, 60);

}

int GetSum(int from, int to) {
	int result = 0;
	for (int i = from; i <= to; i++) {
		result += i;
	}
	printf("총 합계 : %d\n", result);
	return result;
}
