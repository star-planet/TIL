#include <string>
#include <vector>
#include <cmath>

using namespace std;

int primeNum(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i == 0)
            return false;
    return true;
}

int solution(int n) {
    int i=1, answer = 0;
    if (primeNum(n-1)) 
        answer = n-1;
    else 
        while(++i)
        {
            if((n-1)%i == 0)
            {
                answer = i;
                break;   
            }   
        }
    return answer;
}