#include <stdio.h>

void main58()
{
	/*
		* 검색알고리즘
		원하는 값을 찾는 방법
	*/

	int data[] = { 1,3,5,7,9 };
	int search;
	bool isFlag = false;
	int index = -1;

	printf("검색할 값 : ");
	scanf_s("%d", &search);

	// * 순차검색
	for (int i = 0; i < 5; i++)
	{
		if (search == data[i])
		{
			isFlag = true;
			index = i;
			break;
		}
	}

	if (isFlag)
	{
		printf("찾은 값 : %d\n", search);
		printf("찾은 위치 :%d\n", index);
	}
	else
	{
		printf("찾지 못했습니다.");
	}

	/*
		* 실습
		float형 데이터를 10개 만들고 역순으로 검색하여 찾은 값과 인덱스 번호 출력
	*/

	float dataSet[] = { 1.f, 2.f, 3.f, 4.f, 5.f, 6.f, 7.f, 8.f, 9.f, 10.f };
	float search2;
	bool isFlag2 = false;
	int index2 = -1;

	printf("검색할 값 : ");
	scanf_s("%f", &search2);

	for (int i = 9; i >= 0; i--)
	{
		if (search2 == dataSet[i])
		{
			isFlag2 = true;
			index2 = i;
			break;
		}
	}

	if (isFlag)
	{
		printf("찾은 값 : %f", search2);
		printf("찾은 위치 : %d", index2);
	}

	else
	{
		printf("찾지 못했습니다.");
	}
}