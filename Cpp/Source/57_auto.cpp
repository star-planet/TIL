#include <iostream>
#include <string>

using namespace std;

namespace Study57
{
	class Warrior
	{
	public:
		int num;
	};

	void Add()
	{
		cout << "add" << endl;
	}
}

using namespace Study57;

void main57()
{
	/*
		auto
		자료형을 자동으로 파악하는 키워드
		변수선언과 동시에 초기값을 넣어주어야함
		초기자료형이 정해지면 다른 자료형으로 바꿀 수 없다.
	*/

	auto a = 10;
	auto b = 12.34f;
	auto c = 'c';
	auto d = "Hello";
	//a = "World";
	auto warrior = new Warrior();
	delete warrior;
	
	auto add = Add;
	
	auto lamda = []() {cout << "HelloWorld" << endl; };

	lamda();
	lamda();

	Add();
	Add();

}