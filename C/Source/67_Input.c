#include <stdio.h>
#include "start.h"
#include <conio.h>

// 각 방향키에 해당하는 코드 값
enum Arrow {
	Left = 75,
	Right = 77,
	Up = 72,
	Down = 80
};

void main67() {

	int x = 10, y = 10;

	clrscr();

	gotoxy(x, y);
	printf("@");

	for (;;) {
		int ch = _getch(); // 단일문자를 입력받는다.
		//_getch() : 문자 하나를 입력받아서 반환
		// 만약 확장키라면 0XE0 또는 0을 반환한다.
		if (ch == 0XE0 || ch == 0) {
			ch = _getch(); // 다시 입력 받으면 확장키의 아스키코드값이 들어온다.

			switch (ch) {
			case Left:
				gotoxy(x, y);
				printf(" ");
				x -= 1;
				gotoxy(x, y);
				printf("@");
				break;
			case Right:
				gotoxy(x, y);
				printf(" ");
				x += 1;
				gotoxy(x, y);
				printf("@");
				break;
			case Up:
				gotoxy(x, y);
				printf(" ");
				y -= 1;
				gotoxy(x, y);
				printf("@");
				break;
			case Down:
				gotoxy(x, y);
				printf(" ");
				y += 1;
				gotoxy(x, y);
				printf("@");
				break;
			}
		}

		else break;
	}
	
	/*
		실습
		화살표 방향키를 눌러서 "@"문자를 이동시키는 것을 구현
	
	*/

}
