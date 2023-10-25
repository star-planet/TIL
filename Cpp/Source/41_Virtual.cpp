#include <stdio.h>

namespace Study41
{
	class Parent
	{
	public:
		void PrintA() // 일반함수
		{
			printf("부모클래스\n");
		}
		virtual void PrintB() // 가상함수
		{
			printf("부모클래스\n");
		}
	};

	class Child : public Parent
	{
	public:
		void PrintA()
		{
			printf("자식클래스\n");
		}
		virtual void PrintB()
		{
			printf("자식클래스\n");
		}
	};
}

using namespace Study41;

void main41()
{
	/*
		* 가상함수
		부모클래스에서 자식클래스에게 재정의할 것을 기대하고 만든 함수
		virtual 키워드를 함수 앞에 붙여서 사용
		가상함수는 자식클래스에서 재정의한 내용으로 교체됨

		* 동적바인딩
		런타임시 객체와 함수가 연결된다.
		부모포인터에 자식인스턴스를 넣으면 해당 자식에 맞는 함수가 호출된다.
	*/

	Parent* parent = new Parent();
	Child* child = new Child();

	// 부모 포인터에 부모 인스턴스를 넣으면 일반/가상함수 모두 부모의 함수가 호출된다.
	parent->PrintA();
	parent->PrintB();

	// 자식 포인터에 자식 인스턴스를 넣으면 일반/가상함수 모두 자식의 함수가 호출된다.
	child->PrintA();
	child->PrintB();

	delete parent;
	parent = new Child();

	// 부모 포인터에 자식 인스턴스를 넣으면 일반함수는 부모클래스의 함수가 호출됨(정적바인딩)
	// 가상함수는 자식클래스의 함수가 호출됨(동적바인딩)
	parent->PrintA();
	parent->PrintB();

	delete parent;
	delete child;
}