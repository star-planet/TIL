#include <stdio.h>
#include <conio.h>
#include "start.h"
#pragma warning(disable : 4996)
void main66() {

	int x = 40, y = 12; // 현재 좌표
	int dx = 1, dy = 1; // 이동 방향

	clrscr();
	// kbhit() : 키보드를 입력했다면 true
	while (kbhit() == FALSE) {
		gotoxy(x, y);
		putch(' ');
		x += dx; // 좌표이동
		y += dy;
		gotoxy(x, y);
		putch('#'); // 이동된 좌표에 # 출력

		if (x == 79 || x == 0) {
			dx = -dx;
		}
		if (y == 24 || y == 0) {
			dy = -dy;
		}
		delay(30);
	}
}