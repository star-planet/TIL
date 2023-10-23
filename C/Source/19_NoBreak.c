#include <stdio.h>
#include <conio.h>

void main19() {

	//printf("실행하시겠습니까?\n");
	//char ch = _getch();

	//switch (ch) {
	//// case를 break없이 연달아서 쓰면 조건이 (||)과 같다.
	//case 'Y':
	//case 'y':
	//	puts("실행합니다.");
	//	break;
	//case 'N':
	//case 'n':
	//	puts("종료합니다.");
	//	break;
	//default:
	//	puts("잘못입력되었습니다.");
	//	break;
	//}

	// 실습
	// 문자를 입력받아서 switch문을 활용하여 
	// 'W', 'w', 'S', 's'를 입력받으면 "위아래"출력
	// 'A', 'a', 'D', 'd'를 입력받으면 "좌우"출력

	printf("문자 입력: ");
	char _ch = _getch();
	printf("%c\n", _ch);

	switch (_ch) {
	case 'W':
	case 'w':
	case 'S':
	case 's':
		puts("위아래");
		break;
	case 'A':
	case 'a':
	case 'D':
	case 'd':
		puts("좌우");
		break;
	default:
		puts("옳지않은 입력");
		break;
	}
}