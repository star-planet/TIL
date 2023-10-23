#include <stdio.h>
#include <string.h>

namespace Study16
{
	class Unit
	{
	public:
		char name[12];
		int damage;

		/*
			* 생성자
			클래스가 생성되었을 때 호출하는 함수
			생성자 이름은 클래스명과 같아야 함
			반환자료형이 없다. (void도 아니다)
			주로 멤버변수의 초기값을 지정하는데 사용
		*/
		Unit()
		{
			printf("유닛 생성\n");
			strcpy_s(name, sizeof(char) * 5, "유닛");
			damage = 10;
			printf("이름 : %s\n", name);
			printf("공격력 : %d\n", damage);
		}

		Unit(int _damage)
		{
			damage = _damage;
			printf("유닛 공격력 : %d\n", damage);
		}

		Unit(const char* _name)
		{
			strcpy_s(name, _name);
			printf("이름 : %s\n", name);
		}

		Unit(const char* _name, int _damage)
		{
			strcpy_s(name, _name);
			damage = _damage;
			printf("이름 : %s\n", name);
			printf("유닛 공격력 : %d\n", damage);
		}
	};
}

using namespace Study16;

void main16()
{
	Unit unitA;

	Unit* unitB = new Unit();

	Unit* unitC = new Unit(50);

	/*
		* 실습
		유닛의 이름을 매개변수로 받아서 name변수를 초기화 하는 생성자 만들기
		유닛의 이름과 공격력을 매개변수로 받아서 name과 damage를 초기화하는 생성자 만들기
	*/

	Unit* unitD = new Unit("간달프");

	Unit* unitE = new Unit("새로운 유닛", 25);
}