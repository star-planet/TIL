#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    vector<long long> Array;
    Array.push_back(0);
    Array.push_back(1);
    cin >> N;
    if (N == 0) cout << '0';
    else if (N == 1) cout << '1';
    else
    {
        for (int i = 2; i <= N; i++)
        {
            Array.push_back(Array[i - 1] + Array[i - 2]);
        }
        cout << Array.back();
    }
    return 0;
}