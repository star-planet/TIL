#include <stdio.h>

namespace Study10
{
	/*
		* 디폴트인수
		매겨변수에 기본값을 정의하는 것
		기본값을 정의했다면 호출시 인자를 생략할 수 있다
		인자를 생략하면 기본값이 들어간다
		값을 명시한다면 기본값은 무시가 된다
	*/
	void ParamPrint(int value = 0)
	{
		printf("매개변수 : %d\n", value);
	}

	int GetSum(int from, int to, int step = 1, int base = 0)
	{
		int sum = base;
		for (int i = from; i <= to; i += step)
		{
			sum += i;
		}
		return sum;
	}
}

void main10()
{
	Study10::ParamPrint();
	Study10::ParamPrint(55);

	int result = Study10::GetSum(1, 20);
	printf("1 ~ 20까지의 합 : %d\n", result);
	result = Study10::GetSum(5, 50, 3);
	printf("5 ~ 50이며 3step 건너뛴 합 : %d\n", result);
	result = Study10::GetSum(10, 30, 2, 15);
	printf("15 ~ 35의 합 홀수만 : %d\n", result);
}