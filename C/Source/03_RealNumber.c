#include <stdio.h>

void main3() {

	 /*
		 실수형 자료형
		 실수 : 소수점 이하의 정밀한 값을 표현하는 수치형
		 float형 변수에 들어가는 값은 숫자 뒤에 f를 붙인다.
		 f를 안 붙히면 double로 인식
	 */
	float speed = 1.234567890f; // 4byte, 유효자리수 : 6

	double currentHp = 23.45; // 8byte, 유효자리수 : 15

	printf("speed: %.10f\n", speed);
	printf("currentHp: %f\n", currentHp);

	 /*
		 실수형 데이터 주의사항
		 컴퓨터는 모든 값을 이진수로 저장한다.
		 소수점을 이진수로 저장하기에는 어려움이 있다.
		 가끔 실수값이 저장될때 오차가 발생하는데 무시해도 될 정도
	 */


}