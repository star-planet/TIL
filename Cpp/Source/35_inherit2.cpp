#include <stdio.h>

namespace Study35
{
	class Parent
	{
	public:
		int a; // 자식, 외부, 자신(내부)에서 접근 가능
	protected:
		int b; // 자식, 자신(내부)에서 접근가능
	private:
		int c; // 자신(내부)에서만 접근가능
	};

	class Child : public Parent
	{
	public:
		Child()
		{
			a = 10;
			b = 20;
			//c = 30; // private은 접근 물가
		}
	};
}

using namespace Study35;

void main()
{
	/*
		* 접근지정자
		public : 멤버를 외부에 접근 허용
		protected : 멤버를 자식에만 접근 허용
		private : 멤버를 자신만 접근 허용
	*/

	Child* child = new Child();
	child->a = 10; // public은 접근 가능
	//child->b = 20; // protected는 외부에서 접근 불가
	//child->c = 30; // private은 외부에서 접근 불가
	delete child;
}