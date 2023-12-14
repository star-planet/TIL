#include <iostream>
using namespace std;

int main()
{
    int L, P;
    int room[5];
    cin >> L >> P;
    int max = L * P;
    for (int i = 0; i < 5; i++)
    {
        cin >> room[i];
    }
    for (int i = 0; i < 5; i++)
    {
        room[i] = room[i] - max;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << room[i] << ' ';
    }
    return 0;
}