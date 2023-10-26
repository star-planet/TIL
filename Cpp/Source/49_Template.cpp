#include <stdio.h>

namespace Study49
{
	template <typename T>
	T MaxNum(T a, T b)
	{
		T result = a > b ? a : b;
		return result;
	}

	template <typename T1, typename T2>
	T1 MulNum(T1 a, T2 b)
	{
		T1 data1 = a;
		T2 data2 = b;
		return (data1 * data2);
	}

	template<typename T1, typename T2, typename T3>
	T1 MulThree(T1 a, T2 b, T3 c)
	{
		T1 d1 = a;
		T2 d2 = b;
		T3 d3 = c;
		return (d1 * d2 * d3);
	}
}

using namespace Study49;

void main()
{
	/*
		* 일반화
		연관성 있는 2개 이상의 집합을 묶어내는 것

		* 템플릿(Template)
		함수나 클래스를 여러자료형으로 사용할 수 있게 일반화한 툴
		함수 템플릿, 클래스 템플릿으로 나뉘어짐
		자료형의 타입을 암시로 선언 후 호출이나 객체로 만들때 자료형이 지정됨
	*/

	//함수템플릿은 매개변수를 통해 자료형이 지정되면 템플릿을 생략할 수 있다.
	int value = MaxNum<int>(10, 5);
	//int value = MaxNum(10, 5);
	printf("value : %d\n", value);

	float value2 = MaxNum<float>(12.34f, 45.67f);
	printf("value2 : %f\n", value2);

	char value3 = MaxNum<char>('a', 'b');
	printf("value3 : %c\n", value3);

	int value4 = MulNum<int, float>(10, 12.34f);
	printf("value4 : %d\n", value4);

	/*
		* 실습
		템플릿인자(일반화자료형)을 3개 사용하는 함수 만들기
		모두 곱한 값 반환
		main함수에서 호출(각각 다른 자료형으로)
	*/

	float value5 = MulThree<float, char, int>(2.1f, 'a', 1);
	printf("value5 : %f\n", value5);
}