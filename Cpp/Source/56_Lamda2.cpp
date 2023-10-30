#include <iostream>
#include <string>

using namespace std;

void main56()
{
	/*
		람다함수의 캡쳐블록
		[] : "캡처"라고도 불리며 외부변수를 복사 혹은 참조하여 사용할 수 있다.
	*/

	int a = 10, b = 20, c = 30, d = 40;
	cout << "캡쳐 변수 복사" << endl;
	[a, b ,c, d](int x, int y)
	{
		// 변수의 값을 복사하므로 읽기만 가능
		cout << "result : " << a + b + c + d << endl;
		cout << "x + y : " << x + y << endl;
	}(10, 20);

	cout << "캡쳐 변수 참조" << endl;
	[&a, &b, &c, &d](int x, int y)
	{
		a = x + y;
		b = x - y;
		c = x * y;
		d = x / y;
		cout << "a, b, c, d : " << a << b << c << d << endl;
	}(1, 2);
	// 람다함수에서 참조를 했으므로 외부에서도 값이 변경된다
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;

	cout << "람다 전체 복사" << endl;
	// 캡쳐에 [=]을 쓰면 외부변수를 모두 복사시킨다.
	[=]()
	{
		cout << a + b + c + d << endl;
	}();

	cout << "람다 전체 참조" << endl;
	// 캡쳐에 [&]를 쓰면 외부변수를 모두 참조한다.
	[&]()
	{
		cout << a * b * c * d << endl;
	}();

	/*
		* 실습
		반환자료형이 없는 람다함수를 만들고 함수포인터에 넣고 함수포인터를 이용하여 호출
		반환자료형이 float인 람다함수를 만들고 함수포인터에 넣고 함수포인터를 이용하여 호출
	*/

	auto ptr1 = [](){ cout << "반환자료형 없는 람다함수" << endl; };

	ptr1();


	
	auto ptr2 = []() -> float
	{
		return 12.34f;
	};

	cout << ptr2() << endl;

}