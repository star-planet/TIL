#include <stdio.h>
#include <iostream>
#include <memory> // 유니크 포인터 사용시 필요

using namespace std;

namespace Study51
{
	class Hero
	{
	public:
		Hero() { cout << "영웅 생성" << endl; }
		~Hero() { cout << "영웅 소멸" << endl; }

		void Attack() { cout << "영웅 공격" << endl; }
	};
}

using namespace Study51;

void main51()
{
	/*
		* 스마트 포인터
		new를 사용해서 동적할당을 하면 메모리해제를 해주어야 함
		스마트 포인터는 사용이 끝난 메모리를 자동으로 해제해줌

		* 유니크 포인터
		스마트 포인터 종류 중 하나
		하나의 유니크포인터만이 객체를 소유한다. (소유권)
		유니크 포인터가 객체의 소유권을 가지고 있을 때만 객체를 해제한다.
	*/

	Hero* hero = new Hero();
	unique_ptr<Hero> u_hero(hero);

	// get() : 소유하고 있는 객체를 반환
	u_hero.get()->Attack();

	// 유니크포인터는 객체를 1개의 유니크포인터만이 소유할 수 있다.
	// move함수를 통해 소유권을 이전할 수 있다.
	unique_ptr<Hero> u_hero2 = move(u_hero);

	/* 
		스마트포인터 직접 구현하는 경우 (공부하면 좋음)
		1. 클래스 템플릿
		2. 포인터
		3. 메모리 관리
		4. 연산자 오버로딩
	*/

}