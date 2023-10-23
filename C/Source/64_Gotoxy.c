#include <stdio.h>
#include "start.h"

void main64() {
	gotoxy(5, 5);  // 5, 5의 좌표로 커서 이동
	printf("(5,5)");
	showcursor(0); // 깜빡이는 커서를 안보여줌
	delay(3000);   // 1/1000초를 대기, 3000이므로 3초
	clrscr();      // 화면 전체를 지움
	gotoxy(10, 5); // 10, 5의 좌표로 커서 이동
	printf("(10,5)"); 
}