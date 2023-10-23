#include <stdio.h>
#include <string.h>

namespace Study19
{
	class Wizard
	{
	public:
		char* name;
		int damage;

		Wizard()
		{
			printf("위자드 생성\n");
			name = new char[7];
			strcpy_s(name, sizeof("위자드"), "위자드");
			damage = 10;
		}

		Wizard(const char* _name, int _damage)
		{
			name = new char[strlen(_name) + 1];
			strcpy_s(name, strlen(_name) + 1, _name);
			damage = _damage;
			printf("이름 : %s, 공격력 : %d\n", name, damage);
		}

		~Wizard()
		{
			// 동적할당한 변수는 소멸자에 미리 메모리 해제를 해준다.
			printf("%s 소멸\n", name);
			delete[] name; 
		}
	};
}

using namespace Study19;

void main()
{
	/*
		* 정적할당
		선언만으로 인스턴스가 생성된다
		메모리의 스택영역에 할당된다
		메모리해제할 필요가 없다 (함수 종료시 자동 소멸)
		컴파일 시 할당
	*/
	Wizard wizardA("간달프", 55);

	/*
		* 동적할당
		런타임 시에 인스턴스가 생성된다.
		메모리의 힙영역에 할당된다.
		힙영역 데이터는 함수가 종료되도 소멸하지 않는다.
		그러므로 메모리 해제를 해주어야 한다.
	*/
	Wizard* wizardB = new Wizard("대마법사", 70);
	delete wizardB;
}