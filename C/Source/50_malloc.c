#include <stdio.h>
#include <malloc.h> // malloc 명령어 사용시 필요

void main50() {

	/*
		정적 할당
		컴파일시 메모리를 할당
		프로그램 종료시 메모리가 자동으로 해제
	*/

	int num = 10; // 정적할당
	float arr[3] = { 1.1f, 2.2f, 3.3f }; // 정적할당

	/*
		* 동적 할당
		런타임시 메모리를 할당(게임 중)
		사용자가 직접 메모리를 해제해야 함(중요)
		프로그램 실행 도중 필요한 만큼만 메모리를 할당
		미리 많은 양을 할당하면 메모리가 낭비됨
		옛날에는 메모리 용량이 매우 적었음
		메모리 용량이 커진 지금도 메모리 용량은 매우 귀중함
		메모리 용량이 커진만큼 프로그램도 비대해졌기 때문
	*/

	/*
		* 메모리 관리 원칙
		필요한 만큼만 요청하여 할당받아 사용
		운영체제는 메모리가 남아있다면 요청을 거절하지 않는다
		남는 메모리가 없다면 NULL을 반환하여 메모리 부족을 알림
		다 사용한 메모리는 반드시 해제해서 반납해야 한다.(중요)
	*/

	/* 
		* 메모리 누수(Memory Leak)
		메모리를 할당하고 해제하지 않으면 시스템의 메모리가 부족해짐
		메모리가 부족하다면 프로그램을 강제 종료시킴
		메모리를 해제하지 않아 메모리 사용량이 증가하는 것을 의미
	*/
	
	// malloc : 동적할당 
	// sizeof : 데이터 크기
	int* ptr = malloc(sizeof(int));
	*ptr = 5; // 동적할당받는 메모리 공간에 5의 값을 넣어줌
	printf("ptr : %d\n", *ptr);
	free(ptr); // 메모리 해제(까먹지 않게 조심)

	//int형 크기만큼 3개의 공간을 할당
	int* arrPtr = malloc(sizeof(int) * 3);
	arrPtr[0] = 10;
	arrPtr[1] = 20;
	arrPtr[2] = 30;

	for (int i = 0; i < 3; i++) {
		printf("arrPtr[%d] : %d\n", i, arrPtr[i]);
	}
	free(arrPtr);

	/*
		* 동적할당 활용
	*/

	int* score;

	int cnt, result = 0;

	printf("인원 입력 : ");
	scanf_s("%d", &cnt); // 인원수를 입력받음

	score = malloc(sizeof(int) * cnt); // 인원수만큼 런타임시 메모리 할당
	if (score == NULL) {
		printf("메모리 부족\n");
		return;
	}
	
	for (int i = 0; i < cnt; i++) {
		printf("%d번째 인원 점수 : ", i + 1);
		scanf_s("%d", &score[i]); // 점수값을 입력받음
		result += score[i];
	}

	printf("총점 : %d\n", result);
	printf("평균 : %d\n", result / cnt);
	free(score); // 메모리 해제

	/*
		* 실습
		갯수를 입력받아서 갯수만큼 float형 값을 입력받는다.
		float형 값을 모두 더한 총점과 평균 출력
	*/

	float* score2;
	int cnt2;
	float result2 = 0;

	printf("인원 입력 : ");
	scanf_s("%d", &cnt2);

	score2 = malloc(sizeof(float) * cnt2);

	if (score2 == NULL) {
			printf("메모리 부족\n");
			return;
		}

	for (int i = 0; i < cnt2; i++) {
		printf("%d번째 점수 : ", i + 1);
		scanf_s("%f", &score2[i]);
		result2 += score2[i]; 
	}

	printf("총점 : %.2f\n", result2);
	printf("평균 : %.2f\n", result2 / cnt2);
}