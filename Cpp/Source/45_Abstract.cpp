#include <stdio.h>

namespace Study45
{
	class Animal // 추상클래스라고 부른다. (인스턴스 생성 불가)
	{
	public:
		void Eat() { printf("먹다.\n"); }
		void Breath() { printf("숨쉬다.\n"); }
		virtual void Howling() = 0; // 순수가상함수
	};

	class Chicken : public Animal
	{
		// 부모의 순수가상함수는 자식에서 무조건 정의해야 한다.
		virtual void Howling() override
		{
			printf("꼬끼오\n");
		}
	};
	class Cat : public Animal
	{
		virtual void Howling() override
		{
			printf("야옹\n");
		}
	};
	class Tiger : public Animal
	{
		virtual void Howling() override
		{
			printf("어흥\n");
		}
	};

	/////////////////////////////////////////////

	class Machine
	{
	public:
		Machine()
		{
			printf("시작\n");
		}
		virtual void Play() = 0;
	};
	class Fan : public Machine
	{
		virtual void Play() override
		{
			printf("윙윙\n");
		}
	};
	class Computer : public Machine
	{
		virtual void Play() override
		{
			printf("프로그래밍\n");
		}
	};

	class Scanner : public Machine
	{
		virtual void Play() override
		{
			printf("스캔\n");
		}
	};
}

using namespace Study45;

void main()
{
	/*
		* 순수가상함수
		선언만 있고 구현이 없는 함수
		자식클래스에게 구현을 강제한다.
		순수가상함수를 가지고 있다면 그 클래스는 추상클래스라고 부른다.
		추상클래스는 객체를 만들 수 없다.
	*/

	//Chicken* chicken = new Chicken();

	//Animal* animal = new Animal(); // 추상클래스는 인스턴스를 만들 수 없다.
	Animal* animal = new Chicken();
	animal->Howling();
	delete animal;

	animal = new Cat();
	animal->Howling();
	delete animal;

	animal = new Tiger();
	animal->Howling();
	delete animal;

	/*
		* 실습
		Machine 클래스 만들기
		Machine은 Play함수를 자식에게 구현을 강제한다.
		모든 Machine은 "시작"을 출력하는 기능이 있다.
		시작하면 모든 기계가 다른 기능을 수행
		선풍기(Fan)은 "윙윙" 출력
		컴퓨터(Computer)는 "프로그래밍" 출력
		스캐너(Scanner)는 "스캔" 출력
	*/

	Machine* machine = new Fan();
	machine->Play();
	delete machine;

	machine = new Computer();
	machine->Play();
	delete machine;

	machine = new Scanner();
	machine->Play();
	delete machine;

}