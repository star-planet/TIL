#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int Day, Count = 0;
    vector<int> CarNum(5);

    cin >> Day;
    for (int i = 0; i < 5; i++)
    {
        cin >> CarNum[i];
        if (CarNum[i] == Day)
        {
            Count++;
        }
    }
    cout << Count;
    return 0;
}