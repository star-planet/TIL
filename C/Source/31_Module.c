#include <stdio.h>
#include "Util.h"

/*
	#include의 <>와 ""의 차이
	<> : 컴파일러가 설치된 위치에서 헤더파일을 찾는 지시어
	 ""  : 사용자 프로젝트 폴더에서 헤더파일을 찾는 지시어
*/

void main31() {
	AddSumPrint(1, 10);
	AddSumPrint(50, 100);
}