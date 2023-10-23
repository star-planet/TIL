#include <stdio.h>
#define TEST 20



void main58() {
	/*
		* #if, #elif, #endif
		전처리 단계에서 조건을 평가해서 코드를 컴파일 대상에서 포함시키거나 제외

	*/
#if TEST == 10 // 조건이 true라면 코드를 포함, false라면 코드 제외
	printf("1. TEST : %d\n", TEST)
#elif TEST == 20 // #if문이 거짓이고 true라면 코드를 포함
	printf("2. TEST : 20\n");
#else // #if 혹은 #elif가 모두 거짓이라면 코드를 포함
	printf("3. Other\n");
#endif // #if문은 마지막에 #endif를 붙여주어야 함

}