#include <stdio.h>

void LocalFunc() {
	int cnt = 0;
	cnt++;
	printf("Local cnt : %d\n", cnt);
}

void StaticFunc() {
	/*
		* 정적변수
		전역변수와 지역변수의 특성을 지님
		함수 내부에서만 사용가능(C언어만)
		함수 종료시에도 변수가 소멸하지 않음
		선언위치 : 함수 내부
		통용범위 : 함수 내부
		파괴시기 : 프로그램 종료시
		초기화 여부 : O-
	*/

	static int cnt = 0; // 정적변수
	cnt++;
	printf("Static cnt : %d\n", cnt);
}


void main37() {

	LocalFunc();
	LocalFunc();
	LocalFunc();

	StaticFunc();
	StaticFunc();
	StaticFunc();

}