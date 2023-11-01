#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    while(k--)
    {
        answer.append(my_string);
    }
    return answer;
}