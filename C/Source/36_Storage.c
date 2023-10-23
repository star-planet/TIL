#include <stdio.h>

/*
	* 전역변수
	선언위치 : 함수 외부
	통용범위 : 프로그램 전체
*/

int global; // 전역변수

void LocalTest() {
	/*
		* 지역변수
		선언위치 : 함수 내부
		통용범위 : 함수 내부
		파괴시기 : 함수 종료시
		초기화 여부 : X (쓰레기 값이 들어감)
	
	*/
	global = 10;
	int local = 20; // 지역변수
	printf("지역변수 : %d\n", local);
}

void main36() {

	/*
		* 기억부류
		변수가 생성되는 장소, 방법에 따라
		통용범위, 초기화여부, 파괴시기가 달라진다.
	*/

	printf("전역 변수 : %d\n", global);



}