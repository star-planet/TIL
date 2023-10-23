#include <stdio.h>

// 반환자료형 함수이름()
// 반환자료형 : 함수를 호출한 곳으로 값을 넘길때 값의 자료형
// 함수이름 : 함수를 사용할때 이름
int Hello() {
	printf("Hello\n");
	return 5; // 함수를 종료시키고 값을 호출한 곳으로 넘김(반환)
	// 반환된 값을 저장 안하면 소멸됨
}

float Unreal() {
	printf("Unreal\n");
	return 12.34f;
}


void main27() {

	/*
		* 함수
		특정용도의 코드를 한곳에 모아놓은 것
		함수 안에 함수를 만들 수 없다.
		main함수 위에 작성해야 한다.
	*/

	int value = Hello(); // 함수 호출(함수를 사용)
	printf("value : %d\n", value);

	/*
		* 실습
		"Unreal"을 출력하는 함수 만들기
		12.34f값은 반환해야 한다
	*/

	float fValue = Unreal();
	printf("fValue : %.2f\n", fValue);

}