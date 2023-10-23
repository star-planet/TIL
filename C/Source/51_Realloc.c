#include <stdio.h>
#include <malloc.h>

void main51() {

	/*
		* 동적 재할당
		런타임시 메모리공간을 더 확보하거나 줄이는 방법
	*/

	int* ptr = malloc(sizeof(int) * 5); // 5개 공간을 할당

	for (int i = 0; i < 5; i++) {
		ptr[i] = i;
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}

	printf("\n");

	// 동적 재할당으로 공간을 10개로 만들어준다.
	ptr = realloc(ptr, sizeof(int) * 10);

	for (int i = 0; i < 10; i++) {
		ptr[i] = i;
	}

	for (int i = 0; i < 10; i++) {
		printf("ptr[%d] = %d\n", i, ptr[i]);
	}

	free(ptr);

}