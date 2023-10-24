#include <stdio.h>
#include <string.h>

namespace Study38
{
	class Actor
	{
	protected:
		char name[12];
	public:
		Actor(const char* _name)
		{
			printf("액터 생성\n");
			strcpy_s(name, strlen(_name) + 1, _name);
		}
		~Actor()
		{
			printf("액터 소멸\n");
		}
	};

	class Pawn : public Actor
	{
	protected:
		int dex;
	public:
		Pawn(const char* _name, int _dex) : Actor(_name)
		{
			printf("폰 생성\n");
			dex = _dex;
		}
		~Pawn()
		{
			printf("폰 소멸\n");
		}
	};
}

using namespace Study38;

void main38() 
{
	/*
		* 상속시 자식객체 생성
		컴파일러가 자동으로 부모객체를 만든다.
		자식객체가 소멸하면 부모객체도 같이 소멸한다.
		생성순서 : 조상 먼저 생성 (조상 -> 부모 -> 자식)
		소멸순서 : 조상이 나중에 소멸 (자식 -> 부모 -> 조상)

		*상속클래스의 호환
		변수끼리 대입할 경우 좌우변의 타입이 같거나 어느정도 호환이 되어야함
		상속관계에 있는 클래스간의 대입은 타입이 달라도 어느정도 호환이 가능
		부모클래스에 자식클래스 대입은 허용
		자식클래스에 부모클래스 대입은 허용하지 않음
	*/

	int numA = 10;
	int numB = 20;

	numA = numB;

	float numC = 30.f;
	numA = numC; // 수치형 자료형은 어느정도 호환이 된다.


	Actor* actor = new Actor("액터");
	Pawn* pawn = new Pawn("폰", 10);

	Actor* ptrActor = actor;
	Pawn* ptrPawn = pawn;

	ptrActor = pawn; // 부모클래스에 자식객체 대입은 허용

	//ptrPawn = actor; // 자식클래스에 부모객체 대입은 불가능

	delete actor;
	delete pawn;

}