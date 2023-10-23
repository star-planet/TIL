#include <stdio.h>

void main7() {

	// 복합 대입 연산자
	// 사칙연산 진행 후 변수에 값을 대입함

	int money = 10;
	//money = money + 5;
	money += 5; // money변수 값을 5 증가
	printf("money : %d\n", money);

	money -= 3; // money 변수 값을 3 감소
	printf("money : %d\n", money);

	money *= 2; // money 변수 값을 2배 증가
	printf("money : %d\n", money);

	money /= 4; // money 변수 값을 4배 감소
	printf("money : %d\n", money);

	// 실습
	// float형 변수 선언 후 복합대입연산자 1번씩 사용해보기

	float mp = 127.0f;

	mp += 51.2;
	printf("hp: %.2f\n", mp);

	mp -= 22.34;
	printf("hp: %.2f\n", mp);

	mp *= 2.7;
	printf("hp: %.2f\n", mp);

	mp /= 3.5;
	printf("hp: %.2f\n", mp);

}