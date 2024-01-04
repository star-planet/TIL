#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int Sum = (A * 3600) + (B * 60) + C + D;
    int H = (Sum / 3600) % 24;
    int M = ((Sum % 3600) / 60) % 60;
    int S = (Sum % 3600 % 60) % 60;
    cout << H << ' ' << M << ' ' << S;
}