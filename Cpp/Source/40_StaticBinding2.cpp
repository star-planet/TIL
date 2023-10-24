#include <stdio.h>
#include <stdlib.h>
#include <time.h>

namespace Study40
{
	class Newbie // 초보자
	{
	public:
		int currentHp = 100;

		void Hit(int damage)
		{
			currentHp -= damage;
			printf("남은 체력 : %d\n", currentHp);
		}
	};

	class Warrior : public Newbie
	{
	public:
		void Hit(int damage)
		{
			currentHp -= damage / 2; // 전사 패시브 - 데미지 50% 감소
			printf("절반 데미지 남은 체력 : %d\n", currentHp);
		}
	};

	class Thief : public Newbie
	{
	public:
		void Hit(int damage)
		{
			int rnd = rand() % 2; // 50% 확률로 회피
			if (rnd == 0) { printf("회피\n"); }
			else
			{
				currentHp -= damage;
				printf("회피실패 : %d\n", currentHp);
			}
		}
	};

	class Monster
	{
	public:
		int power = 10;
		void Attack(Newbie* hitter)
		{
			// 3개 직업중에 어떤직업이 맞을지 모르므로 부모클래스로 묶어버림
			hitter->Hit(power);
		}
	};
}

using namespace Study40;

void main()
{
	/*
		* 바인딩
		바인딩은 연결하는 것
		클래스에서 함수는 메모리에 한번 올라감
		함수는 메모리에 올라가고 함수 포인터를 통하여 함수에 접근
		그 함수포인터가 함수를 가리키도록 하는것이 바인딩

		* 정적바인딩
		컴파일시 호출될 함수가 이미 결정되어버리는 것

		* 동적바인딩
		클래스를 만들때 함수가 바인딩 되지 않고 보류된다.
		런타임시 호출될 함수를 결정
	*/
	Newbie* newbie = new Newbie();
	Warrior* warrior = new Warrior();
	Thief* thief = new Thief();

	Monster* monster = new Monster();

	srand((unsigned)time(NULL));

	monster->Attack(newbie);
	monster->Attack(warrior);
	monster->Attack(thief);

	delete newbie;
	delete warrior;
	delete thief;
	delete monster;
}