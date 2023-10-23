#include <stdio.h>

namespace Study32
{
	class Vector
	{
	private:
		float x, y, z;
	public:
		Vector(float _x, float _y, float _z)
		{
			x = _x; y = _y; z = _z;
		}

		/* 더하기 연산자 오버로딩 */
		Vector operator +(Vector& other)
		{
			return Vector(x + other.x, y + other.y, z + other.z);
		}

		/* 뺴기 연산자 오버로딩 */
		Vector operator -(Vector& other)
		{
			return Vector(x - other.x, y - other.y, z - other.z);
		}

		/* 곱하기 연산자 오버로딩 */
		Vector operator *(Vector& other)
		{
			return Vector(x * other.x, y * other.y, z * other.z);
		}

		/* 나누기 연산자 오버로딩 */
		Vector operator /(Vector& other)
		{
			return Vector(x / other.x, y / other.y, z / other.z);
		}

		void Display()
		{
			printf("x : %f / y : %f / z : %f\n", x, y, z);
		}
	};
}

using namespace Study32;

void main32()
{
	/*
		* 연산자 오버로딩
		클래스간의 연산자 기능을 만들어 주는 것
		기존에 없는 새로운 연산자는 만들 수 없다.(^, @, #, $)
	*/
	Vector v1(1, 2, 3);
	Vector v2(4, 5, 6);

	Vector result = v1 + v2;
	result.Display(); // 5, 7, 9

	result = v1 - v2;
	result.Display(); // -3, -3, -3

	/*
		* 실습
		곱하기, 나누기 연산자오버로딩 만들기
	*/

	result = v1 * v2;
	result.Display(); // 4, 10, 18

	result = v1 / v2;
	result.Display(); // 0.25, 0.4, 0.5
}