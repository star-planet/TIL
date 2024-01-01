#include <iostream>
using namespace std;

int Binomial(int N, int K)
{
    if (K == N || K == 0)
        return 1;
    return Binomial(N - 1, K - 1) + Binomial(N - 1, K);
}

int main()
{
    int N, K;
    cin >> N >> K;

    cout << Binomial(N, K);
    return 0;
}