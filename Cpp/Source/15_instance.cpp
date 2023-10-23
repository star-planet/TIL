#include <stdio.h>
#include <string.h>

namespace Study15
{
	class Product
	{
	public:
		char name[12]; // 이름
		int price; // 가격
		void Print();
	}; // 클래스 정의(클래스의 기능을 만듦)

	void Product::Print()
	{
		printf("제품명 : %s\n", name);
		printf("가격 : %d\n", price);
	}
}

using namespace Study15;

void main()
{

	/*
		* 클래스/객체/인스턴스
		클래스(Class)      : 변수와 함소의 모음(기능)
		객체(Object)       : 클래스를 이용하여 만든 결과물(사용 가능한 상태)
		인스턴스(Instance) : 실제 메로리에 구현된 사용가능한 정보
	*/

	Product gamja; // 객체 + 인스턴스(사용가능한 상태)

	strcpy_s(gamja.name, sizeof(char) * 5, "감자");
	printf("이름 : %s\n", gamja.name);

	gamja.price = 1000;
	printf("가격 : %d\n", gamja.price);

	Product* apple; // 클래스 포인터 변수
	// 현재 사용할 수 있는 정보가 없으므로 객체가 아니다
	// apple->price = 500;

	// apple은 사용할 수 있는 정보가 있으므로 객체가 된다
	apple = new Product(); // 인스턴스(사용가능한 정보)
	apple->price = 500;
	strcpy_s(apple->name, sizeof(char) * 5, "사과");
	apple->Print();

	/*
		* 실습
		Product로 포인터 변수로 객체 3개 만들고 정보 넣고 출력해보기
	*/
	Product* grape = new Product();
	Product* orange = new Product();
	Product* banana = new Product();

	strcpy_s(grape->name, sizeof(char) * 5, "포도");
	grape->price = 1000;

	strcpy_s(orange->name, sizeof(char) * 7, "오렌지");
	orange->price = 2000;
	
	strcpy_s(banana->name, sizeof(char) * 7, "바나나");
	banana->price = 1500;

	grape->Print();
	orange->Print();
	banana->Print();

}