#include <iostream>
#include <map>
using namespace std;

void main66()
{
	/*
		맵(Map)
		key와 value 쌍으로 이루어진 컨테이너
		key는 중복을 허용하지 않음
		key를 이용하여 value(값)을 추가할 수 있다.
		map은 자료를 저장하는 경우 자동으로 오름차순 정렬
	*/

	map<string, int> Map;
	Map.insert({ "공격력", 111 });
	Map.insert({ "방어력", 30 });
	Map.insert({ "currentHp", 40 });

	Map.erase("currentHp");

	Map.insert({ "힘", 11 });
	Map.insert({ "민첩", 4 });
	Map.insert({ "지능", 7 });

	cout << "입힌 데미지 : " << Map.find("공격력")->second << endl;

	for (auto ptr = Map.begin(); ptr != Map.end(); ptr++)
	{
		cout << "key : " << ptr->first;
		cout << " / value : " << ptr->second << endl;
	}

	map<string, string> domain;

	domain.insert({ "네이버", "www.naver.com" });
	domain.insert({ "다음", "www.daum.net" });
	domain.insert({ "구글", "www.google.com" });

	cout << domain.find("네이버")->second << endl;

}