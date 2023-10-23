#include <stdio.h>
#include "start.h"

/* 난수 맞추기 게임 */
void main63() {
	randomize();// 난수생성기
	int computer = random(100);// 0~99까지의 난수
	int count = 0;
	for (;;) {
		int user;
		printf("숫자 입력: ");
		scanf_s("%d", &user);// 입력을 받음
		if (user == computer) {// 난수와 입력받은 값이 같다면
			printf("정답을 맞추셨습니다!\n");
			printf("새로운 게임이 시작됩니다.\n");
			count = 0;
			randomize();
			computer = random(100);
			delay(2000);
			clrscr();
		}

		else if (user < computer) {// 정답이 더 크다면
			printf("Up!\n");
			count++;
		}

		else {// 정답이 더 작다면
			printf("Down!\n");
			count++;
		}

		if (count > 9) {
			printf("10번의 기회가 모두 소진되었습니다.\n");
			printf("게임을 재시작합니다.\n");
			count = 0;
			randomize();
			computer = random(100);
			delay(2000);
			clrscr();
		}
	}

	/*
		* 실습
		정답을 맞출 수 있는 기회 10번으로 횟수제한 만들어주기
		정답을 맞추거나 기회가 끝나면 재시작 할 수 있도록 만들어주기
	
	*/
}