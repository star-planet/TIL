#include <stdio.h>

void main42() {

	/*
		이중포인터
		포인터 변수의 메모리 주소를 저장하는 변수
		포인터의 포인터

		
	
	*/

	int num = 10;            // 변수
	int* numPtr = &num;		 // 포인터
	int** numPtr2 = &numPtr; // 이중포인터

	printf("num의 주소 : %p\n", &num);
	printf("numPtr의 주소 : %p\n", &numPtr);
	printf("numPtr2의 주소 : %p\n", &numPtr2);

	printf("\n");

	printf("numPtr의 값 : %p\n", numPtr);
	printf("numPtr2의 값 : %p\n", numPtr2);

	printf("\n");

	printf("numPtr의 역참조 값 : %d\n", *numPtr);
	printf("numPtr2의 역참조 값 : %p\n", *numPtr2);

	printf("\n");

	printf("numPtr2의 이중 역참조 값 : %d\n", **numPtr2);

	**numPtr2 = 99;

	printf("\n");
	printf("num의 값 : %d\n", num);

	printf("\n");

	// 실습
	int a = 30;
	float b = 12.34f;
	char c = 'a';
	double d = 34.56;

	int* aPtr = &a;
	float* bPtr = &b;
	char* cPtr = &c;
	double* dPtr = &d;

	int** aPtr2 = &aPtr;
	float** bPtr2 = &bPtr;
	char** cPtr2 = &cPtr;
	double** dPtr2 = &dPtr;

	**aPtr2 = 30 * 2;
	**bPtr2 = 12.34f * 2;
	**cPtr2 = 'b';
	**dPtr2 = 34.56 * 2;

	printf("a : %d\n", **aPtr2);
	printf("b : %f\n", **bPtr2);
	printf("c : %c\n", **cPtr2);
	printf("d : %f\n", **dPtr2);
}