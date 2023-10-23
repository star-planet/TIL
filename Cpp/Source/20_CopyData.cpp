#include <stdio.h>


namespace Study20
{
	class Copy
	{
	public:
		int num;

		Copy()
		{
			printf("디폴트 생성자\n");
		}

		/*
			복사생성자
			객체의 복사본을 생성할 때 호출되는 생성자
			없다면 컴파일러가 만들어서 사용
			직접 만들면 멤버변수들을 복사하지 않는다.
			추가적으로 멤버변수를 복사하는 로직을 넣어주어야 한다.
		*/
		Copy(Copy& data)
		{
			num = data.num;
			printf("복사생성자\n");
		}
	};

	class NewClass
	{
	public:
		char ch;

		NewClass()
		{
			printf("Defalut\n");
		}

		NewClass(NewClass& data)
		{
			ch = data.ch;
			printf("Copy\n");
		}
	};
}

using namespace Study20;

void main20()
{
	Copy copyA;
	copyA.num = 22;
	Copy copyB = copyA; // 복사생성자 호출

	printf("copyA : %d\n", copyA.num);
	printf("copyB : %d\n", copyB.num);

	/*
		실습
		클래스를 하나 만들어서 복사생성자 만들기
		main함수에서 복사생성자 호출시켜주기
	*/

	NewClass newClassA;
	newClassA.ch = 'A';
	NewClass newClassB = newClassA;

	printf("newClassA : %c\n", newClassA.ch);
	printf("newClassB : %c\n", newClassB.ch);

}