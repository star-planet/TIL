#include <stdio.h>

namespace Study36
{
	class Parent
	{
	private:
		int a;
	public:
		int b;
	protected:
		int c;
	};

	/* 
		* 상속접근지정자
		부모의 멤버의 접근을 허용하거나 제한하는 기능
		아무것도 안 쓰면 기본 private
		부모멤버의 접근지정자가 유지되면서 상속접근지정자도 같이 적용된다.
		public : 부모멤버를 외부 접근 허용
		protected : 부모멤버를 자식에게만 허용
		private : 부모멤버를 외부, 자식에서 접근 비허용
	*/
	
	class ChildA : protected Parent
	{
	public:
		ChildA(int _a, int _b, int _c)
		{
			//a = _a; // a변수는 private이므로 접근 불가
			b = _b; // b변수는 public이지만 상속접근지정자가 protected이므로 외부 접근 불가
			c = _c; // c변수는 protected속성이 그대로 유지된다.
		}
	};

	class ChildB : private Parent
	{
	public:
		ChildB(int _a, int _b, int _c)
		{
			//a = _a;
			b = _b; 
			c = _c; 
		}
		ChildB(){}
	};

	class ChildC : public ChildB
	{
	public:
		ChildC(int _a, int _b, int _c)
		{
			//a = _a; // a, b, c 모두 private
			//b = _b;
			//c = _c;
		}
	};
}

using namespace Study36;

void main36()
{
	Parent* parent = new Parent();
	parent->b = 10; // b만 public이므로 b만 접근가능

	ChildA* childA = new ChildA(1,2,3);
	//childA->b = 20; // 부모의 멤버를 protected 선언했으므로 사용 불가능

	delete childA;
	delete parent;
}
