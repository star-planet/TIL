#include <stdio.h>
#include "start.h"

void main65() {
	clrscr();
	showcursor(0);

	for (int i = 0; i < 80; i++) {
		gotoxy(i, 5);              // x좌표는 i, y좌표는 5
		printf("@");
		gotoxy(i - 1, 5);          // 이전 좌표
		printf(" ");               // 지우기
		delay(100);                // 0.1초 대기
	}

	for (int i = 78; i >= 0; i--) {
		gotoxy(i, 5);             
		printf("@");
		gotoxy(i + 1, 5);         
		printf(" ");              
		delay(100);               
	}

	for (int i = 1; i < 80; i++) {
		gotoxy(i, 5+i);            
		printf("@");
		gotoxy(i - 1, (5+i)-1);    
		printf(" ");               
		delay(100);                
	}

	/* 
		* 실습
		이동이 끝나면 오른쪽에서 왼쪽으로 이동시키기
		이동이 끝나면 대각선으로 이동시키기
	*/
}