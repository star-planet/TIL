#include <stdio.h>
#include <stdbool.h>

void main10() {

	// 참 : 이치에 맞음, 옳다. 1이라는 값으로 표현됨
	// 거짓 : 이치에 맞지 않음, 허위. 0이라는 값으로 표현됨

	// 비교연산자
	// 피연산자 2개를 취하며 좌변과 우변을 비교한다.
	// 비교한 결과를 진위형(true, false)로 반환한다.

	// 상등연산자
	// '==' : 좌변과 우변을 비교하여 같다면 true 다르면 false
	// '!=' : 좌변과 우변을 비교하여 다르면 true 같으면 false

	printf("* 상등연산자\n");
	int num1 = 10;
	printf("num1 == 10 : %d\n", num1 == 10); // true
	printf("num1 == 5 : %d\n", num1 == 5); // false
	printf("num1 != 10 : %d\n", num1 != 10); // false
	printf("num1 != 5 : %d\n", num1 != 5); // true
	printf("\n");

	// 관계연산자
	// '>' : 좌변이 우변보다 크다면 true 작거나 같다면 false(초과)
	// '<' : 좌변이 우변보다 작다면 true 크거나 같다면 false(미만)
	// '>= ' : 좌변이 우변보다 크거나 같다면 true 작다면 false(이상)
	// '<=' : 좌변이 우변보다 작거나 같다면 true 크다면 false(이하)

	printf("* 관계연산자\n");
	int num2 = 10;
	printf("num > 5 : %d\n", num2 > 5); // true
	printf("num < 5 : %d\n", num2 < 5); // false
	printf("num >= 10 : %d\n", num2 >= 10); // true
	printf("num <= 3 : %d\n", num2 <= 3); // false

}