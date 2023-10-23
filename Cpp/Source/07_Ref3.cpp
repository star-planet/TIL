#include <stdio.h>

/*
	* namespace
	이름공간
	식별자(변수명, 함수명, 구조체명)의 중복을 방지하는 역할
	식별자들이 겹치지 않게 별도의 공간을 만듦
*/
namespace Study7
{
	void Plus(int value)
	{
		value++;
	}
	void PlusPtr(int* value)
	{
		(*value)++;
	}
	void PlusRef(int& value)
	{
		value++;
	}
}


void main7()
{
	int a = 10;
	int b = 10;
	int c = 10;

	Study7::Plus(a);       // a의 값이 복사되어 value에 들어간다
	printf("a: %d\n", a);  // a는 변하지 않는다

	Study7::PlusPtr(&b);   // value에 b의 주소값이 들어간다 -> value의 역참조값을 ++ 해준다
	printf("b : %d\n", b); // b의 값은 1이 더해진다

	Study7::PlusRef(c);    // value가 c의 참조값으로 생성된다 
	printf("c : %d\n", c); // c의 값은 1이 더해진다

	// 참조형변수를 함수의 매개변수로 쓰면 포인터변수를 매개변수로 쓰는 것보다 성능상 이점이 있다.
}
