#include <stdio.h>

namespace Study31
{
	class Something 
	{
	public:
		int value;
	public:
		Something() : value(0) {}
		void SetValue(int _value) { value = _value; }
		int Getvalue() { return value; }
		/* 상수멤버함수 */
		int GetConstValue() const
		{ 
			//SetValue(5); // 일반 멤버함수 호출 불가
			return value; 
		}
	};
}

using namespace Study31;

void main31()
{
	/*
		* const 객체
		const 키워드를 사용하여 상수 객체를 만듦
		객체의 멤버변수의 값을 변경 불가, 읽기만 가능
		getter와 setter 모두 사용 불가능하다.

		* 상수멤버함수
		상수객체는 상수멤버함수만 명시적으로 호출 가능
		상수멤버함수에서 멤버변수값 변경 불가
		상수멤버함수 안에서 비상수 멤버함수 호출 불가
	*/
	const Something something; // 상수 객체
	
	//something.value = 5;   // 멤버변수 값 변경 불가
	//something.SetValue(5); // Setter 사용불가
	//something.GetValue();  // Getter 사용불가

	printf("value : %d\n", something.value); // 멤버변수 읽기 가능

	// 상수객체는 상수멤버함수만 호출 가능
	int data = something.GetConstValue();

	printf("value : %d\n", data);
}