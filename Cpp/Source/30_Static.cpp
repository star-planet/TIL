#include <stdio.h>

namespace Study30
{
	class Test
	{
	public:
		static int count; // 정적멤버변수
		int number;       // 일반멤버변수
	};
}

using namespace Study30;

int Test::count = 0; // 정적변수는 전역에서 초기화를 해주어야 한다.

void main()
{
	/*
		* Static(정적) 멤버
		한번만 초기화 되며 프로그램 종료시 소멸한다.
		범위를 벗어나도 소멸하지 않는다.
		모든 객체가 공유하는 멤버가 된다.
		객체와는 독립적으로 존재한다.
	*/

	Test* testA = new Test();
	Test* testB = new Test();
	Test* testC = new Test();

	/* 일반 멤버 변수 */
	// 각 객체마다 개별적으로 존재하게 됨
	testA->number = 10;
	testB->number = 20;
	testC->number = 30;

	printf("testA number : %d\n", testA->number);
	printf("testB number : %d\n", testB->number);
	printf("testC number : %d\n", testC->number);

	/* 정적 멤버 변수 */
	// 모든 객체가 공유하는 변수가 된다.
	testA->count = 10;
	testB->count = 20;
	testC->count = 30;
	
	printf("testA count : %d\n", testA->count);
	printf("testB count : %d\n", testB->count);
	printf("testC count : %d\n", testC->count);

	/* 클래스명으로 사용 */
	Test::count = 50;
	printf("Test::count : %d\n", Test::count);
}