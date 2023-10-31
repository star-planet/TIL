#include <iostream>
#include <vector>
using namespace std;

void main61()
{
	/*
		* STL
		개발자들이 편하게 사용할 수 있는 자료구조와 알고리즘을 템플릿으로 제공하는 라이브러리

		* 컨테이너
		객체를 저장하는 것이 주 목적인 클래스
		요소의 저장공간을 관리하거나 액세스할 수 있는 여러가지 멤버함수 제공

		* Vector 컨테이너
		자동으로 메모리가 할당되는 배열
		Template을 사용하기 때문에 타입이 자유롭다.
		
		* Vector의 특징
		1. 여유분을 두고 메모리를 할당한다.
		2. 여유분이 모두 사용하면 메모리를 증설한다.
		3. 증설할 때 기존데이터가 복사된다.
	*/

	vector<int> a = { 1,2,3 };
	vector<int> b(5); // 5개의 크기를 가지는 vector 변수
	vector<int> c(4, 7); // 4개의 크기를 가지며 공간에 값을 7로 초기화 { 7, 7, 7, 7 }
	vector<int> d(c); // d에 c의 값을 복사 d(c) = d(4, 7)

	a.assign(3, 5); // 3개의 크기 할당, 전부 5로 초기화
	a.at(2); // 2번째 인덱스 값 참조
	a.front(); // 첫번째 인덱스 값 참조
	a.back(); // 마지막 인덱스 값 참조
	a.clear(); // 모든 요소 제거
	a.size(); // 실제 데이터 크기 반환
	a.capacity(); // 여유분 크기 반환
	a.insert(a.begin(), 2); // 시작점에 2의 값 추가
	a.erase(a.begin()); // 시작점에 있는 요소 제거
	// 이 외에도 다양한 명령어 존재

	// * Vector의 동작원리	
	vector<int> vec;

	for (int i = 0; i < 1000; i++)
	{
		vec.push_back(i); // 뒤에 데이터 추가
		cout << "size : " << vec.size(); // 실제 사용공간 수 출력
		cout << " / capacity : " << vec.capacity() << endl; // 여유공간 출력
	}
	// 여유분은 1.5배씩 증가한다. (컴파일러마다 다른다)
	// 데이터가 커질수록 기존데이터 복사 횟수를 줄일 수 있다.
	// vector의 여유분은 한번 늘어나면 줄일 수 없다.

	vec.reserve(10000); // 여유분은 크기를 100으로 할당
	vec.reserve(1);

	cout << "capacity : " << vec.capacity() << endl; // 그대로 10000이 출력

	// 여유분을 줄이는 방법은 새로 만들어서 데이터를 옮긴다.
	vector<int>temp;
	temp.swap(vec);

	cout << "capacity : " << vec.capacity() << endl; // 옮겨주면 0 출력, temp capacity가 10000이 됨

}