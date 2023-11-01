#include <iostream>
#include <deque>
using namespace std;

void main65()
{
	/*
		덱(Deque)
		Double Ended Queue의 줄임말
		큐의 앞(front)와 뒤(rear)에서 삽입과 삭제가 가능한 구조
		중간에 삽입이나 삭제는 허용하지 않음
	*/

	deque<int> Deque;

	// 앞에 데이터를 추가
	Deque.push_front(1); // 1
	Deque.push_front(2); // 2 1
	Deque.push_front(3); // 3 2 1
	Deque.push_front(4); // 4 3 2 1

	// 뒤에 데이터를 추가
	Deque.push_back(9); // 4 3 2 1 9
	Deque.push_back(8); // 4 3 2 1 9 8
	Deque.push_back(7); // 4 3 2 1 9 8 7
	Deque.push_back(6); // 4 3 2 1 9 8 7 6

	// 앞의 데이터 제거
	Deque.pop_front(); // 3 2 1 9 8 7 6
	Deque.pop_front(); // 2 1 9 8 7 6

	// 뒤의 데이터 제거
	Deque.pop_back(); // 2 1 9 8 7
	Deque.pop_back(); // 2 1 9 8

	for (int i = 0; i < Deque.size(); i++)
	{
		cout << "<" << Deque[i] << ">";
	}
}