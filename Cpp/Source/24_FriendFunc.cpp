#include <stdio.h>



namespace Study24
{
	class Time
	{
		friend void Today(Time&, class Day&);
	private:
		int hour;
	public:
		Time(int _hour)
		{
			hour = _hour;
		}
	};

	class Day
	{
		friend void Today(Time&, Day&);
	private:
		int date;
	public:
		Day(int _date)
		{
			date = _date;
		}
	};

	void Today(Time& time, Day& day)
	{
		printf("시간 : %d / 날짜 : %d\n", time.hour, day.date);
	}
}

using namespace Study24;

void main24()
{
	Time time(10);
	Day day(31);

	Today(time, day);
}