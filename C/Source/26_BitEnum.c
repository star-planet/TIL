#include <stdio.h>

enum DiseaseState {
	Normal = 0,          // 0000
	Stun = 1 << 0,     // 0001
	Burn = 1 << 1,     // 0010
	Poison = 1 << 2  // 0100
};

enum Color {
	Standard,
	White = 0,
	Red = 1 << 0,
	Blue = 1 << 1,
	Green = 1 << 2,
	Yellow = 1 << 3
};

void main26() {

	enum DiseaseState diseaseState = Normal;

	diseaseState |= Burn; // 화상 추가 0010
	diseaseState |= Poison; // 중독 추가 0110
	diseaseState |= Stun; // 스턴 추가 0111

	diseaseState &= ~Burn; // 화상 제거 0101

	if ((diseaseState & Stun) == Stun) {
		printf("스턴 상태\n");
	}

	else if ((diseaseState & Poison) == Poison) {
		printf("중독 상태\n");
	}

	/*실습
	열거형 Color를 만든다
	White, Red, Blue, Green, Yellow를 가진다
	Color변수를 만들어서 Red, Blue, Yellow를 추가
	Blue제거
	Red, Yellow를 모두 가지고 있다면 "Orange"를 출력*/

	enum Color color = Standard;

	color |= Red; // 0001
	color |= Blue; // 0011
	color |= Yellow; // 1011

	color &= ~Blue; // 1001

	if ((color & Red) == Red && (color & Yellow) == Yellow) {
		printf("%d, Orange\n", color);
	}
}