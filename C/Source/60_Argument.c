#include <stdio.h>
#include <stdarg.h> // 가변인자관련 헤더파일

void intArgument(int args, ...) {
	va_list ap; // 가변인자의 첫 시작주소를 가리킬 포인터
	va_start(ap, args);// ap포인터에 args의 주소를 넣어줌

	for (int i = 0; i < args; i++) {
		int num = va_arg(ap, int); // int형 크기만큼 ap의 메모리주소를 옮김
		printf("인자 : %d\n", num);
	}
	va_end(ap); // ap변수를 null로 초기화
}

void charArgument(char args, ...) {
	va_list ap; // 가변인자의 첫 시작주소를 가리킬 포인터
	va_start(ap, args);// ap포인터에 args의 주소를 넣어줌

	for (int i = 0; i < args; i++) {
		char ch = va_arg(ap, char); // char형 크기만큼 ap의 메모리주소를 옮김
		printf("인자 : %c\n", ch);
	}
	va_end(ap); // ap변수를 null로 초기화
}

void main60() {

	intArgument(1, 10);
	intArgument(3, 50, 60, 70);
	intArgument(5, 1, 2, 3, 4, 5);
	
	charArgument(1, 'x');
	charArgument(3, 'a', 'b', 'c');
}