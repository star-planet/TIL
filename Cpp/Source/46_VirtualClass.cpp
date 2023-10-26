#include <stdio.h>

namespace Study46
{
	class A
	{
	protected:
		int a;
	public:
		A(int _a) { a = _a; }
	};
	class B : virtual public A
	{
	protected:
		int b;
	public:
		B(int _a, int _b) : A(_a) { b = _b; }
	};
	class C : virtual public A
	{
	protected:
		int c;
	public:
		C(int _a, int _c) : A(_a) { c = _c; }
	};
	class D : public B, public C
	{
	protected:
		int d;
	public:
		D(int _a, int _b, int _c, int _d) : A(_a), B(_a, _b), C(_a, _c)
		{
			a = _a;
			d = _d;
		}
	};

}

using namespace Study46;

void main46()
{
	/*
		* 가상기반클래스
		다중상속의 경우 한 클래스를 두번 상속받는 경우 멤버가 중복되어 메모리가 낭비됨
		또한 중복된 멤버끼리 명칭이 충돌하게 됨
		class A
		class B : public A
		class C : public A
		class D : public B, public C
		B클래스에 A클래스가 있고, C클래스에 A클래스가 있다.
		결과적으로 D클래스는 A클래스를 2번 상속받게 된다.
		중복상속 시에 한 번만 상속받도록 하는 것이 가상기반 클래스
	*/
}