#include <iostream>
using namespace std;

int main()
{
    int sec[4];
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> sec[i];
        sum += sec[i];
    }
    cout << sum / 60 << '\n';
    cout << sum % 60 << '\n';
    return 0;
}