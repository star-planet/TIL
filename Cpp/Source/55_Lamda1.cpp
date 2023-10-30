#include <iostream>
#include <string>

using namespace std;

namespace Study55
{
	// 일반 함수
	void Sum(int x, int y)
	{
		cout << "x + y : " << x + y << endl;
	}


}

using namespace Study55;

void main55()
{
	/*
		* 람다함수(람다식)
		이름이 없는 함수
		이름이 없으므로 1번만 호출하거나 함수포인터에 넣어줄 용도로 사용
	*/

	Sum(10, 20);

	// [] : 캡쳐블록
	// () : 전달인자
	// {} : 함수몸통
	// -> : 반환타입
	// () : 호출
	[](int x, int y)
	{
		cout << "x + y : " << x + y << endl;
	}(10, 20);

	// 매개변수가 없는 람다함수
	[]()
	{
		cout << "람다함수!" << endl;
	}();

	// 반환이 있는 람다함수
	int num = []() -> int // 반환타입지정
	{
		return 200;
	}();
	cout << "num : " << num << endl;

	char ch = [](char a, char b) -> char
	{
		return a + b;
	}(10, 20);
	cout << "ch : " << ch << endl;

	/*
		* 실습
		float형 매개변수 3개를 받아서 모두 곱한 값을 출력하고 그 값을 반환하는 람다함수 만들기
	*/

	float mul = [](float v1, float v2, float v3) -> float
	{
		return v1 * v2 * v3;
	}(1.2f, 3.4f, 5.6f);
	cout << "mul : " << mul << endl;
}