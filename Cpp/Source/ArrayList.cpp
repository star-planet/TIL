#include <stdio.h>
#define MAX_LIST_SIZE 100

class ArrayList
{
private:
	// 크기가 100인 data 배열 선언
	int data[MAX_LIST_SIZE];
	int lenght;
public:
	// lenght의 초기 값 0
	ArrayList() { lenght = 0; }

	// Error 발생 시 문구 출력
	void Error(const char* chr)
	{
		printf("%s", *chr);
	}

	// index위치의 값을 반환
	int GetEntry(int index) { return data[index]; }

	// lenght가 0이면 true를 반환 (비어있는지 확인하는 용도)
	bool isEmpty() { return lenght == 0; }

	// lenght가 MAX_LIST_SIZE면 true를 반환 (가득 차있는지 확인하는 용도)
	bool isFull() { return lenght == MAX_LIST_SIZE; }

	// item이 리스트 안에 있으면 true반환, 아니면 false 반환
	bool Find(int item)
	{
		for (int i = 0; i < lenght; i++)
		{
			if (data[i] == item)
			{
				return true;
			}
		}
		return false;
	}

	// 리스트 index번째 값을 item으로 대체
	void Replace(int index, int item)
	{
		data[index] = item;
	}

	// 리스트가 포화상태가 아니면 index위치 기준 값부터부터 배열의 끝 값을 한 칸씩 뒤로 밀어낸 후 index위치에 값을 넣고 길이 +1
	// 리스트가 포화상태라면 삽입이 불가하므로 오류문구 출력
	void Insert(int index, int item)
	{
		if (!isFull() && index >= 0 && index <= lenght)
		{
			for (int i = lenght; i > index; i--)
			{
				data[i] = data[i - 1];
			}
			data[index] = item;
			lenght++;
		}
		else
		{
			Error("포화 or 삽입위치 오류");
		}
	}

	// 리스트이 비어있지 않다면 index위치 기준 뒤 쪽의 값을 한 칸씩 앞당기고 길이 -1
	// 리스트이 비어있다면 삭제가 불가하므로 오류문구 출력
	void Remove(int index)
	{
		if (!isEmpty() && 0 <= index && index < lenght)
		{
			for (int i = index + 1; i < lenght; i++)
			{
				data[i - 1] = data[i];

			}
			lenght--;
		}
		else
		{
			Error("비어있음 or 삭제 위치 오류");
		}
	}

	// 길이를 0으로 초기화하면서 리스트 초기화
	void Clear()
	{
		lenght = 0;
	}

	// 리스트의 총 길이를 반환
	int size() { return lenght; }

	// 리스트 갯수와 리스트 값을 두 자리로 출력(두 자리보다 크면 그대로 출력, 두 자리보다 작으면 공백을 둠)
	void Print()
	{
		printf("리스트 갯수 : %2d", size());
		for (int i = 0; i < size(); i++)
		{
			printf("[%2d]", data[i]);
		}
		printf("\n");
	}
};


int main67()
{
	ArrayList list;

	// 0번 index에 10 추가
	list.Insert(0, 10); // 10

	// 0번 index에 20 추가
	list.Insert(0, 20); // 20 10

	// 1번 index에 30 추가
	list.Insert(1, 30); // 20 30 10

	// 현재 리스트 크기(3) index에 40 추가
	list.Insert(list.size(), 40); // 20 30 10 40

	// 현재 리스트 크기(4) index에 50 추가
	list.Insert(list.size(), 50); // 20 30 10 40 50

	// 리스트 출력
	list.Print(); // 20 30 1 40 50

	// 2번 index 값 삭제
	list.Remove(2); // 20 30 40 50

	// 현재 리스트 크기(4) - 1 -> 3번 index 값 삭제
	list.Remove(list.size() - 1); // 20 30 50

	// 0번 index 값 삭제
	list.Remove(0); // 30 50

	// 1번 index 값을 90으로 대체
	list.Replace(1, 90); // 30 90

	// 리스트 출력
	list.Print(); // 30 90

	// 리스트 초기화
	list.Clear();

	// 리스트 출력
	list.Print(); // 

	return 0;
}