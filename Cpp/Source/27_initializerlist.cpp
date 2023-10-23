#include <stdio.h>

namespace Study27
{
	class Simple
	{
	private:
		int value;
		float speed;
	public:
		/*
			생성자초기화 리스트
			생성자 옆에 :(콜론)으로 멤버변수의 값을 초기화
		*/
		Simple() : value(10), speed(12.34f)
		{
			printf("value : %d\n", value);
			printf("speed : %f\n", speed);
		}
		Simple(int _value, float _speed) : value(_value), speed(_speed)
		{
			printf("value : %d\n", value);
			printf("speed : %f\n", speed);
		}
	};

	class Practice
	{
	private:
		int a;
		char b;
		float c;
	public:
		Practice() : a(3), b('e'), c(4.2f)
		{
			printf("a : %d\n", a);
			printf("b : %c\n", b);
			printf("c : %f\n", c);
		}

		Practice(int _a, char _b, float _c) : a(_a), b(_b), c(_c)
		{
			printf("a : %d\n", a);
			printf("b : %c\n", b);
			printf("c : %f\n", c);
		}
	};
}

using namespace Study27;

void main27()
{
	Simple* simple = new Simple();
	Simple* simple2 = new Simple(99, 98.76f);

	delete simple;
	delete simple2;

	/*
		* 실습
		클래스를 새로 만들어서 각각 다른 자료형으로 3개의 멤버변수 넣어주기
		생성자 초기화리스트로 멤버변수 값 넣어주기
		생성자 1개는 매개변수 없음
		두번째 생성자는 매개변수 3개를 통해서 멤버변수 초기화
	*/

	Practice* practice = new Practice();
	Practice* practice2 = new Practice(22, 'h', 2.2f);

	delete practice;
	delete practice2;


}