#include <stdio.h>

namespace Study43
{
	class Parent
	{
	public:
		virtual void FuncA() { printf("부모클래스\n"); }
		virtual void FuncB(int num) {}
		virtual void FuncC() const {}
		virtual void FuncD() {}
	};

	class Child : public Parent
	{
	public:
		virtual void FuncA() override
		{
			Parent::FuncA(); // 부모의 함수 호출
			printf("추가기능\n");
		}
		virtual void FuncB(int num) override {}
		virtual void FuncC() const override {}
		virtual void FuncD() final {}
		// final : 함수 재정의를 자식에서 못하게 함
	};

	class GrandChild : public Child
	{
	public:
		//void FuncD() {} // final함수는 재정의가 불가
	};
}

using namespace Study43;

void main43()
{
	/*
		* override
		안써도 결과는 똑같다. (차이 없다.)
		그래도 가상함수 사용시 적어야함 (필수)
		자식에서 사용한다

		* override를 써야하는 이유
		1. 가독성 - 함수가 재정의 되었음을 쉽게 파악
		2. 안전핀 - 부모함수와 다르면 오류를 발생시킨다. -> 오류를 통해 수정할 수 있다.
	*/
}