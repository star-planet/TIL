#include <iostream>
#include <memory>

using namespace std;

namespace Study53
{
	class Hero
	{
	public:
		shared_ptr<class Monster> target;

		Hero() { cout << "영웅 생성" << endl; }
		~Hero() { cout << "영웅 소멸" << endl; }
	};

	class Monster
	{
	public:
		shared_ptr<class Hero> target;

		Monster() { cout << "몬스터 생성" << endl; }
		~Monster() { cout << "몬스터 소멸" << endl; }
	};
}

using namespace Study53;

void main53() 
{
	/*
		* 순환 참조
		서로가 서로를 참조하고 있는 현상

		* 공유포인터의 문제점
		순환참조시에 메모리해제가 되지 않는다.
	*/

	shared_ptr<Hero> s_Hero(new Hero);
	shared_ptr<Monster> s_Monster(new Monster);

	// 소멸이 되지 않는다
	s_Hero->target = s_Monster;
	s_Monster->target = s_Hero;
}