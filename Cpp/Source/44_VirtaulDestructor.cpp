#include <iostream>

using namespace std;

namespace Study44
{
	class Parent
	{
	public:
		Parent()
		{
			cout << "부모 생성" << endl;
		}
		virtual ~Parent() // 가상 소멸자
		{
			cout << "부모 소멸" << endl;
		}
	};

	class Child : public Parent
	{
	public:
		Child() 
		{
			cout << "자식 생성" << endl;
		}
		~Child()
		{
			cout << "자식 소멸" << endl;
		}
	};
}

using namespace Study44;

void main44() 
{
	//Parent* parent = new Parent();
	//delete parent;

	//Child* child = new Child();
	//delete child;

	// 부모포인터에 자식인스턴스를 넣으면 자식이 메모리해체가 안된다.
	// 부모포인터가 부모의 소멸자로 정적바인딩 되어 있기 때문이다.
	// 부모의 소멸자를 가상소멸자로 만들어야 자식도 같이 메모리해제가 된다.
	Parent* parent = new Child();
	delete parent;
}