#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int A[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
        if (A[i] < 40)
        {
            A[i] = 40;
        }
        sum += A[i];
    }
    cout << sum / 5;
    return 0;
}