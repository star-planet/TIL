#pragma once
#include <windows.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL)) //난수에 시드값(시작점)넣는 함수
#define random(n) (rand() % (n)) //랜덤한 값 반환 함수
#define delay(n) Sleep(n) //대기 함수
#define clrscr() system("cls") //콘솔창을 전부 지워줌
#define gotoxy(x,y) { COORD Cur = {x, y}; \
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Cur);} //커서 이동 함수
#define showcursor(bShow) { CONSOLE_CURSOR_INFO CurInfo = {20, bShow}; \
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&CurInfo); } //커서를 숨겨주는 함수
