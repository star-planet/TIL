#include <stdio.h>

void main15() {

	//int num = 10;
	//int result;

	//if (num == 10) {
	//	result = 100;
	//}

	//else {
	//	result = 200;
	//}

	//// 삼항연산자
	//// (조건식) ? (true인 경우) : (false인 경우)
	//result = (num == 10) ? 100 : 200;

	//printf("result: %d\n", result);

	// 실습
	// 정수값을 입력받는다
	// 삼항연산자를 이용하여 홀수라면 "홀수", 짝수라면 "짝수" 출력

	int input;

	scanf_s("%d", &input);

	input % 2 == 0 ? printf("짝수") : printf("홀수");

}