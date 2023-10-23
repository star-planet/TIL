#include <stdio.h>

void main49() {
	/*
		* NULL
		값이 없다는 뜻
		정확하게는 메모리 0번지
		널 포인터는 아무것도 가리키지 않는 상태를 의미한다.
	*/
	int* nullPtr = NULL;

	printf("nullPtr : %p\n", nullPtr);
}