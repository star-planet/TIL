#include <stdio.h>
#include <Windows.h> //Sleep명령어 사용 시 필요

void main23() {
	
	// 반복문(while)
	// 조건을 만족하면 반복, 조건이 false면 종료
	// 초기식, 증감식이 따로 없다.

	//int percent = 0;

	//while (percent <= 100) {
	//	percent++;
	//	printf(".");
	//	Sleep(30); // 0.03초 대기
	//}
	//printf("로딩 완료\n");

	// 실습
	// while문을 사용하여 30부터 60까지의 합을 출력
	// 단, 홀수만 더해야 함

	int num = 30;
	int sum = 0;

	while (num < 61) {
		num++;
		if (num % 2) {
			sum += num;
		}
	}
	printf("sum : %d", sum);

}