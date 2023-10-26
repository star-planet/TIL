#include <stdio.h>
#include <string.h>
#include <string> // string 사용을 위해 필요
#include <iostream>

using std::string; // string 사용을 위해 필요
using namespace std;

void main48()
{
	/*
		* string
		문자열은 char를 배열로 사용한다.
		string은 문자열을 다루는 클래스
		string은 char*과 char[]과 다르게 문자열 끝에 '\0'이 없다.
		문자열 길이 변경이 가능하다.
		다양한 멤버함수를 제공한다.
	*/
	string str1 = "Hello";
	printf("str1 : %s\n", str1.c_str());
	// string은 C++이고 printf는 C언어 명령어이다. 
	// printf에 string을 지원하는 로직이 없으므로 오류가 발생
	// 멤버함수 c_str을 호출하면 string을 char*로 변환해준다.

	string str2("World"); // 클래스이므로 생성자로 초기화할 수 있다.

	string str3 = str1 + str2; // string은 "+"연산자로 문자열을 연결할 수 있다.
	cout << str3 << endl;

	str3.append("!!!"); // append : 문자열 연결
	cout << str3 << endl;

	cout << str3.length() << endl; // length : 문자열 길이 반환
}