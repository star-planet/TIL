#include <stdio.h>

void main48() {
	// 변수선언과 동시에 초기값을 넣어줘으므로
	// 컴파일러가 자동으로 배열의 크기를 파악한다.
	int arr[] = { 10,20,30,40,50 };

	printf("arr : %p\n", arr);
	//배열변수명은 배열의 첫 시작주소이다.
	int* ptr = arr;

	// 포인터 변수의 값을 증가시키면 자료형 크기만큼 옆으로 이동
	ptr++; // 4byte만큼 옆으로 이동

	printf("1. ptr : %d\n", *ptr);
	ptr++;
	printf("2. ptr : %d\n", *ptr);
	ptr--;
	printf("3. ptr : %d\n", *ptr);

	/*
		* 실습
		크기가 5인 float형 배열변수 선언
		포인터를 이용하여 3번째 인덱스 값 출력
		포인터를 이용하여 1번째 인덱스 값 출력
	*/

	float array[] = { 1.0f,2.0f,3.0f,4.0f,5.0f };
	float* fPtr = array;

	fPtr += 3;
	printf("3. fPtr : %f\n", *fPtr);
	fPtr -= 2;
	printf("1. fPtr : %f", *fPtr);
}