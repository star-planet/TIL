#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct _Unit {
	char* name;
}Unit;

void main61() {
	/*
		얕은복사
		포인터 변수가 가리키는 변수의 실제 데이터가 아닌 메모리주소를 복사하는 방법
	*/
	Unit unit;
	unit.name = malloc(sizeof(char) * 7);
	strcpy_s(unit.name, sizeof(char) * 7, "홍길동");

	Unit warrior;
	// 포인터변수는 데이터가 아닌 메모리주소값이 복사된다.
	// 이때 일부 메모리를 공유하면 독립적인 사본이 아니게 된다.
	warrior = unit;
	strcpy_s(warrior.name, sizeof(char) * 7, "유니티");

	printf("유닛 : %s\n", unit.name);
	printf("전사 : %s\n", warrior.name);

	strcpy_s(unit.name, sizeof(char) * 7, "언리얼");

	printf("유닛 : %s\n", unit.name);
	printf("전사 : %s\n", warrior.name);

	free(unit.name); // 워리어와 같은 공간을 가리키므로 한 번만 해제해준다.
	//free(warrior.name); // 이중해제 문제 발생
}