#include <stdio.h>

void main3()
{
	/*
		배열 동적할당
		new[]를 사용하여 동적할당
		delete[]를 사용하여 메모리 해제
	*/

	int* ar = new int[5]; // 4byte * 5(20byte)를 할당

	for (int i = 0; i < 5; i++)
	{
		ar[i] = i;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("ar[%d] = %d\n", i, ar[i]);
	}
	delete[] ar; // 공간을 한꺼번에 해제

	printf("\n");

	/*
		실습
		float, char형을 new[]를 사용하여 동적할당
		값을 넣어주고 출력
	*/

	float* ar2 = new float[5];

	for (int i = 0; i < 5; i++)
	{
		ar2[i] = (float)i;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("ar[%d] = %f\n", i, ar2[i]);
	}

	delete[] ar2;

	printf("\n");

	char* ar3 = new char[5];

	for (int i = 0; i < 5; i++)
	{
		ar3[i] = i+65;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("ar3[%d] = %c\n", i, ar3[i]);
	}

	delete[] ar3;

}
