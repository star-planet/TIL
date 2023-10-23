#include <stdio.h>
#include <stdlib.h> // 랜덤 관련 명령어 사용시 필요

void main33() {

	/*
		* 난수
		예측할 수 없는 값
		rand() 함수는 0 ~ RAND_MAX 까지의 랜덤한 난수를 반환
		RAND_MAX는 32767의 값으로 정의되어 있음
		srand 함수를 사용하여 시작점을 제공해주어야 함
		시작점의 시드값이 일정하면 일정한 값이 나온다
	*/
	srand(0); // 난수의 시작점을 제공
	for (int i = 0; i < 10; i++) {
		// rand() : 랜덤한 난수를 반환
		int random = rand();
		printf("random : %d\n", random);
	}

}