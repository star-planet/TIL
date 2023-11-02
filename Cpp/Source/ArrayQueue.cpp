#pragma once
#include <cstdio>
#include <cstdlib>
#define MAX_QUEUE_SIZE 100

// * 원형 큐
//- 처음 값이 배열의 끝에 도달하면 다음 증가값은 처음값이 되도록 함
//- 처음과 끝이 연결되어 있는 형태


// error가 발생하면 문구 출력 후 강제종료
inline void error(const char* message)
{
	printf("%s\n", message);
	exit(1);
}

class CircularQueue
{
protected:
	int front;
	int rear;
	// 크기가 100인 data 배열 선언
	int data[MAX_QUEUE_SIZE];
public:
	CircularQueue()
	{
		// front과 rear의 초기 값 0
		front = rear = 0;
	}

	// front와 rear가 같다면 true 반환 (비어있는지 확인하는 용도)
	bool isEmpty() { return front == rear; }

	// 크기가 100인 배열에서 예를 들어 front가 1 rear가 100이면 가득찬 것이므로
	// rear + 1을 MAX_QUEUE_SIZE로 나눈 나머지가 front와 같다면 true 반환
	bool isFull()
	{
		return (rear + 1) % MAX_QUEUE_SIZE == front;
	}

	// 원형 큐가 포화상태라면 에러 문구 반환 후 강제 종료
	// 원형 큐가 포화상태가 아니라면 rear + 1 값을 MAX_QUEUE_SIZE로 나눈 나머지 위치에 데이터 추가
	// 처음과 끝이 연결되어 있기 때문에 처음과 끝의 위치는 항상 변한다. 그렇기에 MAX_QUEUE_SIZE로 나눠주어야 한다.
	void enqueue(int val)
	{
		if (isFull())
		{
			error("queue is full");
		}
		else
		{
			rear = (rear + 1) % MAX_QUEUE_SIZE;
			data[rear] = val;
		}
	}

	// 원형 큐가 비어있는 상태라면 오류문구 출력 후 강제 종료
	// 비어있는 상태가 아니라면 front + 1 값을 MAX_QUEUE_SIZE로 나눈 나머지 위치로 이동 후 데이터를 출력 후 반환한다.
	// 처음과 끝이 연결되어 있기 때문에 처음과 끝의 위치는 항상 변한다. 그렇기에 MAX_QUEUE_SIZE로 나눠주어야 한다.
	int dequeue()
	{
		if (isEmpty())
		{
			error("queue is empty");
		}
		else
		{
			front = (front + 1) % MAX_QUEUE_SIZE;
			printf("dequeue : %d\n", data[front]);
			return data[front];
		}
	}

	// 원형 큐가 비어있는 상태라면 오류문구 출력 후 강제 종료
	// 원형 큐의 가장 앞 부분(front)를 출력한다
	int peek()
	{
		if (isEmpty())
		{
			error("queue is empty");
		}
		else
		{
			printf("peek : %d\n", data[(front + 1) % MAX_QUEUE_SIZE]);
			return data[(front + 1) % MAX_QUEUE_SIZE];
		}
	}
	void Print()
	{
		printf("큐 내용 : ");
		int max = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
		for (int i = front + 1; i <= max; i++)
		{
			printf("[%2d]", data[i % MAX_QUEUE_SIZE]);
		}
		printf("\n");
	}
};

void main()
{


	CircularQueue que;
	for (int i = 1; i < 10; i++)
	{
		que.enqueue(i);
	}
	que.Print();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.peek();
	que.Print();

}
