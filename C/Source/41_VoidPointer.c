#include <stdio.h>

void main41() {

	/*
		* void포인터
		포인터는 자료형이 다른 포인터를 저장하면 원래는 오류 발생
		void포인터는 어떤 자료형이든 포인터를 저장할 수 있다.
		"범용 포인터"라고도 부름
		자료형이 정해지지 않아서 역참조 불가능
	
	*/

	char ch = 10;
	float speed = 12.34f;
	int num = 20;
	double db = 23.45;

	void* voidPtr;

	voidPtr = &ch;
	voidPtr = &speed;
	voidPtr = &num;
	voidPtr = &db;



}