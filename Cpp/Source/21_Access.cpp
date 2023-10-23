#include <stdio.h>

namespace Study21
{
	class Access
	{
		// * 클래스는 접진지정자를 안쓰면 private이다.
	public:
		int numA;
	private:
		int numB;
	public:
		void PrintA()
		{
			printf("numA : %d\n", numA);
		}
	private:
		void PrintB()
		{
			printf("numB : %d\n", numB);
		}
	};
}

using namespace Study21;

void main21()
{
	/*
		* 접근지정자
		클래스의 멤버를 외부에서 사용할 수 없거나 사용할 수 있게 해줌
		멤버변수의 접근수준을 지정
		보안이랑 관련이 0.1도 없다
		public: 외부에서 접근허용
		private : 외부에서 접근비허용
		혼자할때는 public, private구분을 안해도 무관
		햡업시에 private변수는 함부로 사용하지 못하게 하는 용도
	*/

	Access* access = new Access();

	access->numA = 10;
	access->PrintA();

	delete access;
}