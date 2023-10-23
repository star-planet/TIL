#include <stdio.h>

namespace Study9
{
	int arr[] = { 1,2,3,4,5 };

	/*
		* 참조형 반환
		반환형이 참조타입인 함수를 만든다
		참조반환을 하면 실제 데이터를 반환하게 된다
		실제 데이터를 반환하므로 호출시 값을 넣어줄 수 있게 된다
	*/
	int& GetOrSetArr(int index)
	{
		return arr[index];
	}
}

void main9()
{
	Study9::GetOrSetArr(3) = 70;

	for (int i = 0; i < 5; i++)
	{
		// 실제 데이터 값을 출력할 수 있다.
		printf("arr[%d] : %d\n", i, Study9::GetOrSetArr(i));
	}
}
