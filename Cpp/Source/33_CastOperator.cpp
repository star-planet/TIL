#include <stdio.h>

namespace Study33
{
	class Cast
	{
	private:
		int data;
	public:
		Cast(int _data) { data = _data; }

		/* 형변환 오버로딩 */
		operator double() const
		{
			return double(data);
		}
	};
}

using namespace Study33;

void main33()
{
	Cast castA(10);
	double db = castA; // 형변환 오버로딩이 호출된다.
	
	printf("db : %f\n", db);
}