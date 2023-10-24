#include <stdio.h>

namespace Study37
{
	class Printer
	{
	public:
		void Print()
		{
			printf("프린트 기능\n");
		}
	};

	class Scanner
	{
	public:
		void Scan()
		{
			printf("스캔 기능\n");
		}
	};

	class FaxMachine
	{
	public:
		void Fax()
		{
			printf("팩스 기능\n");
		}
	};

	class MultiMachine : public Printer, public Scanner, public FaxMachine
	{
	public:
		void Multi() // 상속받은 멤버를 모두 사용할 수 있다.
		{
			Print();
			Scan();
			Fax();
		}
	};
}

using namespace Study37;

void main37()
{
	/*
		* 다중상속
		C++은 하나의 클래스가 부모클래스를 여러 개를 가질 수 있다.
		상속받은 모든 부모클래스의 멤버를 사용할 수 있게 된다.
		C#은 다중상속이 안된다.(1개의 부모만 가질 수 있다)
	*/

	MultiMachine* Multi = new MultiMachine();
	Multi->Fax();
	Multi->Print();
	Multi->Scan();
	Multi->Multi();
}