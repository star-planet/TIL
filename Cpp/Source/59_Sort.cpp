#include <stdio.h>

void main()
{
	/*
		* 내림차순 정렬
		큰 숫자부터 작은 숫자 순서로 정렬
	*/

	int num[10];

	for (int i = 0; i < 10; i++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 9; i++) // 0 ~ 8까지 반복
	{
		for (int j = 0; j < (9 - i); j++)
		{
			if (num[j] < num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("<%d>", num[i]);
	}

	printf("\n");
	/*
		* 실습
		오름차순으로 정렬한 값도 출력
	*/

	for (int i = 0; i < 9; i++) // 0 ~ 8까지 반복
	{
		for (int j = 0; j < (9 - i); j++)
		{
			if (num[j] > num[j + 1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("<%d>", num[i]);
	}
}