#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "start.h"

typedef struct _Player {
	int posX, posY; // 플레이어의 좌표
	bool isLive;    // 플레이어의 생사여부
}Player;

typedef struct _Bullet {
	int posX, posY; // 총알의 좌표
	bool isLive;
}Bullet;

typedef struct _Enemy {
	int posX, posY; // 적의 좌표
	bool isLive;    // 적의 생사여부
}Enemy;

Player player;
Bullet bullet;
Enemy enemy;

void PrintMap1();			   // 맵 그려주는 함수
void PrintPlayer2(bool isShow); // 플레이어 그려줌
void keyInput1();			   // 입력처리 함수

bool IsKeyDown(int key);	   // 눌렀는지 확인

void AttackInput1();			   // 공격 키 처리
void PrintBullet1();			   // 총알 그려주는 함수
void CreateEnemy1();			   // 적 생성
void PrintEnemy1();			   // 적 그려줌
void OnCollision1();			   // 충돌체크

void main70() {
	showcursor(false); // 커서 지움
	randomize();       // 난수 시작점
	player.posX = 15;  // 플레이어 x위치
	player.posY = 17;  // 플레이어 y위치
	PrintMap1();		   // 맵 그려줌
	PrintPlayer2(true); // 플레이어 그려줌

	while (1) {
		keyInput1();	   // 입력을 받음
		AttackInput1(); // 공격처리
		PrintBullet1(); // 총알 그려줌
		CreateEnemy1(); // 적 생성
		PrintEnemy1();  // 적을 그려줌
		OnCollision1(); // 충돌처리
		delay(100);
	}

}

void PrintMap1()
{
	for (int i = 0; i < 30; i++) {
		gotoxy(i, 0);
		printf("▩");
		gotoxy(i, 20);
		printf("▩");
	}

	for (int i = 0; i < 20; i++) {
		gotoxy(0, i);
		printf("▩");
		gotoxy(30, i);
		printf("▩");
	}
}

void PrintPlayer2(bool isShow) {
	gotoxy(player.posX, player.posY);
	if (isShow) {
		printf("★");
	}
	else {
		printf("  "); // 특수문자는 2칸을 띄워서 지워야 한다.
	}
}

void keyInput1() {
	if (_kbhit()) { // 키 입력이 감지 되면
		int input = _getch();
		switch (input) {
		case 72: // 윗방향키
			PrintPlayer2(false); // 플레이어를 지움
			player.posY--;
			PrintPlayer(true);
			break;
		case 80: // 아래방향키
			PrintPlayer2(false);
			player.posY++;
			PrintPlayer2(true);
			break;
		case 75: // 왼쪽방향키
			PrintPlayer2(false);
			player.posX--;
			PrintPlayer2(true);
			break;
		case 77: // 오른쪽방향키
			PrintPlayer2(false);
			player.posX++;
			PrintPlayer2(true);
			break;
		default:
			break;
		}
	}
}

bool IsKeyDown1(int key) {
	return ((GetAsyncKeyState(key) & 0x8000) != false);
	// GetAsyncKeyState : 현재 키가 어떤 키인지 체크
	// 0x8000 : 이전에 누른적 없고 호출 시점에 눌려있는 상태
}

void AttackInput1() {
	if (IsKeyDown1(VK_SPACE)) {				// VK_SPACE : 스페이스바의 아스키코드
		if (bullet.isLive == false) {	    // 총알이 존재하지 않는다면
			bullet.posX = player.posX;
			bullet.posY = player.posY - 1;  // 한 칸 위로
			bullet.isLive = true;
			gotoxy(bullet.posX, bullet.posY);
			printf("*");
		}
	}
}

void PrintBullet1() {
	if (bullet.isLive) {
		gotoxy(bullet.posX, bullet.posY)
		printf(" ");
		bullet.posY--;
		if (bullet.posY < 1) {
			bullet.isLive = false;
			return;
		}
		gotoxy(bullet.posX, bullet.posY);
		printf("*");
	}
}

void CreateEnemy1() {
	if (enemy.isLive == false) {        // 적이 죽었다면
		int rnd = random(30);
		if (rnd != 0)					// 29/30확률
			return;						// 함수 종료
		enemy.posX = random(30);		// x좌표
		enemy.posY = 2;					// y좌표
		enemy.isLive = true;			// 존재한다.
		gotoxy(enemy.posX, enemy.posY); // 좌표이동
		printf("◎");
	}
}

void PrintEnemy1() {
	if (enemy.isLive == true) {
		gotoxy(enemy.posX, enemy.posY);
		printf("  ");					// 특수문자는 2칸을 차지하므로 2칸 띄워서 지움
		enemy.posY++;					// 아래로 좌표 이동
		if (enemy.posY > 18) {			// 끝까지 내려갔다면
			enemy.isLive = false;		// 죽음처리
			return;						// 함수종료
		}
		gotoxy(enemy.posX, enemy.posY);
		printf("◎");
	}
}

void OnCollision1() {
	if (bullet.posX == enemy.posX && bullet.posY == enemy.posY) {
		gotoxy(bullet.posX, bullet.posY);
		printf("  ");					  // 총알 지움
		bullet.isLive = false;			  // 총알 죽음
		gotoxy(enemy.posX, enemy.posY);
		printf("  ");					  // 적 지움
		enemy.isLive = false;			  // 적 죽음
	}
}


/* 
	* 실습 (~10/11)
	C언어를 활용하여 게임 만들기
	장르 무관
*/
