#include <iostream>
using namespace std;

int main()
{
    int K, N, M;
    cin >> K >> N >> M;
    if ((K * N) > M)
    {
        cout << K * N - M;   
    }
    else
    {
        cout << '0';
    }
    return 0;
}