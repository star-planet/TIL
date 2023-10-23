#include <random>
#include <time.h>
#include <stdio.h>

namespace Study12
{
	/*
		* 인라인 함수
		함수를 호출하지 않고 코드를 그자리에서 그대로 실행
		호출과정이 없으므로 속도가 빠름
		단, 코드가 복제되므로 너무 많이 사용하면 실행파일이 커지게 됨
		코드가 길면 일반함수를 사용해야 한다.
		인라인함수는 번지를 가지지 않으므로 함수포인터가 가리킬 수 없다
		컴파일러는 인라인에 대한 요청을 자유롭게 무시할 수 있다

		* 인라인함수의 단점
		인라인함수의 호출부분에 코드를 삽입하므로 그만큼 메모리가 낭비됨
		주로 짧은 코드에 사용해야한다
	*/
	inline int Random(int n)
	{
		return rand() % n;
	}

	inline int Plus(int a, int b)
	{
		return a + b;
	}

	inline int Multiple(int a, int b)
	{
		return a * b;
	}
}

void main()
{
	srand((unsigned)time(NULL)); // 난수 시작점

	printf("난수 : %d\n", Study12::Random(10));
	printf("난수 : %d\n", Study12::Random(20));
	printf("난수 : %d\n", Study12::Random(30));
	printf("난수 : %d\n", Study12::Random(40));
	printf("난수 : %d\n", Study12::Random(50));
	printf("난수 : %d\n", Study12::Random(60));
	printf("난수 : %d\n", Study12::Random(70));

	/*
		오버헤드 현상
		짧은 줄의 함수를 너무 많이 호출하면 발생하는 현상
		프로그램 실행 도중 다른 위치에 코드를 실행시켜야 할 때 간접적으로 시간, 메모리, 자원 등이 사용되는 현상
		즉 , 다른 곳의 함수를 실행할 때 메모리와 시간이 더 소모되는 현상
	
	*/

	/* 
		* 실습 
		인라인 함수 2개 만들어서 호출해보기
	*/

	printf("a + b : %d\n", Study12::Plus(10, 20));
	printf("a + b : %d\n", Study12::Plus(1, 2));
	printf("a * b : %d\n", Study12::Multiple(10, 20));
	printf("a * b : %d\n", Study12::Multiple(1, 2));
}