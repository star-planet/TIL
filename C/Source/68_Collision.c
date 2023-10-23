#pragma warning(disable : 4996)	

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "start.h"

/*
	player->x
	player->y

	enemy->x
	enemy->y

	player와 enemy의 (x, y) 좌표가 같으면 충돌
*/

enum Arrows {
	Left = 75,
	Right = 77,
	Up = 72,
	Down = 80
};

// 플레이어 좌표 구조체
typedef struct _Player {
	int x, y;
}Player; 

// 음식 좌표 구조체
typedef struct _Food {
	int x, y;
}Food;

// 플레이어를 그려주는 함수
void PrintPlayer1(Player* player, BOOL bShow);

// 음식을 그려주는 함수
void PrintFood(Food* Food, BOOL bShow);

// 충돌체크 함수
void OnBeginOverlap(Player* player, Food* food, int* score);

void main68() {
	showcursor(FALSE); // 커서를 안보여줌

	// 플레이어 초기좌표 설정
	Player player;
	player.x = 3;
	player.y = 3;

	randomize();

	// 음식 초기좌표 설정
	Food food;
	food.x = random(20);
	food.y = random(20);

	int score = 0; // 점수

	PrintPlayer1(&player, TRUE); // 플레이어를 그려줌
	PrintFood(&food, TRUE);     // 음식을 그려줌

	for (;;) {
		int ch = _getch(); // 문자 1개를 입력받는다.
		if (ch == 0XE0 || ch == 0) { // 확장키라면
			ch = _getch(); // 확장키의 아스키코드를 받아온다.

			switch (ch) {
			case Left: // 왼쪽 방향키
				if (player.x <= 0) {
					player.x = 0;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.x--;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;

			case Right: // 오른쪽 방향키
				if (player.x >= 20) {
					player.x = 20;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.x++;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;

			case Up: // 위쪽 방향키
				if (player.y <= 0) {
					player.y = 0;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.y--;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;

			case Down: // 아래쪽 방향키
				if (player.y >= 20) {
					player.y = 20;
				}
				else {
					PrintPlayer1(&player, FALSE);
					player.y++;
					PrintPlayer1(&player, TRUE);
					OnBeginOverlap(&player, &food, &score);
				}
				break;
			}
		}
	}
}

void PrintPlayer1(Player* player, BOOL bShow) {
	// 플레이어의 좌표로 이동
	gotoxy(player->x, player->y);

	// bShow가 true면 출력, false면 지워줌
	putch(bShow ? '@' : ' ');
}

void PrintFood(Food* food, BOOL bShow) {
	// 음식 좌표로 이동
	gotoxy(food->x, food->y);
	
	// bShow가 true면 출력, false면 지워줌
	putch(bShow ? '#' : ' ');
}

void OnBeginOverlap(Player* player, Food* food, int* score) {
	// 플레이어와 음식의 x좌표가 같은지
	BOOL bOverLapX = player->x == food->x;

	// 플레이어와 음식의 y좌표가 같은지
	BOOL bOverLapY = player->y == food->y;

	// 플레이어와 음식이 충돌했다면
	if (bOverLapX && bOverLapY) {

		*score += 10; // 10점 증가
		gotoxy(21, 20);
		printf("score : %d", *score); // 20, 20좌표에 점수 출력

		// 충돌 후 음식의 좌표 무작위로 변경
		food->x = random(20);
		food->y = random(20);

		// 음식 출력
		PrintFood(food, TRUE);
	}


	/*
		* 실습
		"@"가 화면 바깥으로 넘어가지 않도록 제한(좌표에 음수값이 들어가지 않게)
	
	*/
}
