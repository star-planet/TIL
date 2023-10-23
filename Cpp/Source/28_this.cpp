#include <stdio.h>

namespace Study28
{
	class Game
	{
	private:
		int score;
		float speed;
	public:
		Game(int score, float speed)
		{
			/*
				* this
				나(자신)을 의미
				클래스를  가리키는 포인터
			*/
			this->score = score;
			this->speed = speed;
		}
	};

	class Test
	{
	private:
		int damage;
	public:
		void MyDamage(int damage)
		{
			this->damage = damage;
		}
	};
}

using namespace Study28;

void main28()
{

}