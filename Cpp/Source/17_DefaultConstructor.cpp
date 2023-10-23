#include <stdio.h>
#include <string.h>

namespace Study17
{
	class Unit
	{
	public:
		char* name;
		int damage;

		/*
			* 디폴트 생성자
			매개변수가 없는 생성자
			디폴트생성자가 없다면 컴파일러가 만들어서 사용한다.
			매개변수가 있는 다른생성자가 있다면 디폴트 생성자를 만들지 않는다.
		*/

		//Unit() {};

		Unit(const char* _name, int _damage)
		{
			name = new char[strlen(_name) + 1];
			strcpy_s(name, strlen(_name) + 1, _name);
			damage = _damage;
			printf("이름 : %s\n", name);
			printf("공격력 : %d\n", damage);
		}
	};
}

using namespace Study17;

void main17()
{
	Unit* unitA = new Unit("유닛", 30);
	delete[] unitA->name;
}