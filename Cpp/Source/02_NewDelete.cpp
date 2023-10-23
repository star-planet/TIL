#include <stdio.h>
#include <malloc.h>

void main2() 
{
	/*
		동적할당
		C언어 : malloc/free 함수를 사용하여 동적할당 및 해제
		C++ : new/delete 연산자를 사용하여 동적할당 및 해제
	*/

	// C언어 방식 동적할당
	int* ptr1 = (int*)malloc(sizeof(int)); // 4byte를 할당
	*ptr1 = 10;
	printf("ptr1 = %d\n", *ptr1);
	free(ptr1);

	// C++ 방식 동적할당
	int* ptr2 = new int; // 4byte 할당
	*ptr2 = 20;
	printf("ptr2 = %d\n", *ptr2);
	delete ptr2;

	/*
		* 실습
		C++방식으로 float형, char형을 각각 동적할당 및 해제
		해제전에 값을 넣고 값을 출력
	*/

	float* ptr3 = new float;
	*ptr3 = 3.35f;
	printf("ptr3 = %f\n", *ptr3);
	delete ptr3;

	char* ptr4 = new char;
	*ptr4 = 'c';
	printf("ptr4 = %c\n", *ptr4);
	delete ptr4;

}
