#include <stdio.h>

namespace Study23
{
	class Padding
	{
	public:
		int num; // 4byte
		int num2; // 4byte
		char ch; // 1byte
		char ch2; // 1byte
	};
}

using namespace Study23;

void main()
{
	/*
		* 바이트 패딩
		CPU는 데이터를 4byte씩 읽는다.
		만약 비어있는 공간이 있다면 패딩바이트로 채워서 4byte단위로 맞춘다.
	*/
	Padding padding;
	printf("padding size : %d", sizeof(padding));
}