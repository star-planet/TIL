#include <iostream>
using namespace std;

#define MAX_DEQUE_SIZE 10

// * 원형 덱
//- 앞과 뒤가 연결되어 있는 구조
class Deque
{
private:
	int front;
	int rear;
	// 크기가 10인 data 배열 선언
	int data[MAX_DEQUE_SIZE];
public:
	Deque()
	{
		// front와 rear의 초기 값 0
		front = rear = 0;
	}
	~Deque() {}

	// front와 rear이 같다면 true를 반환 (원형 덱 공백 상태)
	bool isEmpty()
	{
		return front == rear;
	}

	// front와 rear + 1을 MAX_DEQUE_SIZE로 나눈 나머지가 같다면 true를 반환(원형 덱 포화 상태)
	bool isFull()
	{
		return front == (rear + 1) % MAX_DEQUE_SIZE;
	}

	// 원형 덱이 포화상태라면 문구 출력 후 강제 종료
	// 포화상태가 아니라면 front위치에 데이터 입력 후 front 위치를 바로 앞으로 옮긴다
	// front의 범위는 MAX_DEQUE_SIZE를 나눈 나머지로 조정한다.
	void PushFront(int n)
	{
		if (isFull())
		{
			cout << "deque is full" << endl;
			exit(1);
		}
		data[front] = n;
		front = (front - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
	}

	// 원형 덱이 포화상태라면 문구 출력 후 강제 종료
	// 포화상태가 아니라면 rear + 1위치에 데이터 입력
	// front와 rear의 초기 값이 0이기 때문에 rear + 1 위치에 입력한다.
	// rear의 범위는 MAX_DEQUE_SIZE를 나눈 나머지로 조정한다.
	void PushBack(int n)
	{
		if (isFull())
		{
			cout << "deque is full" << endl;
			exit(1);
		}
		rear = (rear + 1) % MAX_DEQUE_SIZE;
		data[rear] = n;
	}

	// 원형 덱이 공백상태라면 문구 출력 후 강제 종료
	// front의 위치는 Push를 통해 front -1이기 때문에 front + 1 위치의 데이터를 반환한다.
	int PopFront()
	{
		if (isEmpty())
		{
			cout << "Deque is Empty" << endl;
			exit(1);
		}
		front = (front + 1) % MAX_DEQUE_SIZE;
		return data[front];
	}

	// 원형 덱이 공백상태라면 문구 출력 후 강제 종료
	// rear - 1을 먼저하면 rear 값을 얻을 수 없기 때문에 rear위치의 데이터를 temp에 저장한 후 rear - 1위치로 옮긴다.
	// 그 후 temp의 데이터 반환
	int PopRear()
	{
		if (isEmpty())
		{
			cout << "Deque is Empty" << endl;
			exit(1);
		}
		int temp = data[rear];
		rear = (rear - 1 + MAX_DEQUE_SIZE) % MAX_DEQUE_SIZE;
		return temp;
	}

	// 원형 덱이 공백상태라면 문구 출력 후 강제 종료
	// 공백상태가 아니라면 front + 1 위치의 데이터 반환
	int GetFront()
	{
		if (isEmpty())
		{
			cout << "deque is empty" << endl;
			exit(1);
		}
		return data[(front + 1) % MAX_DEQUE_SIZE];
	}

	// 원형 덱이 공백상태라면 문구 출력 후 강제 종료
	// 공백상태가 아니라면 rear 위치의 데이터 반환
	int GetBack()
	{
		if (isEmpty())
		{
			cout << "deque is empty" << endl;
			exit(1);
		}
		return data[rear];
	}

	// 원형 덱의 사이즈를 반환한다.
	// front가 rear보다 작거나 같으면 rear - front, 그게 아니면 (rear + MAX_DEQUE_SIZE) - front를 반환
	int size()
	{
		return front <= rear ? rear - front : (rear + MAX_DEQUE_SIZE) - front;
	}

	// front + 1 부터 front + size()까지의 값을 출력하는데 배열 범위는 0 ~ 9이므로 MAX_DEQUE_SIZE로 나눠준다.
	void Print()
	{
		for (int i = front + 1; i <= front + size(); i++)
		{
			cout << "[" << data[i % MAX_DEQUE_SIZE] << "]";
		}
		cout << endl;
	}
};

int main()
{
	// class 선언
	Deque deque;
	// front로 데이터를 입력한다.
	deque.PushFront(1); // 1
	deque.PushFront(2); // 2 1
	deque.PushFront(3); // 3 2 1
	deque.PushFront(4); // 4 3 2 1

	// rear으로 데이터를 입력한다.
	deque.PushBack(9); // 4 3 2 1 9
	deque.PushBack(8); // 4 3 2 1 9 8
	deque.PushBack(7); // 4 3 2 1 9 8 7
	deque.PushBack(6); // 4 3 2 1 9 8 7 6

	// 원형 덱 현재 상태 출력
	deque.Print();

	// front의 데이터를 내보낸다
	deque.PopFront(); // 3 2 1 9 8 7 6
	deque.PopFront(); // 2 1 9 8 7 6

	// rear의 데이터를 내보낸다
	deque.PopRear(); // 2 1 9 8 7
	deque.PopRear(); // 2 1 9 8

	// 원형 덱 현재 상태 출력
	deque.Print();

	return 0;
}
