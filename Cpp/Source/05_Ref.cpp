#include <stdio.h>

void main5()
{
	/*
		* 참조형 변수
		3번째 변수 타입 (1. 일반변수, 2. 포인터 변수)
		값의 별칭으로 사용된다
		초기값을 넣어주어야 한다.
		실제 메모리를 점유하고 있는 변수를 넣어야 한다.
		함수의 매개변수로 사용할 경우 초기값을 넣지 않아도 된다.
	*/

	int num = 3; // 일반변수
	int& ref = num;
	// 자료형 옆에 쓰는 "&"기호는 주소(Address)가 아닌 참조(Reference)의 의미
	// ref와 num은 동일


	printf("num : %d / ref : %d\n", num, ref);
	printf("num : %p / ref : %p\n", &num, &ref);

	ref = 55;
	printf("num : %d / ref : %d\n", num, ref);
	num = 333;
	printf("num : %d / ref : %d\n", num, ref);

	/*
		* 실습
		float형 변수와 참조형 변수 만들기
		값변경 후 출력
		메모리주소값도 각각 출력해보기
	*/

	float value = 3.0f;
	float& refValue = value;

	printf("value = %f / refValue = %f\n", value, refValue);
	printf("value = %p / refValue = %p\n", &value, &refValue);
	refValue = 5.5f;
	printf("value = %f / refValue = %f\n", value, refValue);
	value = 7.34f;
	printf("value = %f / refValue = %f\n", value, refValue);
}
