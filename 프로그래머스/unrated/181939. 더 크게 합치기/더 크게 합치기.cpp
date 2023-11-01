#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string str1 = to_string(a) + to_string(b);
    string str2 = to_string(b) + to_string(a);
    a = stoi(str1);
    b = stoi(str2);
    if(a == b) answer = a;
    else a > b ? answer = a : answer = b;
    return answer;
}