#pragma warning(disable: 4996) // 오래된 명령어 오류 무시

#include <stdio.h>
#include <time.h>

void main32() {

	/*
		* 시간
		time_t는 1970년 1월 1일 자정을 기준으로 경과한 초를 저장
		1970년 1월 1일을 "에폭 타임"이라고 함
		time_t는 길이가 32비트에 불과하여 2038년 1월 18일 까지 저장가능
	*/

	// typedef : 자료형의 이름을 바꿔줌
	time_t now;
	time(&now);
	// ctime : 시간을 문자열로 변환
	printf("현재시간 : %s", ctime(&now));

	clock_t t1, t2;
	// clock() : 프로그램이 시작한 후 경과한 시간을 반환
	t1 = clock();
	for (int i = 0; i < 1000; i++) {
		printf("%d 번째 출력\n", i);
	}
	t2 = clock();

	double workTime = (t2 - t1) / (double)CLOCKS_PER_SEC;
	printf("%f 초 걸림\n", workTime);

}