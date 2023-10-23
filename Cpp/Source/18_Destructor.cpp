#include <stdio.h>

namespace Study18
{
	class Unit
	{
	public:
		Unit() // 생성자
		{
			printf("유닛 생성\n");
		}

		~Unit() // 소멸자
		{
			printf("유닛 파괴\n");
		}
	};
}

using namespace Study18;

void main18()
{
	/*
		* 소멸자
		클래스 이름 앞에 "~"가 붙은 특별한 함수
		객체가 제거될 떄 호출 (컴파일러가 호출)
		반환자료형이 없다. (void도 아니다)
		개발자가 만들지 않으면 컴파일러가 만들어서 사용한다.
	*/

	Unit* unit = new Unit(); // 동적할당

	delete unit; // 메모리 해제
}