#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long long Result = N;
    for (int i = N - 1; i > 0; i--)
    {
        Result *= i;
    }
    if (Result == 0)
    {
        Result = 1;
    }
    cout << Result;
    return 0;
}