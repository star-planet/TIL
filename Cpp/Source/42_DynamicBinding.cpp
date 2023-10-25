#include <stdio.h>
#include <stdlib.h>
#include <time.h>

namespace Study42
{
	class Newbie // 초보자
	{
	public:
		int currentHp = 100;
		virtual void Hit(int& damage)
		{
			currentHp -= damage;
			printf("남은 체력 : %d\n", currentHp);
		}

	};

	class Warrior : public Newbie // 전사
	{
	public:
		virtual void Hit(int& damage)
		{
			currentHp -= damage / 2;
			printf("절반 받고 남은 체력 : %d\n", currentHp);
		}
	};

	class Thief : public Newbie // 도적
	{
	public:
		virtual void Hit(int& damage)
		{
			int rnd = rand() % 2;
			if (rnd)
			{
				printf("회피성공\n");
			}
			else
			{
				currentHp -= damage;
				printf("회피 실패 남은 체력 : %d\n", currentHp);
			}
		}
	};

	class Monster
	{
	public:
		void Attack(Newbie* hitter)
		{
			int power = 10;
			hitter->Hit(power);
		}
	};
}

using namespace Study42;

void main42()
{
	srand((unsigned)time(NULL));

	Newbie* newbie = new Newbie();
	Warrior* warrior = new Warrior();
	Thief* thief = new Thief();
	Monster* monster = new Monster();

	monster->Attack(newbie);
	monster->Attack(warrior);
	monster->Attack(thief);

	delete newbie;
	delete warrior;
	delete thief;
	delete monster;
}