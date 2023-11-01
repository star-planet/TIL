#include <iostream>

using namespace std;

int cal(int n)
{
    if(n/10 == 0) return n%10;
    return n%10 + cal(n/10);
}

int solution(int n)
{
    int answer = cal(n);

    return answer;
}