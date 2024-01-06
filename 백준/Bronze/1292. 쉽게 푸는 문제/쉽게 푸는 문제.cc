#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A, B;
    int N = 1, Count = 0;
    cin >> A >> B;
    vector<int> Array;
    while (1)
    {
        Array.push_back(N);
        if (N == B) break;
        Count++;
        if (Count == N)
        {
            Count = 0;
            N++;
        }
    }
    int Sum = 0;
    for (int i = A - 1; i < B; i++)
    {
        Sum += Array[i];
    }
    cout << Sum;
    return 0;
}