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
	int data[MAX_DEQUE_SIZE]; 
public:
	Deque()
	{
		front = rear = 0;
	}
	~Deque() {} 

	bool isEmpty() 
	{
		return front == rear;
	}

	bool isFull() 
	{
		return front == (rear + 1) % MAX_DEQUE_SIZE;
	}
	
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
	
	int GetFront()
	{
		if (isEmpty())
		{
			cout << "deque is empty" << endl;
			exit(1);
		}
		return data[(front + 1) % MAX_DEQUE_SIZE];
	}
	int GetBack()
	{
		if (isEmpty())
		{
			cout << "deque is empty" << endl;
			exit(1);
		}
		return data[rear];
	}

	int size() 
	{
		return front <= rear ? rear - front : (rear + MAX_DEQUE_SIZE) - front;
	}

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


	Deque deque;
	deque.PushFront(1); //1
	deque.PushFront(2); //2, 1
	deque.PushFront(3); //3, 2, 1
	deque.PushFront(4); //4, 3, 2, 1

	deque.PushBack(9); //4, 3, 2, 1, 9
	deque.PushBack(8); //4, 3, 2, 1, 9, 8
	deque.PushBack(7); //4, 3, 2, 1, 9, 8, 7
	deque.PushBack(6); //4, 3, 2, 1, 9, 8, 7, 6

	deque.Print();

	deque.PopFront(); //3, 2, 1, 9, 8, 7, 6
	deque.PopFront(); //2, 1, 9, 8, 7, 6

	deque.PopRear(); //2, 1, 9, 8, 7
	deque.PopRear(); //2, 1, 9, 8
	deque.Print();

	return 0;
}
