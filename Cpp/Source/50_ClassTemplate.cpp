#include <stdio.h>

namespace Study50
{
	class Vector
	{
	public:
		float x, y, z;
	};

	template<typename T>
	class Test
	{
	public:
		T value; // 자료형이 정해지지 않은 멤버변수
		T* ptrValue;
		Test(T _value) { value = _value; }
		Test(T* _value) { ptrValue = _value; }

		T GetValue()
		{
			return value;
		}
	};

	template<typename T1, typename T2>
	class Player
	{
	public:
		T1 value;
		T2 value2;
	};
}

using namespace Study50;

void main50()
{
	/*
		* 클래스 템플릿
		함수템플릿은 기능만 만들고 타입(자료형)은 정해지지 않은 함수의 일반화
		클래스 템플릿도 타입이 정해지지 않은 클래스의 일반화
		함수템플릿은 템플릿인수의 자료형을 호출시 작성하지 않아도 됨(매개변수를 통해 파악이 가능할 경우)
		클래스 템플릿은 템플릿인수의 자료형을 반드시 명시해야 함
	*/

	Test<int>* a = new Test<int>(5);
	printf("value : %d\n", a->GetValue());
	delete a;

	Test<Vector>* vec = new Test<Vector>(new Vector());
	vec->value.x = 1.f;
	vec->value.y = 2.f;
	vec->value.z = 3.f;
	printf("vec.x : %f\n", vec->GetValue().x);
	delete vec;
}