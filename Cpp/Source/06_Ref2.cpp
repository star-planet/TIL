#include <stdio.h>

void main6()
{
	//참조형 변수는 초기화 후 다른 변수를 참조할 수 없다.

	int a = 3;
	int b = 7;
	int& ref = a; // ref는 a변수를 참조한다.
	
	ref = b; // b의 값이 복사되어 ref에 들어간다.

	printf("a : %d / b : %d / ref : %d\n", a, b, ref);

	b = 10; // b의 값을 10으로 바꿨지만 a와 ref는 바뀌지 않는다.
	printf("a : %d / b : %d / ref : %d\n", a, b, ref);

	printf("a   : %p\n", &a);
	printf("b   : %p\n", &b);
	printf("ref : %p\n", &ref);

}
