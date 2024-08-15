#include <iostream>
using namespace std;

int main()
{
    long long N, S;

    while (cin >> N >> S)
    {
        cout << S / (N + 1) << endl;
    }

    return 0;
}