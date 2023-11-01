#pragma once
#include <cstdio> //<stdio.h> 와 동일
#include <cstdlib> //<stdlib.h> 와 동일

// * 배열을 이용한 int스택 구현

// error 발생 시 에러 문구 출력 후 강제 종료
inline void error(const char* message)
{
	printf("%s\n", message);
	exit(1);
}

// 상수 변수 선언
const int MAX_STACK_SIZE = 20;

class ArrayStack
{
	int top;
	// 크기가 20인 data 배열 선언
	int data[MAX_STACK_SIZE];
public:
	// top의 초기 값 -1
	ArrayStack() { top = -1; }
	~ArrayStack() {}

	// top이 -1이라면 true를 반환 (비어있는지 확인하는 용도)
	bool isEmpty() { return top == -1; }

	// top이 MAX_STACK_SIZE라면 true를 반환 (가득 차있는지 확인하는 용도)
	bool isFull() { return top == MAX_STACK_SIZE; }

	// 스택이 포화상태라면 삽입이 불가하므로 에러문구 출력 후 강제 종료
	// 포화상태가 아니라면 현재 위치를 +1하고 그 위치에 데이터 추가
	void push(int e)
	{
		if (isFull())
		{
			error("stack is full");
		}
		data[++top] = e;
	}

	// 스택이 비어있는 상태라면 삭제가 불가하므로 에러문구 출력 후 강제종료
	// 비어있는 상태가 아니라면 현재 위치의 값을 반환하고 현재 위치를 -1 한다.
	int pop()
	{
		if (isEmpty())
		{
			error("stack is empty");
		}
		return data[top--];
	}

	// 스택이 비어있는 상태라면 값이 없는 상태이므로 에러문구 출력 후 강제종료
	// 비어있는 상태가 아니라면 최상단 위치의 값을 반환
	int peek()
	{
		if (isEmpty())
		{
			error("stack is empty");
		}
		return data[top];
	}

	// top의 초기 값이 -1이므로 출력 시에 +1한 값을 스택 갯수로 출력한다.
	// 스택 갯수 출력 후 그 뒤에 스택 데이터를 출력
	void Print()
	{
		printf("스택 갯수 : %d ", top + 1);
		for (int i = 0; i <= top; i++)
		{
			printf(" <%d> ", data[i]);
		}
		printf("\n");
	}
};

void main()
{
	// class 선언
	ArrayStack stack;

	// 스택에 1 ~ 9을 값을 추가한다.
	for (int i = 1; i < 10; i++)
	{
		stack.push(i); // 1 2 3 4 5 6 7 8 9
	}

	// 스택 출력
	stack.Print(); // 1 2 3 4 5 6 7 8 9

	// 스택 최상단 값을 제거
	stack.pop(); // 1 2 3 4 5 6 7 8

	// 스택 최상단 값을 제거
	stack.pop(); // 1 2 3 4 5 6 7

	// 스택 최상단 값을 제거
	stack.pop(); // 1 2 3 4 5 6

	// 스택 출력
	stack.Print(); // 1 2 3 4 5 6
}