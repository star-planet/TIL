#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int _x = x;
    while(_x>0)
    {
        sum += _x % 10;
        _x/=10;
    }
    if(x%sum!=0)
        answer = false;
    return answer;
}