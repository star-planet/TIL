#include <stdio.h>

enum Days {
	// 열거형은 숫자를 안넣으면 0부터 시작된다.
	// 다음 숫자는 1씩 증가한다.
	Sun,
	Mon,
	Tue,
	Wed = 10,
	Thu,
	Fri,
	Sat
}; // 열거형 정의(정의 : 기능을 만듦)

enum State {
	idle,
	move,
	death,
	attack = 9
};

void main25() {

	// 열거형
	// 정수형 변수를 열거해놓은 사용자 정의 자료형
	// 오류를 줄이고 가독성을 높힐 수 있다
	// 의미를 쉽게 파악할 수 있다.

	char mon[7] = "월요일"; // 문자열은 오타가능성이 있다;

	enum Days day; // 열거형 변수 선언
	day = Mon;

	if (day == Mon) {
		printf("월요일 입니다.\n");
	} 

	else if (day == Sun) {
		printf("일요일 입니다.\n");
	}

	/*
	실습
	State라는 이름의 열거형 만들기
	idle, move, attack, death 상태가 있다.
	attack은 9의 값을 가진다.
	main함수에서 변수 선언후 attack상태 넣어주기
	attack 상태라면 "공격" 출력
	*/

	enum State state;
	state = attack;


	if (state == attack)
		printf("공격 (attack : %d)", state);


}