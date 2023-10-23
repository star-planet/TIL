#include <stdio.h>
#include <string.h> // strcpy_s 사용시 필요

void main53() {

	// strcpy_s
	// 문자열을 복사하여 변수에 넣어주는 함수
	char ch[11];

	strcpy_s(ch, sizeof(char) * 11,"안녕하세요");
	printf("%s\n", ch);

	// 구조체
	// 하나 이상의 변수를 묶는 사용자 정의 자료형
	

	struct Item {
		// 구조체를 구성하는 멤버변수
		char name[11];
		int damage;
		float speed;
	};

	struct Item sword; // 구조체 변수선언

	strcpy_s(sword.name, sizeof(char) * 7, "롱소드");
	sword.damage = 10;
	sword.speed = 12.34f;

	printf("sword.name   : %s\n", sword.name);
	printf("sword.damage : %d\n", sword.damage);
	printf("sword.speed  : %f\n", sword.speed);
	
	// typedef
	// 자료형의 이름을 새롭게 지어줌
	// 자료형의 재정의

	typedef unsigned const int* const ucintc;
	ucintc ucintcPtr; // 변수 선언

	typedef const float* cfloat;
	cfloat floatPtr;

	typedef struct _Person {
		char name[20];
		int age;
		char address[20];
	}Person; // struce _Person이라는 구조체를 Person이라는 이름으로 재정의

	Person person;
	strcpy_s(person.name, sizeof(char) * 7, "홍길동");
	strcpy_s(person.address, sizeof(char) * 5, "인천");
	person.age = 10;

	Person warrior;
	strcpy_s(warrior.name, sizeof(char) * 7, "워리어");
	strcpy_s(warrior.address, sizeof(char) * 7, "페리온");
	warrior.age = 20;

	/*
		* 실습
		Enemy구조체 만들기
		name, damage, health 변수 추가
		eliteEnemy, bossEnemy, normalEnemy 구조체 변수 만들기
		각각 정보를 넣어주고 값 출력
	*/

	typedef struct _Enemy {
		char name[20];
		int damage;
		int health;
	}Enemy;

	Enemy eliteEnemy;
	strcpy_s(eliteEnemy.name, sizeof(char) * 7, "엘리트");
	eliteEnemy.damage = 100;
	eliteEnemy.health = 2500;

	Enemy bossEnemy;
	strcpy_s(bossEnemy.name, sizeof(char) * 5, "보스");
	bossEnemy.damage = 200;
	bossEnemy.health = 5000;

	Enemy normalEnemy;
	strcpy_s(normalEnemy.name, sizeof(char) * 5, "일반");
	normalEnemy.damage = 30;
	normalEnemy.health = 1000;

	printf("\n");
	printf("eliteEnemy.name   : %s\n", eliteEnemy.name);
	printf("eliteEnemy.damage : %d\n", eliteEnemy.damage);
	printf("eliteEnemy.health : %d\n", eliteEnemy.health);
	printf("\n");
	printf("bossEnemy.name   : %s\n", bossEnemy.name);
	printf("bossEnemy.damage : %d\n", bossEnemy.damage);
	printf("bossEnemy.health : %d\n", bossEnemy.health);
	printf("\n");
	printf("normalEnemy.name   : %s\n", normalEnemy.name);
	printf("normalEnemy.damage : %d\n", normalEnemy.damage);
	printf("normalEnemy.health : %d\n", normalEnemy.health);
}