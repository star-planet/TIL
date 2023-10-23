#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct _User {
	char* name;
}User;

typedef struct _Character {
	int damage;
	float speed;
	char* name;
}Character;

void main62() {
	/*
		* 깊은 복사
		포인터멤버의 메모리주소가 아닌 데이터값을 복사하는 방법
		메모리를 새롭게 할당하여 포인터변수에 입력시킴
		얕은복사에 비해 작업시간 및 리소스소모가 있음
	*/

	User wizard;
	wizard.name = malloc(sizeof(char) * 7);
	strcpy_s(wizard.name, sizeof(char) * 7, "마법사");

	User knight;
	knight = wizard; // 얕은 복사
	knight.name = malloc(sizeof(char) * 7);
	strcpy_s(knight.name, sizeof(char) * 7, wizard.name);

	strcpy_s(knight.name, sizeof(char) * 7, "나이트");

	printf("위자드 : %s\n", wizard.name);
	printf("나이트 : %s\n", knight.name);

	free(wizard.name);
	free(knight.name);

	/*
		* 실습
		Character 구조체를 이용하여 얕은복사, 깊은복사 해주기
	*/

	Character user1;
	user1.name = malloc(sizeof(char) * 5);
	strcpy_s(user1.name, sizeof(char) * 5, "아쳐");

	Character user2;
	user2 = user1;

	strcpy_s(user2.name, sizeof(char) * 5, "궁수");

	printf("%s\n", user1.name);
	printf("%s\n", user2.name);

	free(user1.name);


	Character user3;
	user3.name = malloc(sizeof(char) * 7);
	strcpy_s(user3.name, sizeof(char) * 7, "김개똥");

	Character user4;
	user4 = user3;
	user4.name = malloc(sizeof(char) * 7);
	strcpy_s(user4.name, sizeof(char) * 7, user3.name);

	strcpy_s(user4.name, sizeof(char) * 7, "아무개");

	printf("%s\n", user3.name);
	printf("%s\n", user4.name);

	free(user3.name);
	free(user4.name);

}