#include <stdio.h>

namespace Study25
{
	class Enemy
	{
		friend class InfoManager;
	private:
		int currentHp = 10;
		int damage = 1;
	public:
		Enemy(int _currentHp, int _damage)
		{
			currentHp = _currentHp;
			damage = _damage;
			//info->isEnemy = true;
		}
	};

	class InfoManager
	{
		friend Enemy;
	private:
		bool isEnemy;
	public:
		void DisplayInfo(Enemy* enemy)
		{
			printf("적 체력 : %d\n", enemy->currentHp);
			printf("적 공격력 : %d\n", enemy->damage);
		}
	};
}

using namespace Study25;

void main25()
{
	/*
		* friend 클래스
		friend 함수는 친구가 된 클래스의 모든 멤버에 접근권한을 얻는다.
		friend 클래스도 친구가 된 클래스의 모든 멤버에 접근권한을 얻는다.
		friend 클래스는 읽힘을 당하는 쪽에 선언을 해줘야 한다.
	*/
	InfoManager info;

	Enemy* enemy = new Enemy(10, 20);

	info.DisplayInfo(enemy);
}