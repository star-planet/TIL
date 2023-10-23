#include <stdio.h>

void main46() {

	/*
		* 배열(Array)
		같은 타입의 변수 집합
		관련정보를 저장하는 변수를 하나의 이름으로 모아둔 것
		배열을 구성하는 개별 변수를 "요소"라고 부름
		각 배열의 공간 번호를 index(인덱스)라고 함
		배열의 인덱스는 0번부터 시작
	*/

	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	// arr[5] = 60;  // 배열 범위를 벗어남
	// arr[-1] = 20; // 배열 범위를 벗어남

	int arr2[3] = { 11,22,33 };

	/*
		* 과제
		1. float형으로 크기가 5인 배열 선언
		각각 값을 넣어주고 모두 더한값을 출력
	*/
	float sum = 0;
	float fArr[5] = { 1.2f,3.4f,5.6f,7.8f,9.0f };

	for (int i = 0; i < 5; i++) {
		sum += fArr[i];
	}

	printf("float배열 값의 합 : %f\n", sum);

	/*
		* 과제
		2. int형으로 크기가 3인 배열 선언
		scanf_s를 통해 각각 값을 넣어주고 모두 곱한 값을 출력
	*/

	int sum2 = 1;
	int iArr[3];

	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &iArr[i]);
	}

	for (int i = 0; i < 3; i++) {
		sum2 *= iArr[i];
	}

	printf("int배열 값의 곱의 합 : %d", sum2);
	
}