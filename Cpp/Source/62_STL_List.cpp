#include <iostream>
#include <list> // list사용 시 필요

using namespace std;

void main62()
{
	/*
		연결리스트(LinkedList)
		요소의 값과 다음요소를 가리키는 포인터를 함께 가지고 있다.
		길이가 고정되지 않아 자유롭게 크기를 변경할 수 있다.
		중간에 데이터를 삽입하고 삭제할 수 있다.
		STL리스트는 더블링크드리스트 기반
	*/

	list<int> List; // STL리스트 변수
	
	// iterator(반복자) : STL에 사용되는 포인터
	list<int> ::iterator pList = List.begin(); // 리스트의 시작점을 넣어줌

	List.push_front(1); // 앞에 1 추가
	List.push_back(10); // 뒤에 10 추가
	List.push_front(2); // 앞에 2 추가
	List.push_front(3); // 앞에 3 추가
	List.push_back(9);  // 뒤에 9 추가

	List.pop_front();   // 앞에 요소 제거

	pList = List.begin();
	pList++;
	pList++;
	List.insert(pList, 12); // 두번째 인덱스에 12 추가

	pList = List.end();
	--pList;
	--pList;
	List.erase(pList); // 뒤에서 첫번째 인덱스 제거

	for (pList = List.begin(); pList != List.end(); pList++)
	{
		cout << "<" << *pList << ">";
	}
}