#include <iostream>

using namespace std;

void main4() 
{
	/*
		cout(출력문)
		#include <iostream> 을 적어야한다.
		using namespace std; 를 적어야한다.
	*/

	// endl : 개행시켜주는 명령어
	cout << "Hello World!" << endl;

	int a = 123;
	float b = 12.34f;
	char c = 'a';

	cout << "a: " << a << endl;
	cout << "b: " << b << endl << "c: " << c << endl;

	/* cin(입력문) */

	int age;
	cout << "나이 입력 : ";
	cin >> age; // 입력을 받아서 age 변수에 넣어준다.

	cout << "나이 : " << age << endl;
}
