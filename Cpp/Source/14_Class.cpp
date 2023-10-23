#include <stdio.h>

namespace Study14
{
	class Human
	{
	// public : 접근지정자 중 하나, 외부에서 멤버 접근 허용
	public:
		char name[12];
		int age;
		float height;

		void PrintName();
	};

	void Human::PrintName()
	{
		printf("이름 : %s\n", name);
	}

	class Warrior
	{
	public:
		char name[12];
		int age;
		float height;
		float speed;
	};
}

using namespace Study14;


void main14()
{
	/*
		* 클래스(Class)
		변수와 함수의 모음
		구조체와 차이가 없다. (접근지정자 차이만 있다)

		* 객체지향의 4대 속성
		캡슐화 : 변수와 함수를 묶는다
		상속성 : 공통된 요소를 자식에게 물려줌
		다형성 : 다른 객체가 동일한 메세지로 다른 기능 수행
		추상성 : 공통적인 부분, 특정 특성을 분리해 재조합
	*/

	Human babarian = { "바바리안", 13, 12.34f };
	babarian.PrintName();
	printf("나이 : %d\n", babarian.age);
	printf("키 : %f\n", babarian.height);

	printf("\n");

	/*
		실습
		Study14 안에 Warrior 클래스를 만들고 전사에 정보를 변수로 만들어 준다음 main함수에서 각각 출력
	*/

	Warrior warrior = { "전사", 23, 135.7f, 5.0f };
	printf("이름 : %s\n", warrior.name);
	printf("나이 : %d\n", warrior.age);
	printf("키   : %f\n", warrior.height);
	printf("속도 : %f\n", warrior.speed);
}