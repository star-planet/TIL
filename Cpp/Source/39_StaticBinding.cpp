#include <stdio.h>

namespace Study39
{
	class Parent
	{
	public:
		void Print()
		{
			printf("부모클래스\n");
		}
	};

	class Child : public Parent
	{
	public:
		void Print()
		{
			printf("자식클래스\n");
		}
	};
}

using namespace Study39;

void main39()
{
	// 부모 포인터에 부모 인스턴스를 넣으면 부모 함수가 호출
	Parent* parent = new Parent();
	parent->Print();

	// 자식 포인터에 자식 인스턴스를 넣으면 자식 함수가 호출
	// 부모와 자식의 함수이름이 같으면 부모 함수는 무시가 된다.
	Child* child = new Child();
	child->Print();

	// 부모 포인터에 자식인스턴스를 넣으면 부모 함수가 호출(정적바인딩)
	Parent* ptrParent = new Child();
	ptrParent->Print();

	delete parent;
	delete child;

	/*
		* 정적바인딩
		컴파일시(게임시작전) 부모포인터가 부모의 함수가 연결되어 
		자식인스턴스를 넣어도 부모의 함수가 호출되는 것
	*/
}