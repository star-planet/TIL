#include <stdio.h>
#include <string.h>

typedef struct _Human {
	char name[12];
	int age;
	float height;
}Human;

void main54() {

	Human hong = { "홍길동", 10, 123.45f };
	Human* ptrHong = &hong;

	// 구조체 포인터는 역참조연산자(*)로 구조체를 찾고 .연산자로 멤버에 접근한다.
	printf("이름 : %s\n", (*ptrHong).name);
	printf("나이 : %d\n", (*ptrHong).age);
	printf("키 : %f\n", (*ptrHong).height);

	// ->연산자
	// (*구조체포인터).멤버 를 간단하게 줄인 방식
	
	ptrHong->age = 50; // (*ptrHong).age = 50;

	/*
		* 실습
		ptrHong을 이용하여 ->연산자로 이름, 나이, 키의 값을 바꾸고 각각 값을 출력
	*/

	ptrHong->height = 173.5;
	ptrHong->age = 26;
	strcpy_s(ptrHong->name, sizeof(char) * 7, "김옥순");

	printf("\n");

	printf("이름 : %s\n", ptrHong->name);
	printf("나이 : %d\n", ptrHong->age);
	printf("키 : %.1f\n", ptrHong->height);

	system("PAUSE"); // 일시정지

}