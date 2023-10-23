#include <stdio.h>

void main5() {

	// 사칙연산
	// 더하기(+), 뺴기(-), 곱하기 (*), 나누기 (/), 나머지 (%)

	printf("3 + 2 = %d\n", 3 + 2);
	printf("10 - 5 = %d\n", 10 - 5);

	int a = 10, b = 5, result;

	result = a + b;
	printf("a + b = %d\n", result);

	result = a - b;
	printf("a - b = %d\n", result);

	result = a * b;
	printf("a * b = %d\n", result);

	result = a / b;
	printf("a / b = %d\n", result);

	result = a % b;
	printf("a %% b = %d\n", result);

	result = 10 % 3;
	printf("10 %% 3 = %d\n", result);

	float value, q = 10.0f, w = 3.0f;
	// value = q % w;
	// 나머지 연산은 실수형은 무조건 나머지가 0이 나온다.
	// 실수방지로 c언어에서 막아놓음
	value = q / w;
	printf("q / w = %f\n", value);

	// 주의사항
	// 더하기와 곱하기가 같이있으면 가독서을 위해 괄호를 넣어준다.
	result = 2 + (3 * 4);
	printf("2 + 3 * 4 = %d\n", result);


	// 실습
	// float형으로 변수를 만들고 사칙연산 값 출력

	float fValue1 = 33.0f, fValue2 = 12.0f, result2;

	result2 = fValue1 + fValue2;
	printf("%.2f + %.2f = %.2f\n", fValue1, fValue2, result2);
	result2 = fValue1 - fValue2;
	printf("%.2f - %.2f = %.2f\n", fValue1, fValue2, result2);
	result2 = fValue1 / fValue2;
	printf("%.2f / %.2f = %.2f\n", fValue1, fValue2, result2);
	result2 = fValue1 * fValue2;
	printf("%.2f * %.2f = %.2f\n", fValue1, fValue2, result2);




}