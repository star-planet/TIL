#include <iostream>
#include <memory>

using namespace std;

namespace Study54
{
	class Archer
	{
	public:
		weak_ptr<class Monster> target; // 약포인터

		Archer() { cout << "아처 생성" << endl; }
		~Archer() { cout << "아처 소멸" << endl; }
	};

	class Monster
	{
	public:
		weak_ptr<class Archer> target;
		Monster() { cout << "몬스터 생성" << endl; }
		~Monster() { cout << "몬스터 소멸" << endl; }
	};

	class Actor1
	{
	public:
		weak_ptr<class Actor2> target;
		Actor1() { cout << "Actor1 생성" << endl; }
		~Actor1() { cout << "Actor1 소멸" << endl; }
	};

	class Actor2
	{
	public:
		weak_ptr<class Actor3> target;
		Actor2() { cout << "Actor2 생성" << endl; }
		~Actor2() { cout << "Actor2 소멸" << endl; }
	};

	class Actor3
	{
	public:
		weak_ptr<class Actor1> target;
		Actor3() { cout << "Actor3 생성" << endl; }
		~Actor3() { cout << "Actor3 소멸" << endl; }
	};
}

using namespace Study54;

void main()
{
	/*
		* 약포인터
		순환참조문제를 해결해주는 포인터
	*/

	shared_ptr<Archer> w_Archer(new Archer);
	shared_ptr<Monster> w_Monster(new Monster);
	
	w_Archer->target = w_Monster;
	w_Monster->target = w_Archer;
	cout << "아처 포인터 갯수 : " << w_Archer.use_count() << endl;


	/*
		* 실습
		유니크 포인터를 통해 객체 관리하기
		유니크 포인터 1개 더 만들어서 객체 소유권 이전해보기
	*/

	unique_ptr<Archer> u_Archer(new Archer);
	unique_ptr<Archer> u_Archer2 = move(u_Archer);

	/*
		*실습
		공유 포인터를 3개 만들어서 객체 관리하기
		순환참조를 만들고 약포인터로 해결하기
	*/

	shared_ptr<Actor1> w_Actor1(new Actor1);
	shared_ptr<Actor2> w_Actor2(new Actor2);
	shared_ptr<Actor3> w_Actor3(new Actor3);

	w_Actor1->target = w_Actor2;
	w_Actor2->target = w_Actor3;
	w_Actor3->target = w_Actor1;
}