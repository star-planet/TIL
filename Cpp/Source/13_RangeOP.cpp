#include <stdio.h>

namespace Study13
{
	struct Person
	{
		char name[12];
		int age;
		float height;

		void PrintName()
		{
			printf("이름 : %s\n", name);
		}

		void PrintAge(); // 함수 원형 선언

		void PrintHeight();
	};

	/* 
		구조체 바깥에 정의

		* 범위지정연산자(::)
		함수가 어떤 구조체의 멤버인지 알려주는 역할
	*/
	void Person::PrintAge()
	{
		printf("나이 : %d\n", age);
	}

	void Person::PrintHeight()
	{
		printf("키 : %f\n", height);
	}

	struct Enemy
	{
		int hp;
		int atk;
		char name[12];
		float armor;
		float atkSpeed;

		void PrintHp();
		void PrintAtk();
		void PrintEnemyName();
		void PrintArmor();
		void PrintAtkSpeed();
	};

	void Enemy::PrintHp()
	{
		printf("Hp : %d\n", hp);
	}

	void Enemy::PrintAtk()
	{
		printf("Atk : %d\n", atk);
	}

	void Enemy::PrintEnemyName()
	{
		printf("EnemyName : %s\n", name);
	}

	void Enemy::PrintArmor()
	{
		printf("Armor : %f", armor);
	}

	void Enemy::PrintAtkSpeed()
	{
		printf("AtkSpeed : %f\n", atkSpeed);
	}
}

using namespace Study13;
// using namespace : 소스파일에서 namespace영역 제한을 풀어줌

void main13()
{
	/*
		* 구조체
		C언어 : 변수의 모음
		C++ : 변수와 함수의 모음
	*/
	
	Person hongGilDong = { "홍길동", 10, 123.4f };
	hongGilDong.PrintName();
	hongGilDong.PrintAge();
	hongGilDong.PrintHeight();

	printf("\n");

	/*
		실습
		Study13 안에 Enemy 구조체 만들기
		적에 대한 정보 넣기
		멤버함수를 통해 정보 출력
		멤버함수는 구조체 바깥에 정의
	*/

	Enemy enemy = { 100, 5, "고블린", 12.3f ,1.2f};
	enemy.PrintEnemyName();
	enemy.PrintHp();
	enemy.PrintAtk();
	enemy.PrintAtkSpeed();
	enemy.PrintArmor();
}