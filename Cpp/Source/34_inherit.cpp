#include <stdio.h>

namespace Study34
{
	class Unit
	{
	private:           // 외부에서 접근 불가
		int luck;      // 기본 유닛만 가지는 스텟
	public:            // 외부에서 접근 가능
		int damage;    // 공통적으로 가지는 스텟
		int defence;
		int currentHp;
		float speed;
	public:
		void Attack()
		{
			printf("기본공격\n");
		}
	};

	// Warrior는 자식클래스가 되고 Unit은 부모클래스가 된다
	// Unit의 public멤버를 모두 상속받게 된다.
	class Warrior : public Unit
	{
	public:
		int strength; // 전사만이 가지는 스텟
	public:
		Warrior()
		{
			//luck = 11; // private은 자식에서 접근불가
			damage = 15;
			defence = 15;
			currentHp = 100;
			speed = 12.34f;
			strength = 15;
		}

		void MeleeAttack()
		{
			printf("근접 공격!\n");
		}
	};

	class Archer : public Unit
	{
	public:
		int dex; // 궁수만의 특별한 스텟
	public:
		Archer()
		{
			damage = 10;
			defence = 10;
			currentHp = 100;
			speed = 12.34f;
			dex = 10;
		}

		void ArrowAttack()
		{
			printf("화살 공격!\n");
		}
	};

	class Thief : public Unit
	{
	public:
		Thief()
		{
			damage = 13;
			defence = 13;
			currentHp = 90;
			speed = 13.57;
		}

		void DartAttack()
		{
			printf("표창 공격!\n");
		}
	};

	class Wizard : public Unit
	{
	public:
		int Int;
	public:
		Wizard()
		{
			damage = 9;
			defence = 9;
			currentHp = 80;
			speed = 11.22f;
			Int = 20;
		}

		void MagicAttack()
		{
			printf("마법 공격!\n");
		}
	};
}

using namespace Study34;

void main34()
{
	/*
		* 상속
		* 기존 클래스를 재활용한다.
		공통부분을 상위클래스에 통합하여 반복을 제거
		부모클래스가 지니고 있는 변수와 함수를 자식클래스에 물려 주는 것

	*/

	// 부모클래스는 자식클래스의 변수와 함수를 사용할 수 없다.
	Unit* unit = new Unit();
	unit->currentHp = 10;
	unit->damage = 5;
	unit->Attack();
	delete unit;

	Warrior* warrior = new Warrior();
	warrior->Attack();
	warrior->MeleeAttack();
	delete warrior;

	Archer* archer = new Archer();
	archer->Attack();
	archer->ArrowAttack();
	delete archer;

	/*
		* 실습
		Unit을 상속받는 Thief와 Wizard 클래스만들기
		Thief는 표창공격 기능을 가진다.
		Wizard는 마법공격기능과 지능스텟을 추가로 가진다.
	*/

	Thief* thief = new Thief();
	thief->Attack();
	thief->DartAttack();
	delete thief;

	Wizard* wizard = new Wizard();
	wizard->Attack();
	wizard->MagicAttack();
	delete wizard;
}