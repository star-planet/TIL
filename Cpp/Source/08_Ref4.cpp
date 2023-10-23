#include <stdio.h>
#include <string.h>

namespace Study8
{
	void CreateName(char*& value)
	{
		/*
			포인터 참조형 변수(*&)
			포인터변수를 참조하는 역할
		*/

		value = new char[32];
		strcpy_s(value, sizeof(char) * 7, "홍길동");
	}

	void Plus(int*& value)
	{
		(*value) += 5;
	}
}

void main8()
{
	char* name;
	
	Study8::CreateName(name);

	printf("%s\n", name);

	delete name;

	/*
		실습
		ptr 변수를 매개변수로 넘겨서 참조형으로 값을 5 증가시켜주기
	*/

	int num = 5;
	int* ptr = &num;

	Study8::Plus(ptr);

	printf("%d\n", num);
}
