#include <iostream>
#include <memory> // 스마트포인터

using namespace std;

namespace Study52
{
	class Monster
	{
	public:
		Monster() { cout << "몬스터 생성" << endl; }
		~Monster() { cout << "몬스터 소멸" << endl; }

		void Attack() { cout << "몬스터 공격" << endl; }
	};
}

using namespace Study52;

void main52()
{
	/*
		* 공유포인터
		특정 객체를 참조하고 있는 스마트 포인터가 몇 개인지 알 수 있는 스마트 포인터
		참조하고 있는 횟수를 "참조 횟수"라고 함
	*/

	Monster* monster = new Monster();
	shared_ptr<Monster> s_MonsterA(monster);
	s_MonsterA->Attack();

	shared_ptr<Monster> s_MonsterB(s_MonsterA);
	cout << "몬스터 참조 횟수 : " << s_MonsterA.use_count() << endl;
	shared_ptr<Monster> s_MonsterC(s_MonsterB);
	cout << "몬스터 참조 횟수 : " << s_MonsterC.use_count() << endl;

	s_MonsterC.reset();
	cout << "몬스터 참조 횟수 : " << s_MonsterA.use_count() << endl;
}