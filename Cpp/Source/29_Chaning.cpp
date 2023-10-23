#include <stdio.h>

namespace Study29
{
	class Calculator
	{
	private:
		int value;
	public:
		Calculator(int _value) { value = _value; }

		Calculator& Add(int _value)
		{
			value += _value;
			return *this; // 객체를 반환
		}

		Calculator& Sub(int _value)
		{
			value -= _value;
			return *this;
		}

		Calculator& Mul(int _value)
		{
			value *= _value;
			return *this;
		}

		int GetValue()
		{
			return value;
		}
	};

	class GameState
	{
	private:
		const char* state;
	public:
		GameState() { state = "\0"; }
		
		GameState& Start(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
		GameState& Ready(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
		GameState& Continue(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
		GameState& Exit(const char _state[5])
		{
			state = _state;
			printf("%s\n", state);
			return *this;
		}
	};
}

using namespace Study29;

void main29()
{
	/*
		* 디자인패턴
		어떤 문제를 해결할 때 나타나는 일반적인 코드 패턴

		* 멤버함수 체이닝 패턴
		작업중이던 객체를 반환하여 멤버함수를 연속적으로 호출하는 패턴
		장점 : 코드 줄 수를 단축할 수 있다.
		단점 : 오류 파악이 힘들다.

	*/

	Calculator* cal = new Calculator(10);
	cal->Add(5).Mul(55).Sub(5).Add(7);
	printf("value: %d\n", cal->GetValue());

	/*
		* 실습
		GameState라는 클래스를 만든다
		"시작" 출력함수
		"준비" 출력함수
		"진행" 출력함수
		"종료" 출력함수
		각각 함수를 만들고 체이닝 패턴으로 함수들을 순서대로 호출
	*/

	GameState* gamestate = new GameState();
	gamestate->Start("시작").Ready("준비").Continue("진행").Exit("종료");
	delete gamestate;
}