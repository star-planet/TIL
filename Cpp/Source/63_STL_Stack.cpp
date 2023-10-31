#include <iostream>
#include <stack>
using namespace std;

void main63()
{
	/*
		* 스택
		후입선출
		LIFO(Last In First Out)
		가장 먼저 들어온 데이터는 마지막에 나간다.
		마지막에 들어온 데이터는 첫번째로 나간다.

		* 스택 활용 예시
		웹 브라우저 뒤로가기 : 마지막에 열린 페이지부터 뒤로감
		Ctrl + Z = 마지막에 수정한 내역부터 되돌림
	*/


	stack<int> Stack;

	Stack.push(1); // 데이터 추가
	Stack.push(2);
	Stack.push(3);
	Stack.push(4);
	cout << "top : " << Stack.top() << endl;
	Stack.pop();
	cout << "top : " << Stack.top() << endl;
	Stack.pop();
	cout << "top : " << Stack.top() << endl;
}