#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main34() {

	// unsigned : 양수로 바꿔줌
	// time(NULL) : 현재시간
	// 현재시간을 시작점으로 넣어서 시드값에 변화를 줌

	srand((unsigned)time(NULL)); // main함수에 한 번만 넣어주면 됨

	/*for (int i = 0; i < 10; i++) {
		int random = rand();
		printf("난수 : %d\n", random);
	}*/

	// 실습
	// 난수의 범위 지정해주기
	// 난수를 0~10까지의 난수로 만들어서 10번 출력

	for (int i = 0; i < 10; i++) {
		int random = rand() % 10;
		printf("난수 : %d\n", random);
	}

}