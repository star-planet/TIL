#include <stdio.h>

namespace Study22
{
	class Capsule
	{
	public:
		// Getter : 은닉화한 변수를 읽을 수 있게 해줌
		int GetMoney()
		{
			return money;
		}
		// Setter : 은닉화한 변수의 값을 변경
		void SetMoney(int _money)
		{
			if (_money >= 0 && _money < 999) // 유효성 검사
			{
				money = _money;
				printf("돈의 값이 변경됨\n");
			}

			else
			{
				printf("잘못된 값이 들어왔다.\n");
			}
		}
	private:
		int money = 100; // 중요한 재화이므로 접근하지 못하게 privates
	};

	class FCapsule
	{
	public:
		float GetValue()
		{
			printf("값 읽음\n");
			return value;
		}

		void SetValue(float _value)
		{
			if (_value >= 30.0f && _value <= 80.0f)
			{
				value = _value;
			}

			else
			{
				printf("잘못된 값\n");
			}
		}
	private:
		float value = 1.0f;
	};
}

using namespace Study22;

void main22()
{
	/*
		* 캡슐화
		객체의 속성(변수)와 행위(함수)를 하나로 묶고 구현 내용 일부를 감추어 은닉한다.
		사용자는 객체를 함수를 통해 접근할 수 있다.
		멤버변수는 private, 멤버 함수는 public으로 설정
		클래스의 재사용성과 유지보수 측면에서 많은 이점이 있다.
		단점은 캡슐화를 하는데 시간이 많이 소요된다.
	*/

	Capsule* capsule = new Capsule();

	printf("가진 금액 : %d\n", capsule->GetMoney());
	capsule->SetMoney(999);
	printf("가진 금액 : %d\n", capsule->GetMoney());

	capsule->SetMoney(-9);
	delete capsule;

	/*
		* 실습
		float형 변수 하나 만들기
		이 변수의 값은 30부터 80까지 값만 넣을 수 있다.
		값을 읽을 때마다 "값 읽음"이 출력된다.
		캡슐화를 이용하여 구현
	*/

	FCapsule* fCapsule = new FCapsule();
	printf("Value : %f\n", fCapsule->GetValue());
	fCapsule->SetValue(50.0f);
	printf("Value : %f\n", fCapsule->GetValue());
	fCapsule->SetValue(10.0f);

	delete fCapsule;
}