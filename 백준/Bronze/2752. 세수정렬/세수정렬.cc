#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> A(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < 3; i++)
    {
        cout << A[i] << ' ';
    }
}