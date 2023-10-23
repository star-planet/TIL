#include <stdio.h>

void main4() {

	 /*
		 문자
		 컴퓨터는 0, 1로 모든 것을 표현한다.
		 문자도 숫자에 대응시켜 저장한다.
		 어떤 식으로 대응했는지를 "문자셋"이라고 한다.
		 미국 표준 "아스키 코드"가 일반적이다.
	 */

	//알파벳: 1byte 한글: 2byte(1글자당)
	char ch = 'a'; // 1byte

	printf("ch: %c / ch: %d\n", ch, ch);

	ch = 81 + 5;

	printf("ch: %c / ch: %d\n", ch, ch);

	 /*
		 문자열
		 일련의 문자가 연속되는 문자의 집합
		 문자열은 큰따옴표를 사용한다.("")
		 문자열은 끝에 항상 널종료문자(\0)가 붙기 때문에
		 실제 크기보다 1 더 크게 선언해야 한다.
	 */
	char str[6] = "korea";

	printf("str: %s\n", str);

	char str2[9] = "대한민국";
	printf("str2: %s\n", str2);

	 /*
		 실습
		 정수형, 실수형, 문자형 변수들을 자료형 별로 1개씩 선언하기
		 값을 넣어보고 출력해보기
	 */

	int num = 123;
	char al = 'a';
	float fl = 4.56f;
	char st[4] = "abc";

	printf("num: %d, s: %c, fl: %.2f, st: %s", num, al, fl, st);

}