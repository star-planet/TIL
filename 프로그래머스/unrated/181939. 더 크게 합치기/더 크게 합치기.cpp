#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string str1 = to_string(a) + to_string(b);
    string str2 = to_string(b) + to_string(a);
    a = stoi(str1);
    b = stoi(str2);
    return a >= b ? a : b;
}